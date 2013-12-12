<?php

abstract class BasicMigrateConstituency extends Migration {
  public function __construct() {
    parent::__construct();
  }
}

class ConstituencyTermMigration extends BasicMigrateConstituency {
  public function __construct() {
    parent::__construct();

    // Setting up dependencies, migrate parliaments & states first
    $this->dependencies = array('ParliamentTerm');
    $this->dependencies = array('StateTerm');

    // Sets up database connection and query
    $query = Database::getConnection('default', 'parlamentwatch')
      ->select('legacy_constituency', 'c');
    $query->join('legacy_projects', 'p', 'c.cmd = p.cmd');
    $query->fields('c', array('id', 'constituency', 'constituency_nr',
                              'area_codes', 'state'));
    $query->fields('p', array('parliament'));

    // Gets only migration terms for the current site
    switch(variable_get('site_name')){

      // Germany
      case 'abgeordnetenwatch.de':
        $query->condition('p.project_cmd', array(0, 2000), 'BETWEEN');
        $query->condition('p.project_cmd',
                          array(233, 486, 974, 1036, 1010, 1475), 'NOT IN');
        break;

      // Tunesia
      case 'marsad.tn':
        $query->condition('p.project_cmd', 974);
        break;

      // Ireland
      case 'dailwatch.ie':
        $query->condition('p.project_cmd', array(233, 486, 30073, 30988));
        break;

      // Pirate party bavaria
      case 'piratenpartei-bayern.de':
        $query->condition('p.project_cmd', array(1036, 1010, 1475));
        break;

      // Luxembourg
      case 'politikercheck.lu':
        $query->condition('p.project_cmd', array(20000, 30000), 'BETWEEN');
        break;

      default:
        $query->condition('p.project_cmd', 0);
        break;
    }

    // Starts the migration based on the created query
    $this->source = new MigrateSourceSQL($query);
    $this->map = new MigrateSQLMap($this->machineName, array(
                    'id' => array(
                      'type' => 'int',
                      'not null' => TRUE)
                    ), MigrateDestinationTerm::getKeySchema()
    );

    // Adds new taxonomy term 'constituency'
    $this->destination = new MigrateDestinationTerm('constituency');

    // Placeholder for empty description
    $lorem = 'Lorem ipsum dolor sit amet, consetetur sadipscing '
          . 'elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore '
          . 'magna aliquyam erat, sed diam voluptua. At vero eos et accusam et '
          . 'justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea '
          . 'takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum '
          . 'dolor sit amet, consetetur sadipscing elitr, sed diam nonumy '
          . 'eirmod tempor invidunt ut labore et dolore magna aliquyam erat, '
          . 'sed diam voluptua. At vero eos et accusam et justo duo dolores et '
          . 'ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est '
          . 'Lorem ipsum dolor sit amet.';

    // Maps the constituency term fields
    $this->addFieldMapping('name', 'constituency');
    $this->addFieldMapping('description')->defaultValue($lorem);
    $this->addFieldMapping('field_constituency_nr', 'constituency_nr');

    // Connects constituency term with parliament term
    $this->addFieldMapping('field_parliament', 'parliament');

    // Connects constituency term with area codes, creates it if not exists
    $this->addFieldMapping('field_constituency_area_codes', 'area_codes')
      ->separator(',')->arguments(array('create_term' => TRUE));

    // Connects constituency term with federal states
    $this->addFieldMapping('parent_name', 'state')
      ->arguments(array('source_type' => 'name'))
      ->sourceMigration($this->machineName);
  }

  public function prepareRow($r) {
    if (empty($r->constituency)) {

      // Skip empty constituency terms
      return FALSE;
    } else {

      // Create constituency term
      return TRUE;
    }
  }
}
