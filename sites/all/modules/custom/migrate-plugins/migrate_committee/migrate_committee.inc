<?php

abstract class BasicMigrateCommittee extends Migration {

  public function __construct() {
    parent::__construct();
  }

}

class CommitteeTermMigration extends BasicMigrateCommittee {

  public function __construct() {
    parent::__construct();

	$this->dependencies = array('ParliamentTerm');
	$this->dependencies = array('Politician');

    $query = Database::getConnection('default', 'parlamentwatch')
            ->select('legacy_committee', 'c');
    $query->join('legacy_projects', 'p', 'c.cmd = p.cmd');
    $query->fields('c', array('id', 'committee', 'committee_type', 'picture_url', 'txt', 'first_lang' , 'second_lang','committee_2nd_lang', 'vorsitz_uid', 'stellv_uid', 'sprecher_uid'));
    $query->fields('p', array('project', 'startdate'));
	switch(variable_get('site_name')){
		case 'abgeordnetenwatch.de':
		    $query->condition('p.project_cmd', array(132, 360));
			break;
		case 'marsad.tn':
		    $query->condition('p.project_cmd', 974);
			break;
		case 'dailwatch.ie':
		    $query->condition('p.project_cmd', array(233, 486, 30073, 30988));
			break;
		case 'politikercheck.lu':
		    $query->condition('p.project_cmd', array(20565, 20545));
			break;	
		default:
		    $query->condition('p.project_cmd', 0);
			break;		
	}

    // Prepare mapping
    $this->source = new MigrateSourceSQL($query);
    $this->map = new MigrateSQLMap($this->machineName,
                    array(
                        'id' => array(
                            'type' => 'int',
                            'not null' => TRUE,
							'alias' => 'c',
                        )
                    ),
                    MigrateDestinationTerm::getKeySchema()
    );

    $this->destination = new MigrateDestinationTerm('committee');
    $this->addFieldMapping('name', 'committee'); 
    $this->addFieldMapping('description', 'txt');
    $this->addFieldMapping('field_committee_picture', 'picture_url'); 
    $this->addFieldMapping('field_parliament', 'project')->arguments(array('create_term' => TRUE));
    $this->addFieldMapping('field_committee_type', 'committee_type')->arguments(array('create_term' => TRUE));
	$this->addFieldMapping('field_committee_chairman', 'vorsitz_uid')->sourceMigration('politician');
	$this->addFieldMapping('field_committee_vice_chairman', 'stellv_uid')->sourceMigration('politician');
	$this->addFieldMapping('field_committee_spokesman', 'sprecher_uid')->sourceMigration('politician');
	// $this->addFieldMapping('field_committee_chairman', 'stellvsprecher1_uid')->sourceMigration('politician');
	// $this->addFieldMapping('field_committee_chairman', 'stellvsprecher2_uid')->sourceMigration('politician');
  }

 /* public function complete($current_row) {
    
    if($this->sourceValues->second_lang){
      $translations = array($current_row->language=> $current_row,$this->sourceValues->second_lang => $this->sourceValues->committee_2nd_lang);
      $set = i18n_translation_set_create('taxonomy_term', 'committee');
      $current_row->i18n_tsid = $set->tsid;
      taxonomy_term_save($current_row);
      $term_trans = (object) array('vid' => $current_row->vid, 'name' => $this->sourceValues->committee_2nd_lang, 'language' => $this->sourceValues->second_lang,'translation_set'=>$set);
      $term_trans = taxonomy_term_save($term_trans);
      $set->add_item($term_trans)
      ->save();
      $set->add_item($current_row)
      ->save();
    }
  }
*/

  public function prepareRow($row){
	if(empty($row->txt)){
		$row->txt = 'Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.';
	}
  }

}
