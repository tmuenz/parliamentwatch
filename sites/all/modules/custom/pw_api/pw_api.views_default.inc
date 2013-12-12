<?php
/**
 * @file
 * pw_api.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_api_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_api_internal_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'user_revision';
  $view->human_name = 'PW API Internal Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Benutzer (historical data): Profile picture (field_user_picture:fid) */
  $handler->display->display_options['relationships']['field_user_picture_fid']['id'] = 'field_user_picture_fid';
  $handler->display->display_options['relationships']['field_user_picture_fid']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['relationships']['field_user_picture_fid']['field'] = 'field_user_picture_fid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Feld: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Benutzer: Benutzer UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Gender */
  $handler->display->display_options['fields']['field_user_gender-revision_id']['id'] = 'field_user_gender-revision_id';
  $handler->display->display_options['fields']['field_user_gender-revision_id']['table'] = 'field_revision_field_user_gender';
  $handler->display->display_options['fields']['field_user_gender-revision_id']['field'] = 'field_user_gender-revision_id';
  $handler->display->display_options['fields']['field_user_gender-revision_id']['label'] = 'gender';
  $handler->display->display_options['fields']['field_user_gender-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Benutzer (historical data): Parliament */
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['id'] = 'field_user_parliament-revision_id';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['field'] = 'field_user_parliament-revision_id';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['label'] = 'parliament';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['separator'] = '||';
  /* Feld: Benutzer (historical data): Answers Give */
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['id'] = 'field_user_answers_give-revision_id';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['table'] = 'field_revision_field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['field'] = 'field_user_answers_give-revision_id';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['label'] = 'answers_given';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Feld: Benutzer (historical data): Committee */
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['id'] = 'field_user_commitee-revision_id';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['table'] = 'field_revision_field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['field'] = 'field_user_commitee-revision_id';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['label'] = 'committee';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['separator'] = '||';
  /* Feld: Benutzer (historical data): Education */
  $handler->display->display_options['fields']['field_user_education-revision_id']['id'] = 'field_user_education-revision_id';
  $handler->display->display_options['fields']['field_user_education-revision_id']['table'] = 'field_revision_field_user_education';
  $handler->display->display_options['fields']['field_user_education-revision_id']['field'] = 'field_user_education-revision_id';
  $handler->display->display_options['fields']['field_user_education-revision_id']['label'] = 'education';
  $handler->display->display_options['fields']['field_user_education-revision_id']['element_label_colon'] = FALSE;
  /* Feld: excluded | constituency_uuid */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'excluded | constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Constituency */
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['id'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['field'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['label'] = 'constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['text'] = 'uuid**[uuid_1]}{name**[field_user_constituency-revision_id]}{number**[field_constituency_nr]';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['separator'] = '||';
  /* Feld: Benutzer (historical data): Political Roles */
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['id'] = 'field_user_political_roles-revision_id';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['table'] = 'field_revision_field_user_political_roles';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['field'] = 'field_user_political_roles-revision_id';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['label'] = 'political_roles';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['separator'] = '; ';
  /* Feld: Excluded Profile Picture Copyright */
  $handler->display->display_options['fields']['field_user_picture_copyright-revision_id']['id'] = 'field_user_picture_copyright-revision_id';
  $handler->display->display_options['fields']['field_user_picture_copyright-revision_id']['table'] = 'field_revision_field_user_picture_copyright';
  $handler->display->display_options['fields']['field_user_picture_copyright-revision_id']['field'] = 'field_user_picture_copyright-revision_id';
  $handler->display->display_options['fields']['field_user_picture_copyright-revision_id']['ui_name'] = 'Excluded Profile Picture Copyright';
  $handler->display->display_options['fields']['field_user_picture_copyright-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture_copyright-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Profile picture */
  $handler->display->display_options['fields']['field_user_picture-revision_id']['id'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['field'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['label'] = 'profile_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['alter']['text'] = 'copyright##[field_user_picture_copyright-revision_id]##[field_user_picture-revision_id]';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['type'] = 'file_url_plain';
  /* Feld: Benutzer (historical data): Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['id'] = 'field_user_questions_get-revision_id';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['table'] = 'field_revision_field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['field'] = 'field_user_questions_get-revision_id';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['label'] = 'questions_get';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Feld: excluded | VID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'user_revision';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['ui_name'] = 'excluded | VID';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['alter']['text'] = 'http://dailwatch.ie/en-gb/user/[uid]/revisions/[vid]/view';
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  /* Feld: excluded | UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'excluded | UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: excluded | base_url */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'excluded | base_url';
  $handler->display->display_options['fields']['php']['label'] = 'base_url';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
global $base_url;
echo $base_url; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Benutzer (historical data): External URL */
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['id'] = 'field_user_external_url-revision_id';
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['table'] = 'field_revision_field_user_external_url';
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['field'] = 'field_user_external_url-revision_id';
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['label'] = 'url_profile';
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['type'] = 'link_plain';
  /* Feld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'url_profile';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[php]/user/[uid]/revisions/[vid]/view';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Feld: Benutzer: E-Mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Feld: Benutzer (historical data): Marriage status */
  $handler->display->display_options['fields']['field_user_marriage_status-revision_id']['id'] = 'field_user_marriage_status-revision_id';
  $handler->display->display_options['fields']['field_user_marriage_status-revision_id']['table'] = 'field_revision_field_user_marriage_status';
  $handler->display->display_options['fields']['field_user_marriage_status-revision_id']['field'] = 'field_user_marriage_status-revision_id';
  $handler->display->display_options['fields']['field_user_marriage_status-revision_id']['label'] = 'marriage_status';
  $handler->display->display_options['fields']['field_user_marriage_status-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Children */
  $handler->display->display_options['fields']['field_user_childs-revision_id']['id'] = 'field_user_childs-revision_id';
  $handler->display->display_options['fields']['field_user_childs-revision_id']['table'] = 'field_revision_field_user_childs';
  $handler->display->display_options['fields']['field_user_childs-revision_id']['field'] = 'field_user_childs-revision_id';
  $handler->display->display_options['fields']['field_user_childs-revision_id']['label'] = 'children';
  $handler->display->display_options['fields']['field_user_childs-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_childs-revision_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Feld: Benutzer (historical data): Address */
  $handler->display->display_options['fields']['field_user_address-revision_id']['id'] = 'field_user_address-revision_id';
  $handler->display->display_options['fields']['field_user_address-revision_id']['table'] = 'field_revision_field_user_address';
  $handler->display->display_options['fields']['field_user_address-revision_id']['field'] = 'field_user_address-revision_id';
  $handler->display->display_options['fields']['field_user_address-revision_id']['label'] = 'address';
  $handler->display->display_options['fields']['field_user_address-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_address-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_address-revision_id']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_user_address-revision_id']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Sort criterion: User revision: Vid */
  $handler->display->display_options['sorts']['vid']['id'] = 'vid';
  $handler->display->display_options['sorts']['vid']['table'] = 'user_revision';
  $handler->display->display_options['sorts']['vid']['field'] = 'vid';
  $handler->display->display_options['sorts']['vid']['order'] = 'DESC';
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';

  /* Display: XML-by-name */
  $handler = $view->new_display('views_data_export', 'XML-by-name', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile/%/profile-authorized.xml';

  /* Display: CSV-by-name */
  $handler = $view->new_display('views_data_export', 'CSV-by-name', 'views_data_export_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profile%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile/%/profile-authorized.csv';

  /* Display: CSV-by-uuid */
  $handler = $view->new_display('views_data_export', 'CSV-by-uuid', 'views_data_export_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profile%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile-by-uuid/%/profile-authorized.csv';

  /* Display: XML-by-uuid */
  $handler = $view->new_display('views_data_export', 'XML-by-uuid', 'views_data_export_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile-by-uuid/%/profile-authorized.xml';

  /* Display: XML-Parliament-by-name */
  $handler = $view->new_display('views_data_export', 'XML-Parliament-by-name', 'views_data_export_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['arguments']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate_options']['vocabularies'] = array(
    'parliaments' => 'parliaments',
  );
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate_options']['type'] = 'convert';
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/profile/%/profile-authorized.xml';

  /* Display: CSV-Parliament-by-name */
  $handler = $view->new_display('views_data_export', 'CSV-Parliament-by-name', 'views_data_export_6');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profile%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['arguments']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate_options']['vocabularies'] = array(
    'parliaments' => 'parliaments',
  );
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate_options']['type'] = 'convert';
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/profile/%/profile-authorized.csv';

  /* Display: XML-Parliament-by-uuid */
  $handler = $view->new_display('views_data_export', 'XML-Parliament-by-uuid', 'views_data_export_7');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/profile-by-uuid/%/profile-authorized.xml';

  /* Display: CSV-Parliament-by-uuid */
  $handler = $view->new_display('views_data_export', 'CSV-Parliament-by-uuid', 'views_data_export_8');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profile%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/profile-by-uuid/%/profile-authorized.csv';

  /* Display: JSON-by-name */
  $handler = $view->new_display('page', 'JSON-by-name', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile/%/profile-authorized.json';

  /* Display: JSON-by-uuid */
  $handler = $view->new_display('page', 'JSON-by-uuid', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile-by-uuid/%/profile-authorized.json';

  /* Display: JSON-Parliament-by-name */
  $handler = $view->new_display('page', 'JSON-Parliament-by-name', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/profile/%/profile-authorized.json';

  /* Display: JSON-Parliament-by-uuid */
  $handler = $view->new_display('page', 'JSON-Parliament-by-uuid', 'page_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/profile-by-uuid/%/profile-authorized.json';
  $export['pw_api_internal_profile'] = $view;

  $view = new view();
  $view->name = 'pw_api_parliament_areacodes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'PW API Areacodes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomie-Begriff: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  /* Feld: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Taxonomie-Begriff: Area Codes */
  $handler->display->display_options['fields']['field_constituency_area_codes']['id'] = 'field_constituency_area_codes';
  $handler->display->display_options['fields']['field_constituency_area_codes']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['fields']['field_constituency_area_codes']['field'] = 'field_constituency_area_codes';
  $handler->display->display_options['fields']['field_constituency_area_codes']['label'] = 'name';
  $handler->display->display_options['fields']['field_constituency_area_codes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_constituency_area_codes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_constituency_area_codes']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_constituency_area_codes']['delta_offset'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Taxonomie-Vokabular: Maschinenlesbarer Name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'constituency' => 'constituency',
  );

  /* Display: CSV-by-name */
  $handler = $view->new_display('views_data_export', 'CSV-by-name', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'areacodes%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'api/parliament/%/areacodes.csv';

  /* Display: XML-by-name */
  $handler = $view->new_display('views_data_export', 'XML-by-name', 'views_data_export_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['path'] = 'api/parliament/%/areacodes.xml';

  /* Display: CSV-by-uuid */
  $handler = $view->new_display('views_data_export', 'CSV-by-uuid', 'views_data_export_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'areacodes%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/areacodes.csv';

  /* Display: XML-by-uuid */
  $handler = $view->new_display('views_data_export', 'XML-by-uuid', 'views_data_export_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/areacodes.xml';

  /* Display: JSON-by-name */
  $handler = $view->new_display('page', 'JSON-by-name', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'areacodes';
  $handler->display->display_options['style_options']['top_child_object'] = 'areacode';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'api/parliament/%/areacodes.json';

  /* Display: JSON-by-uuid */
  $handler = $view->new_display('page', 'JSON-by-uuid', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'areacodes';
  $handler->display->display_options['style_options']['top_child_object'] = 'areacode';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/areacodes.json';
  $export['pw_api_parliament_areacodes'] = $view;

  $view = new view();
  $view->name = 'pw_api_parliament_constituencies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'PW API Constituencies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomie-Begriff: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Feld: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Feld: Taxonomie-Begriff: Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'number';
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Taxonomie-Vokabular: Maschinenlesbarer Name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'constituency' => 'constituency',
  );

  /* Display: CSV-by-name */
  $handler = $view->new_display('views_data_export', 'CSV-by-name', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'constituencies%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/constituencies.csv';

  /* Display: XML-by-name */
  $handler = $view->new_display('views_data_export', 'XML-by-name', 'views_data_export_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/constituencies.xml';

  /* Display: XML-by-uuid */
  $handler = $view->new_display('views_data_export', 'XML-by-uuid', 'views_data_export_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomie-Begriff: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['label'] = 'term_from_field_parliament';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/constituencies.xml';

  /* Display: CSV-by-uuid */
  $handler = $view->new_display('views_data_export', 'CSV-by-uuid', 'views_data_export_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'constituencies%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomie-Begriff: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['label'] = 'term_from_field_parliament';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/constituencies.csv';

  /* Display: CSV-Areacode-by-name */
  $handler = $view->new_display('views_data_export', 'CSV-Areacode-by-name', 'views_data_export_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'constituencies%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomie-Begriff: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/areacode/%/constituencies.csv';

  /* Display: XML-Areacode-by-name */
  $handler = $view->new_display('views_data_export', 'XML-Areacode-by-name', 'views_data_export_6');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomie-Begriff: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/areacode/%/constituencies.xml';

  /* Display: CSV-Areacode-by-uuid */
  $handler = $view->new_display('views_data_export', 'CSV-Areacode-by-uuid', 'views_data_export_7');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'constituencies%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomie-Begriff: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/areacode-by-uuid/%/constituencies.csv';

  /* Display: XML-Areacode-by-uuid */
  $handler = $view->new_display('views_data_export', 'XML-Areacode-by-uuid', 'views_data_export_8');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomie-Begriff: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/areacode-by-uuid/%/constituencies.xml';

  /* Display: JSON-by-name */
  $handler = $view->new_display('page', 'JSON-by-name', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'constituencies';
  $handler->display->display_options['style_options']['top_child_object'] = 'constituency';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/constituencies.json';

  /* Display: JSON-by-uuid */
  $handler = $view->new_display('page', 'JSON-by-uuid', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'constituencies';
  $handler->display->display_options['style_options']['top_child_object'] = 'constituency';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/constituencies.json';

  /* Display: JSON-Areacode-by-name */
  $handler = $view->new_display('page', 'JSON-Areacode-by-name', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'constituencies';
  $handler->display->display_options['style_options']['top_child_object'] = 'constituency';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomie-Begriff: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/areacode/%/constituencies.json';

  /* Display: JSON-Areacode-by-uuid */
  $handler = $view->new_display('page', 'JSON-Areacode-by-uuid', 'page_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'constituencies';
  $handler->display->display_options['style_options']['top_child_object'] = 'constituency';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomie-Begriff: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/areacode-by-uuid/%/constituencies.json';
  $export['pw_api_parliament_constituencies'] = $view;

  $view = new view();
  $view->name = 'pw_api_parliament_profiles_revision';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'user_revision';
  $view->human_name = 'PW API Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'uuid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'uuid' => 'uuid',
    'field_user_fname-revision_id' => 'field_user_fname-revision_id',
    'field_user_lname-revision_id' => 'field_user_lname-revision_id',
    'field_user_party-revision_id' => 'field_user_party-revision_id',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uuid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_fname-revision_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lname-revision_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_party-revision_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Feld: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Benutzer: Benutzer UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Feld: Taxonomie-Begriff: Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Constituency */
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['id'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['field'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['label'] = 'constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['separator'] = '||';
  /* Sort criterion: Benutzer: Benutzer UUID */
  $handler->display->display_options['sorts']['uuid']['id'] = 'uuid';
  $handler->display->display_options['sorts']['uuid']['table'] = 'users';
  $handler->display->display_options['sorts']['uuid']['field'] = 'uuid';
  /* Sort criterion: User revision: Vid */
  $handler->display->display_options['sorts']['vid']['id'] = 'vid';
  $handler->display->display_options['sorts']['vid']['table'] = 'user_revision';
  $handler->display->display_options['sorts']['vid']['field'] = 'vid';
  $handler->display->display_options['sorts']['vid']['order'] = 'DESC';
  /* Contextual filter: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['arguments']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '// we assume that the data is sorted by uuid
if (isset($static) && $row->uuid == $static) {
  return TRUE; // this row gets filtered out, since there has already been returned an instance of the same uuid
} else {
  $static = $row->uuid; // remember the current row uuid for the next row
}
return FALSE; // default: output the result
';
  /* Filter criterion: Benutzer: Rollen */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    181527986 => '181527986',
  );

  /* Display: XML-by-name */
  $handler = $view->new_display('views_data_export', 'XML-by-name', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Benutzer: Benutzer UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Excluded | Constituency UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'Excluded | Constituency UUID';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Constituency */
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['id'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['field'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['label'] = 'constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['text'] = 'uuid**[uuid_1]}{name**[field_user_constituency-revision_id]}{number**[field_constituency_nr]';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['separator'] = '||';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/profiles.xml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: XML-by-uuid */
  $handler = $view->new_display('views_data_export', 'XML-by-uuid', 'views_data_export_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Benutzer: Benutzer UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Excluded | Constituency UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'Excluded | Constituency UUID';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Constituency */
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['id'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['field'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['label'] = 'constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['text'] = 'uuid**[uuid_1]}{name**[field_user_constituency-revision_id]}{number**[field_constituency_nr]';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['separator'] = '||';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/profiles.xml';

  /* Display: CSV-by-name */
  $handler = $view->new_display('views_data_export', 'CSV-by-name', 'views_data_export_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profiles%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/profiles.csv';

  /* Display: CSV-by-uuid */
  $handler = $view->new_display('views_data_export', 'CSV-by-uuid', 'views_data_export_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profiles%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/profiles.csv';

  /* Display: CSV-Areacode-by-name */
  $handler = $view->new_display('views_data_export', 'CSV-Areacode-by-name', 'views_data_export_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profiles%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/areacode/%/profiles.csv';

  /* Display: XML-Areacode-by-name */
  $handler = $view->new_display('views_data_export', 'XML-Areacode-by-name', 'views_data_export_6');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Benutzer: Benutzer UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Excluded | Constituency UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'Excluded | Constituency UUID';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Constituency */
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['id'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['field'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['label'] = 'constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['text'] = 'uuid**[uuid_1]}{name**[field_user_constituency-revision_id]}{number**[field_constituency_nr]';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['separator'] = '||';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/areacode/%/profiles.xml';

  /* Display: CSV-Areacode-by-uuid */
  $handler = $view->new_display('views_data_export', 'CSV-Areacode-by-uuid', 'views_data_export_7');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profiles%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/areacode-by-uuid/%/profiles.csv';

  /* Display: XML-Areacode-by-uuid */
  $handler = $view->new_display('views_data_export', 'XML-Areacode-by-uuid', 'views_data_export_8');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Benutzer: Benutzer UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Excluded | Consituency UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'Excluded | Consituency UUID';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Constituency */
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['id'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['field'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['label'] = 'constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['text'] = 'uuid**[uuid_1]}{name**[field_user_constituency-revision_id]}{number**[field_constituency_nr]';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['separator'] = '||';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/areacode-by-uuid/%/profiles.xml';

  /* Display: CSV-Constituency-by-name */
  $handler = $view->new_display('views_data_export', 'CSV-Constituency-by-name', 'views_data_export_9');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profiles%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/constituency/%/profiles.csv';

  /* Display: XML-Constituency-by-name */
  $handler = $view->new_display('views_data_export', 'XML-Constituency-by-name', 'views_data_export_10');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Benutzer: Benutzer UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Excluded | Constituency UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'Excluded | Constituency UUID';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Constituency */
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['id'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['field'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['label'] = 'constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['text'] = 'uuid**[uuid_1]}{name**[field_user_constituency-revision_id]}{number**[field_constituency_nr]';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['separator'] = '||';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/constituency/%/profiles.xml';

  /* Display: CSV-Constituency-by-uuid */
  $handler = $view->new_display('views_data_export', 'CSV-Constituency-by-uuid', 'views_data_export_11');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profiles%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/constituency-by-uuid/%/profiles.csv';

  /* Display: XML-Constituency-by-uuid */
  $handler = $view->new_display('views_data_export', 'XML-Constituency-by-uuid', 'views_data_export_12');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Benutzer: Benutzer UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Excluded | Constituency UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'Excluded | Constituency UUID';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Constituency */
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['id'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['field'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['label'] = 'constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['text'] = 'uuid**[uuid_1]}{name**[field_user_constituency-revision_id]}{number**[field_constituency_nr]';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['separator'] = '||';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/constituency-by-uuid/%/profiles.xml';

  /* Display: JSON-by-name */
  $handler = $view->new_display('page', 'JSON-by-name', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/profiles.json';

  /* Display: JSON-by-uuid */
  $handler = $view->new_display('page', 'JSON-by-uuid', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/profiles.json';

  /* Display: JSON-Areacode-by-uuid */
  $handler = $view->new_display('page', 'JSON-Areacode-by-uuid', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/areacode-by-uuid/%/profiles.json';

  /* Display: JSON-Areacode-by-name */
  $handler = $view->new_display('page', 'JSON-Areacode-by-name', 'page_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/areacode/%/profiles.json';

  /* Display: JSON-Constituency-by-name */
  $handler = $view->new_display('page', 'JSON-Constituency-by-name', 'page_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/constituency/%/profiles.json';

  /* Display: JSON-Constituency-by-uuid */
  $handler = $view->new_display('page', 'JSON-Constituency-by-uuid', 'page_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Taxonomie-Begriff: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/constituency-by-uuid/%/profiles.json';
  $export['pw_api_parliament_profiles_revision'] = $view;

  $view = new view();
  $view->name = 'pw_api_parliaments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'PW API Parliaments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Feld: Taxonomie-Begriff: Valid Date */
  $handler->display->display_options['fields']['field_parliament_valid']['id'] = 'field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['table'] = 'field_data_field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['field'] = 'field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['label'] = 'valid_date_start';
  $handler->display->display_options['fields']['field_parliament_valid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_parliament_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parliament_valid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_parliament_valid']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Taxonomie-Begriff: Valid Date */
  $handler->display->display_options['fields']['field_parliament_valid_1']['id'] = 'field_parliament_valid_1';
  $handler->display->display_options['fields']['field_parliament_valid_1']['table'] = 'field_data_field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid_1']['field'] = 'field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid_1']['label'] = 'valid_date_end';
  $handler->display->display_options['fields']['field_parliament_valid_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_parliament_valid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parliament_valid_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Filter criterion: Taxonomie-Vokabular: Maschinenlesbarer Name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'parliaments' => 'parliaments',
  );

  /* Display: XML */
  $handler = $view->new_display('views_data_export', 'XML', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['path'] = 'api/parliaments.xml';

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'parliaments%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'api/parliaments.csv';

  /* Display: JSON */
  $handler = $view->new_display('page', 'JSON', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'parliaments';
  $handler->display->display_options['style_options']['top_child_object'] = 'parliament';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'api/parliaments.json';
  $export['pw_api_parliaments'] = $view;

  $view = new view();
  $view->name = 'pw_api_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'user_revision';
  $view->human_name = 'PW API Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Benutzer (historical data): Profile picture (field_user_picture:fid) */
  $handler->display->display_options['relationships']['field_user_picture_fid']['id'] = 'field_user_picture_fid';
  $handler->display->display_options['relationships']['field_user_picture_fid']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['relationships']['field_user_picture_fid']['field'] = 'field_user_picture_fid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Feld: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Benutzer: Benutzer UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Gender */
  $handler->display->display_options['fields']['field_user_gender-revision_id']['id'] = 'field_user_gender-revision_id';
  $handler->display->display_options['fields']['field_user_gender-revision_id']['table'] = 'field_revision_field_user_gender';
  $handler->display->display_options['fields']['field_user_gender-revision_id']['field'] = 'field_user_gender-revision_id';
  $handler->display->display_options['fields']['field_user_gender-revision_id']['label'] = 'gender';
  $handler->display->display_options['fields']['field_user_gender-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Benutzer (historical data): Parliament */
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['id'] = 'field_user_parliament-revision_id';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['field'] = 'field_user_parliament-revision_id';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['label'] = 'parliament';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['separator'] = '||';
  /* Feld: Benutzer (historical data): Answers Give */
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['id'] = 'field_user_answers_give-revision_id';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['table'] = 'field_revision_field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['field'] = 'field_user_answers_give-revision_id';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['label'] = 'answers_given';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Feld: Benutzer (historical data): Committee */
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['id'] = 'field_user_commitee-revision_id';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['table'] = 'field_revision_field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['field'] = 'field_user_commitee-revision_id';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['label'] = 'committee';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['separator'] = '||';
  /* Feld: Benutzer (historical data): Education */
  $handler->display->display_options['fields']['field_user_education-revision_id']['id'] = 'field_user_education-revision_id';
  $handler->display->display_options['fields']['field_user_education-revision_id']['table'] = 'field_revision_field_user_education';
  $handler->display->display_options['fields']['field_user_education-revision_id']['field'] = 'field_user_education-revision_id';
  $handler->display->display_options['fields']['field_user_education-revision_id']['label'] = 'education';
  $handler->display->display_options['fields']['field_user_education-revision_id']['element_label_colon'] = FALSE;
  /* Feld: excluded | constituency_uuid */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'excluded | constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Constituency */
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['id'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['field'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['label'] = 'constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['text'] = 'uuid**[uuid_1]}{name**[field_user_constituency-revision_id]}{number**[field_constituency_nr]';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['separator'] = '||';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'constituency';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$uid = $row->uid;
  $vid = $row->vid;
$query = db_select(\'user_revision\', \'ur\');
  $users_alias = $query->join(\'users\', \'u\', \'%alias.uid = ur.uid\');
  $user_constituency_alias = $query->leftJoin(\'field_revision_field_user_constituency\', \'frfuc\', "%alias.revision_id = ur.vid AND %alias.entity_type = \'user\'"); // we assume that a user is in only one constituency
  $term_constituency_alias = $query->join(\'taxonomy_term_data\', \'c\', "%alias.tid = $user_constituency_alias.field_user_constituency_tid");
  $constituency_number_alias = $query->leftJoin(\'field_data_field_constituency_nr\', \'fdfcn\', "%alias.entity_id = $user_constituency_alias.field_user_constituency_tid AND %alias.entity_type = \'taxonomy_term\'");
  
  $query->addField($term_constituency_alias, \'uuid\');
  $query->addField($term_constituency_alias, \'name\');
  $query->addField($constituency_number_alias, \'field_constituency_nr_value\');
  
  $query->where("$users_alias.uid = :uid AND ur.vid = :vid AND $constituency_number_alias.field_constituency_nr_value IS NOT NULL", array(\'uid\' => $uid, \'vid\' => $vid));
  
  foreach ($query->execute() as $row_int) {
    echo \'uuid**\'.$row_int->uuid.\'}{name**\'.$row_int->name.\'}{number**\'.$row_int->field_constituency_nr_value;
    break;
  }

?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Feld: Benutzer (historical data): Political Roles */
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['id'] = 'field_user_political_roles-revision_id';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['table'] = 'field_revision_field_user_political_roles';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['field'] = 'field_user_political_roles-revision_id';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['label'] = 'political_roles';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['separator'] = '; ';
  /* Feld: Excluded Profile Picture Copyright */
  $handler->display->display_options['fields']['field_user_picture_copyright-revision_id']['id'] = 'field_user_picture_copyright-revision_id';
  $handler->display->display_options['fields']['field_user_picture_copyright-revision_id']['table'] = 'field_revision_field_user_picture_copyright';
  $handler->display->display_options['fields']['field_user_picture_copyright-revision_id']['field'] = 'field_user_picture_copyright-revision_id';
  $handler->display->display_options['fields']['field_user_picture_copyright-revision_id']['ui_name'] = 'Excluded Profile Picture Copyright';
  $handler->display->display_options['fields']['field_user_picture_copyright-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture_copyright-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Profile picture */
  $handler->display->display_options['fields']['field_user_picture-revision_id']['id'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['field'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['label'] = 'profile_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['alter']['text'] = 'copyright##[field_user_picture_copyright-revision_id]##[field_user_picture-revision_id]';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['type'] = 'file_url_plain';
  /* Feld: Benutzer (historical data): Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['id'] = 'field_user_questions_get-revision_id';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['table'] = 'field_revision_field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['field'] = 'field_user_questions_get-revision_id';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['label'] = 'questions_get';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Feld: excluded | VID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'user_revision';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['ui_name'] = 'excluded | VID';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['alter']['text'] = 'http://dailwatch.ie/en-gb/user/[uid]/revisions/[vid]/view';
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  /* Feld: excluded | UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'excluded | UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: excluded | base_url */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'excluded | base_url';
  $handler->display->display_options['fields']['php']['label'] = 'base_url';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
global $base_url;
echo $base_url; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'url_profile';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[php]/user/[uid]/revisions/[vid]/view';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): External URL */
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['id'] = 'field_user_external_url-revision_id';
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['table'] = 'field_revision_field_user_external_url';
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['field'] = 'field_user_external_url-revision_id';
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['label'] = 'url_profile';
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_user_external_url-revision_id']['type'] = 'link_plain';
  /* Sort criterion: User revision: Vid */
  $handler->display->display_options['sorts']['vid']['id'] = 'vid';
  $handler->display->display_options['sorts']['vid']['table'] = 'user_revision';
  $handler->display->display_options['sorts']['vid']['field'] = 'vid';
  $handler->display->display_options['sorts']['vid']['order'] = 'DESC';
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';

  /* Display: XML-by-name */
  $handler = $view->new_display('views_data_export', 'XML-by-name', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile/%/profile.xml';

  /* Display: CSV-by-name */
  $handler = $view->new_display('views_data_export', 'CSV-by-name', 'views_data_export_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profile%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile/%/profile.csv';

  /* Display: CSV-by-uuid */
  $handler = $view->new_display('views_data_export', 'CSV-by-uuid', 'views_data_export_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profile%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile-by-uuid/%/profile.csv';

  /* Display: XML-by-uuid */
  $handler = $view->new_display('views_data_export', 'XML-by-uuid', 'views_data_export_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile-by-uuid/%/profile.xml';

  /* Display: XML-Parliament-by-name */
  $handler = $view->new_display('views_data_export', 'XML-Parliament-by-name', 'views_data_export_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['arguments']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate_options']['vocabularies'] = array(
    'parliaments' => 'parliaments',
  );
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate_options']['type'] = 'convert';
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/profile/%/profile.xml';

  /* Display: CSV-Parliament-by-name */
  $handler = $view->new_display('views_data_export', 'CSV-Parliament-by-name', 'views_data_export_6');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profile%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['arguments']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate_options']['vocabularies'] = array(
    'parliaments' => 'parliaments',
  );
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate_options']['type'] = 'convert';
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/profile/%/profile.csv';

  /* Display: XML-Parliament-by-uuid */
  $handler = $view->new_display('views_data_export', 'XML-Parliament-by-uuid', 'views_data_export_7');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/profile-by-uuid/%/profile.xml';

  /* Display: CSV-Parliament-by-uuid */
  $handler = $view->new_display('views_data_export', 'CSV-Parliament-by-uuid', 'views_data_export_8');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'profile%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/profile-by-uuid/%/profile.csv';

  /* Display: JSON-by-name */
  $handler = $view->new_display('page', 'JSON-by-name', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile/%/profile.json';

  /* Display: JSON-by-uuid */
  $handler = $view->new_display('page', 'JSON-by-uuid', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile-by-uuid/%/profile.json';

  /* Display: JSON-Parliament-by-name */
  $handler = $view->new_display('page', 'JSON-Parliament-by-name', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/profile/%/profile.json';

  /* Display: JSON-Parliament-by-uuid */
  $handler = $view->new_display('page', 'JSON-Parliament-by-uuid', 'page_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'profiles';
  $handler->display->display_options['style_options']['top_child_object'] = 'profile';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/profile-by-uuid/%/profile.json';
  $export['pw_api_profile'] = $view;

  $view = new view();
  $view->name = 'pw_api_profile_dialogues';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PW API Dialogues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Kommentar: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Feld: Inhalt: Beitrag UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Benutzer: Benutzer UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'recipient_user_uuid';
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Feld: Feld: Tags */
  $handler->display->display_options['fields']['field_dialogue_tags']['id'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['table'] = 'field_data_field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['field'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['label'] = 'tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_tags']['delta_offset'] = '0';
  /* Feld: Inhalt: Datum */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'post_date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Feld: Feld: Topic */
  $handler->display->display_options['fields']['field_dialogue_topic']['id'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['table'] = 'field_data_field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['field'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['label'] = 'topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_topic']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'question';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Feld: Kommentar: Datum */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'comment';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['relationship'] = 'cid';
  $handler->display->display_options['fields']['created_1']['label'] = 'answer_post_date';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'long';
  /* Feld: Kommentar: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = 'answer';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_plain';
  /* Feld: Feld: Annotation */
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['id'] = 'field_dialogue_annotation_1';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['table'] = 'field_data_field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['field'] = 'field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['label'] = 'answer_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['type'] = 'text_plain';
  /* Sort criterion: Inhalt: Datum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Benutzer: Benutzer UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dialogue' => 'dialogue',
  );

  /* Display: XML-by-name */
  $handler = $view->new_display('views_data_export', 'XML-by-name', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile/%/dialogues.xml';

  /* Display: XML-by-uuid */
  $handler = $view->new_display('views_data_export', 'XML-by-uuid', 'views_data_export_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['path'] = 'api/profile-by-uuid/%/dialogues.xml';

  /* Display: CSV-by-uuid */
  $handler = $view->new_display('views_data_export', 'CSV-by-uuid', 'views_data_export_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'dialogues%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'api/profile-by-uuid/%/dialogues.csv';

  /* Display: CSV-by-name */
  $handler = $view->new_display('views_data_export', 'CSV-by-name', 'views_data_export_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'dialogues%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile/%/dialogues.csv';

  /* Display: XML-Constituency-by-name */
  $handler = $view->new_display('views_data_export', 'XML-Constituency-by-name', 'views_data_export_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Kommentar: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/constituency/%/dialogues.xml';

  /* Display: CSV-Constituency-by-name */
  $handler = $view->new_display('views_data_export', 'CSV-Constituency-by-name', 'views_data_export_6');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'dialogues%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Kommentar: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/constituency/%/dialogues.csv';

  /* Display: XML-Constituency-by-uuid */
  $handler = $view->new_display('views_data_export', 'XML-Constituency-by-uuid', 'views_data_export_7');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Kommentar: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/constituency-by-uuid/%/dialogues.xml';

  /* Display: CSV-Constituency-by-uuid */
  $handler = $view->new_display('views_data_export', 'CSV-Constituency-by-uuid', 'views_data_export_8');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'dialogues%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Kommentar: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/constituency-by-uuid/%/dialogues.csv';

  /* Display: XML-Parliament-by-name */
  $handler = $view->new_display('views_data_export', 'XML-Parliament-by-name', 'views_data_export_9');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Kommentar: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/dialogues.xml';

  /* Display: CSV-Parliament-by-name */
  $handler = $view->new_display('views_data_export', 'CSV-Parliament-by-name', 'views_data_export_10');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'dialogues%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Kommentar: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/dialogues.csv';

  /* Display: XML-Parliament-by-uuid */
  $handler = $view->new_display('views_data_export', 'XML-Parliament-by-uuid', 'views_data_export_11');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Kommentar: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/dialogues.xml';

  /* Display: CSV-Parliament-by-uuid */
  $handler = $view->new_display('views_data_export', 'CSV-Parliament-by-uuid', 'views_data_export_12');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'dialogues%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Kommentar: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: Benutzer: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/dialogues.csv';

  /* Display: JSON-by-uuid */
  $handler = $view->new_display('page', 'JSON-by-uuid', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'dialogues';
  $handler->display->display_options['style_options']['top_child_object'] = 'dialogue';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'api/profile-by-uuid/%/dialogues.json';

  /* Display: JSON-by-name */
  $handler = $view->new_display('page', 'JSON-by-name', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'dialogues';
  $handler->display->display_options['style_options']['top_child_object'] = 'dialogue';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile/%/dialogues.json';

  /* Display: JSON-Constituency-by-name */
  $handler = $view->new_display('page', 'JSON-Constituency-by-name', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'dialogues';
  $handler->display->display_options['style_options']['top_child_object'] = 'dialogue';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/constituency/%/dialogues.json';

  /* Display: JSON-Constituency-by-uuid */
  $handler = $view->new_display('page', 'JSON-Constituency-by-uuid', 'page_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'dialogues';
  $handler->display->display_options['style_options']['top_child_object'] = 'dialogue';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/constituency-by-uuid/%/dialogues.json';

  /* Display: JSON-Parliament-by-name */
  $handler = $view->new_display('page', 'JSON-Parliament-by-name', 'page_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'dialogues';
  $handler->display->display_options['style_options']['top_child_object'] = 'dialogue';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/dialogues.json';

  /* Display: JSON-Parliament-by-uuid */
  $handler = $view->new_display('page', 'JSON-Parliament-by-uuid', 'page_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'dialogues';
  $handler->display->display_options['style_options']['top_child_object'] = 'dialogue';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomie-Begriff: Taxonomie-Begriff UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/dialogues.json';
  $export['pw_api_profile_dialogues'] = $view;

  return $export;
}
