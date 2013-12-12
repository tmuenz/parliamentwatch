<?php

abstract class BasicMigrateState extends Migration {
  public function __construct() {
    parent::__construct();
  }
}

class StateTermMigration extends BasicMigrateState {
  public function __construct() {
    parent::__construct();

    // Setting up dependencies, migrate parliaments first
    $this->dependencies = array('ParliamentTerm');

    // Sets up database connection and query
    $query = Database::getConnection('default', 'parlamentwatch')
      ->select('legacy_constituency', 'c');
    $query->join('legacy_projects', 'p', 'c.cmd = p.cmd');
    $query->fields('c', array('id', 'state'));

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

    // We only need the states once.
    $query->groupBy('c.state');

    // Ignore empty values
    $query->condition('c.state', '', 'NOT LIKE');

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
    $this->addFieldMapping('name', 'state');
    $this->addFieldMapping('description')->defaultValue($lorem);
  }

  public function prepareRow($r) {
    if (empty($r->state)) {

      // Skip empty state terms
      return FALSE;
    } else {

      // Create state term
      return TRUE;
    }
  }
}
