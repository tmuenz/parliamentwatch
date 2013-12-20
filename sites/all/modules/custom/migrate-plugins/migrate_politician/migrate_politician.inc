<?php

abstract class BasicMigratePolitician extends Migration {
  public function __construct() {
    parent::__construct();
  }
}

class PoliticianMigration extends BasicMigratePolitician {
  public function __construct() {
    parent::__construct();

    // Setting up dependencies, migrate taxonomy terms first
    $this->dependencies = array('ParliamentTerm');
    //$this->dependencies = array('ConstituencyTerm');

    // Connect to legacy database and select profiles
    $query = Database::getConnection('default', 'parlamentwatch')
      ->select('legacy_user_sample', 'u'); // To work with sample data only
      //->select('legacy_user', 'u'); // @TODO activate!
    $query->join('legacy_projects', 'p', 'u.cmd = p.cmd');
    //$query->join('legacy_constituency', 'c', 'u.cmd = c.cmd');
    $query->fields('u', array('uid', 'uuid', 'username', 'title', 'nickname',
                              'first_name', 'last_name', 'first_lang', 'email',
                              'gender', 'birthday', 'residence', 'childs',
                              'job', 'marriage', 'url_picture', 'profile_id',
                              'copyright_picture', 'twitter_account', 'party',
                              'txt_political_goals', 'txt_about_me',
                              'political_roles', 'links', 'oldest'));
    $query->fields('p', array('parliament', 'valid_from'));
    // @TODO confirm working
    //$query->condition('u.oldest', 0, '='); // Revisions

    switch(variable_get('site_name')){
      case 'abgeordnetenwatch.de':
        $query->condition('p.project_cmd', array(0, 2000), 'BETWEEN');
        $query->condition('p.project_cmd',
                          array(233, 486, 974, 1036, 1010, 1475), 'NOT IN');
        break;
      case 'marsad.tn':
        $query->condition('p.project_cmd', 974);
        break;
      case 'dailwatch.ie':
        // @TODO: ? 1036, 1010, 1475
        $query->condition('p.project_cmd', array(233, 486, 30073, 30988));
        break;
      case 'piratenpartei-bayern.de':
        $query->condition('p.project_cmd', array(1036, 1010, 1475));
        break;
      case 'politikercheck.lu':
        $query->condition('p.project_cmd', array(20000, 30000), 'BETWEEN');
        break;
      default:
        $query->condition('p.project_cmd', 0);
        break;
    }
    // @TODO order query by oldest DESC
    $query->orderBy('u.last_name', 'ASC');
    $query->orderBy('u.oldest', 'DESC');

    watchdog("PW_TEST", t("FULL QUERY " . $query),
             $variables = NULL, WATCHDOG_DEBUG, $link = NULL);

    // Prepare mapping
    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationUser();
    $this->map = new MigrateSQLMap($this->machineName,
      array('profile_id' => array('type' => 'int', // @TODO this maps profile_id
                          'not null' => TRUE,
                          'alias' => 'u')),
            MigrateDestinationUser::getKeySchema());

    // Map old to new data fields
    $this->addFieldMapping('is_new', 'is_new');
    $this->addFieldMapping('revision', 'revision');
    $this->addFieldMapping('uid', 'uid'); // @TODO check unique
    $this->addFieldMapping('name', 'username')->dedupe('users', 'name');
    $this->addFieldMapping('created', 'valid_from');
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('field_user_title', 'title');
    $this->addFieldMapping('uuid', 'uuid');
    $this->addFieldMapping('mail', 'email');
    $this->addFieldMapping('field_user_gender', 'gender');
    $this->addFieldMapping('field_user_birthday', 'birthday');
    $this->addFieldMapping('field_user_fname', 'first_name');
    $this->addFieldMapping('field_user_lname', 'last_name');
    $this->addFieldMapping('field_user_pseudonym', 'nickname');
    $this->addFieldMapping('field_user_residence', 'residence'); // @TODO check
    $this->addFieldMapping('field_user_childs', 'childs');
    $this->addFieldMapping('field_user_job_skills', 'job');
    $this->addFieldMapping('field_user_marriage_status', 'marriage');
    $this->addFieldMapping('role_names')->defaultValue('politician');
    $this->addFieldMapping('field_user_twitter_account', 'twitter_account');
    $this->addFieldMapping('field_user_party', 'party')
      ->arguments(array('create_term' => TRUE));
    $this->addFieldMapping('field_user_parliament', 'parliament');
    $this->addFieldMapping('field_user_political_goals', 'txt_political_goals');
    $this->addFieldMapping('field_user_about', 'txt_about_me');
    $this->addFieldMapping('field_user_political_roles', 'political_roles')
      ->separator(';')->arguments(array('create_term' => TRUE));
    $this->addFieldMapping('field_user_picture', 'url_picture');
    $this->addFieldMapping('field_user_picture:alt', 'copyright_picture'); // @TODO check
    if(variable_get('site_name') != 'dailwatch.ie'){
      $this->addFieldMapping('field_user_more', 'links')->separator('|');
    }
    $this->addFieldMapping('language', 'first_lang')->defaultValue('en-gb');
  }

  public function prepareRow($r) {
    watchdog("PW_TEST", t("PREPARE ROW UID " . $r->uid),
             $variables = NULL, WATCHDOG_DEBUG, $link = NULL);
    watchdog("PW_TEST", t("PREPARE ROW OLDEST " . $r->oldest),
             $variables = NULL, WATCHDOG_DEBUG, $link = NULL);

    // Sets unknown birthday to NULL
    if($r->birthday < 1) {
      $r->birthday = NULL;
    }

    // Sets unknown date to NULL
    if($r->valid_from < 1){
      $r->valid_from = NULL;
    }

    // Checks wether to create a profile or revision
    if($r->oldest == 1) {
      watchdog("PW_TEST", t("PREPARE ROW OLDEST IF1 " . $r->oldest),
               $variables = NULL, WATCHDOG_DEBUG, $link = NULL);

      // New profile
      $r->is_new = TRUE;
      $r->revision = FALSE;
    } else { // @TODO!important - this never gets called - why?
      watchdog("PW_TEST", t("PREPARE ROW OLDEST ELSE " . $r->oldest),
               $variables = NULL, WATCHDOG_DEBUG, $link = NULL);

      // New revision
      $r->is_new = FALSE;
      $r->revision = TRUE;
    }
  }
}
