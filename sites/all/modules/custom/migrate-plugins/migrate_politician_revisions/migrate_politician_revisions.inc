<?php

abstract class BasicMigratePoliticianRevision extends Migration {
  public function __construct() {
    parent::__construct();
  }
}

class PoliticianRevisionMigration extends BasicMigratePoliticianRevision {
  public function __construct() {
    parent::__construct();

    // Setting up dependencies, migrate Politician profiles first
    $this->dependencies = array('Politician');

    // Connect to legacy database and select oldest profile
    // of each politican (oldest=1)
    $query = Database::getConnection('default', 'parlamentwatch')
      //->select('legacy_user_sample', 'u'); // To work with sample data only
      ->select('legacy_user', 'u'); // @TODO activate!
    $query->join('legacy_projects', 'p', 'u.cmd = p.cmd');
    $query->fields('u', array('uid', 'uuid', 'username', 'title', 'nickname',
                              'first_name', 'last_name', 'first_lang', 'email',
                              'gender', 'birthday', 'residence', 'childs',
                              'job', 'marriage', 'url_picture',
                              'copyright_picture', 'twitter_account', 'party',
                              'txt_political_goals', 'txt_about_me',
                              'political_roles', 'links'));
    $query->fields('p', array('parliament', 'valid_from'));
    // @TODO confirm working
    $query->condition('u.oldest', 0, '='); // Revisions
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

    // Prepare mapping
    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationUser();
    $this->map = new MigrateSQLMap($this->machineName,
      array('uid' => array('type' => 'int',
                           'not null' => TRUE,
                           'alias' => 'u')),
                          MigrateDestinationUser::getKeySchema());

    // Update existing profiles
    //$this->systemOfRecord = Migration::DESTINATION;
    $this->addFieldMapping('uid', 'uid');
    //  ->sourceMigration('Politician');
    $this->addFieldMapping('is_new')
      ->defaultValue(FALSE);
    $this->addFieldMapping('revision')
      ->defaultValue(TRUE);

    // Map old to new data fields
    $this->addFieldMapping('name', 'username'); //->dedupe('users', 'name');
    $this->addFieldMapping('created', 'valid_from');
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('field_user_title', 'title');
    $this->addFieldMapping('uuid', 'uuid');
    $this->addFieldMapping('mail', 'email');
    $this->addFieldMapping('field_user_gender', 'gender');
    $this->addFieldMapping('field_user_birthday', 'birthday');
    $this->addFieldMapping('field_user_pseudonym', 'nickname');
    // @TODO update for new profiles
  //$this->addFieldMapping('field_user_?@TODO?', 'residence');
    $this->addFieldMapping('field_user_childs', 'childs');
    $this->addFieldMapping('field_user_job_skills', 'job');
    $this->addFieldMapping('field_user_marriage_status', 'marriage');
    $this->addFieldMapping('role_names')->defaultValue('politician');
    // @TODO update for new profiles
  //$this->addFieldMapping('field_user_?@TODO?', 'twitter_account');
    $this->addFieldMapping('field_user_party', 'party')
      ->arguments(array('create_term' => TRUE));
    // @TODO update for new profiles
  //$this->addFieldMapping('field_user_?@TODO?', 'txt_political_goals');
    // @TODO update for new profiles
  //$this->addFieldMapping('field_user_?@TODO?', 'txt_about_me');
    $this->addFieldMapping('field_user_political_roles', 'political_roles')
      ->separator(';')->arguments(array('create_term' => TRUE));
    $this->addFieldMapping('field_user_picture', 'url_picture');
    // @TODO update for new profiles
  //$this->addFieldMapping('field_user_?@TODO?', 'copyright_picture');
    if(variable_get('site_name') != 'dailwatch.ie'){
      $this->addFieldMapping('field_user_more', 'links')->separator('|');
    }
    // @TODO language?
    $this->addFieldMapping('language')->defaultValue('en-gb');
  }

  public function prepareRow($current_row) {
    $current_row->uid = user_load_by_name($current_row->username)->uid;

    // @DEBUG REMOVE
    watchdog("PW_TEST", t("DEBUG USER " . $current_row->uid . ' ' . user_load_by_name($current_row->username)->uid . ' ' . $current_row->username),
                  $variables = NULL, WATCHDOG_DEBUG, $link = NULL);


    if($current_row->birthday < 1) {
      $current_row->birthday = NULL;
    }
    if($current_row->valid_from < 1){
      $current_row->valid_from = NULL;
    }
  }

  public function complete($current_row){
    $entity = user_load($current_row->uid);

  /* //@TODO 2nd language deprecated, remove?
    if($this->sourceValues->second_lang && $this->sourceValues
        ->first_name_2nd_lang){

      // This is the array structure for the field you are translating,
      // in my case the name was "name_field" and the language target, English.
      // $value is the translated string.

      $translation = array(
        'translate' => 0,
        'status' => 1,
         // here is the language you're translating to
        'language' => $this->sourceValues->second_lang,
        // here is the source language
        'source' => $this->sourceValues->first_lang,
      );

      // get the translation handler in place
      $handler = entity_translation_get_handler('user', $entity, TRUE);
      // This is the array structure for the field you are translating,
      // in my case the name was "name_field" and the language target, English.
      // $value is the translated string.
      $entity->field_user_first_letter_lname['und'][0]['value'] =
        substr($this->sourceValues->last_name, '1','2');
      $entity->field_user_fname[$this->sourceValues->first_lang][0]['value'] =
        $this->sourceValues->first_name;
      $entity->field_user_lname[$this->sourceValues->first_lang][0]['value'] =
        $this->sourceValues->last_name;
      $entity->field_user_fname[$this->sourceValues->second_lang][0]['value'] =
        $this->sourceValues->first_name_2nd_lang;
      $entity->field_user_lname[$this->sourceValues->second_lang][0]['value'] =
        $this->sourceValues->last_name_2nd_lang;
      $values = array(
        'user_fname' => array (
          $this->sourceValues->second_lang => array(
            '0' => array(
              'value' => $this->sourceValues->first_name_2nd_lang,
             ),
          ),
          $this->sourceValues->first_lang => array(
            '0' => array(
              'value' => $this->sourceValues->first_name,
             )
           )
         ),
        'user_lname' => array (
          $this->sourceValues->second_lang => array(
            '0' => array(
              'value' => $this->sourceValues->last_name_2nd_lang,
             )
           ),
          $this->sourceValues->first_lang => array(
            '0' => array(
              'value' => $this->sourceValues->last_name,
             )
           )
         ),

      );
      /*$values = array(
        'field_user_fname' => array (
          $this->sourceValues->first_lang => array(
            '0' => array(
              'value' => $this->sourceValues->first_name,
             )
           )
         ),
        'field_user_lname' => array (
          $this->sourceValues->first_lang => array(
            '0' => array(
              'value' => $this->sourceValues->last_name,
             )
           )
         ),
      );* /
      // Finally you set the translation and save the object.
      $handler->setTranslation($translation, $values);
      //print_r($entity);

    } // if end
  else{ */
    $lang_obj = variable_get('language_default');
    $entity->field_user_fname['und'][0]['value'] =
      $this->sourceValues->first_name;
    $entity->field_user_lname['und'][0]['value'] =
      $this->sourceValues->last_name;
    $entity->field_user_first_letter_lname['und'][0]['value'] =
      substr($this->sourceValues->last_name, 0,1);
  //$entity->field_user_fname['und'][0]['value'] =
  //  $this->sourceValues->first_name;
    $entity->field_user_fname[$lang_obj->language][0]['value'] =
      $this->sourceValues->first_name;
    $entity->field_user_lname[$lang_obj->language][0]['value'] =
      $this->sourceValues->last_name;
    $entity->revision = 0;
  //} // else end
    $entity->revision = 0;
    user_save($entity);
  }
}
