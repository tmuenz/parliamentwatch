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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Relationship: Taxonomy term: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  /* Field: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Area Codes */
  $handler->display->display_options['fields']['field_constituency_area_codes']['id'] = 'field_constituency_area_codes';
  $handler->display->display_options['fields']['field_constituency_area_codes']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['fields']['field_constituency_area_codes']['field'] = 'field_constituency_area_codes';
  $handler->display->display_options['fields']['field_constituency_area_codes']['label'] = 'name';
  $handler->display->display_options['fields']['field_constituency_area_codes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_constituency_area_codes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_constituency_area_codes']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_constituency_area_codes']['delta_offset'] = '0';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
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
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
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
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/areacodes.xml';
  $translatables['pw_api_parliament_areacodes'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_parliament'),
    t('term from field_constituency_area_codes'),
    t('uuid'),
    t('name'),
    t('All'),
    t('CSV-by-name'),
    t('XML-by-name'),
    t('CSV-by-uuid'),
    t('XML-by-uuid'),
  );
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Field: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'number';
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
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
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
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
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
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
  /* Relationship: Taxonomy term: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['label'] = 'term_from_field_parliament';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
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
  /* Relationship: Taxonomy term: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['label'] = 'term_from_field_parliament';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
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
  /* Relationship: Taxonomy term: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Relationship: Taxonomy term: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
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
  /* Relationship: Taxonomy term: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Relationship: Taxonomy term: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
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
  /* Relationship: Taxonomy term: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Relationship: Taxonomy term: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
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
  /* Relationship: Taxonomy term: Parliament (field_parliament) */
  $handler->display->display_options['relationships']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['relationships']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['relationships']['field_parliament_tid']['field'] = 'field_parliament_tid';
  /* Relationship: Taxonomy term: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/areacode-by-uuid/%/constituencies.xml';
  $translatables['pw_api_parliament_constituencies'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_parliament'),
    t('uuid'),
    t('name'),
    t('number'),
    t('All'),
    t('CSV-by-name'),
    t('XML-by-name'),
    t('XML-by-uuid'),
    t('term_from_field_parliament'),
    t('CSV-by-uuid'),
    t('CSV-Areacode-by-name'),
    t('term from field_constituency_area_codes'),
    t('XML-Areacode-by-name'),
    t('CSV-Areacode-by-uuid'),
    t('XML-Areacode-by-uuid'),
  );
  $export['pw_api_parliament_constituencies'] = $view;

  $view = new view();
  $view->name = 'pw_api_parliament_profile_dialogues';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PW API Parliament Profile Dialogues';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'post_date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Field: Annotation */
  $handler->display->display_options['fields']['field_dialogue_annotation']['id'] = 'field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation']['table'] = 'field_data_field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation']['field'] = 'field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation']['label'] = 'annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_annotation']['type'] = 'text_plain';
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_dialogue_tags']['id'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['table'] = 'field_data_field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['field'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['label'] = 'tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_tags']['delta_offset'] = '0';
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_dialogue_topic']['id'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['table'] = 'field_data_field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['field'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['label'] = 'topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_topic']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = 'comment';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_plain';
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'comment';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['relationship'] = 'cid';
  $handler->display->display_options['fields']['created_1']['label'] = 'comment_post_date';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: User UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
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
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  /* Contextual filter: User: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament/%/profile/%/dialogues.xml';

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
  /* Contextual filter: User: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/profile/%/dialogues.csv';
  $translatables['pw_api_parliament_profile_dialogues'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Comments'),
    t('User entity referenced from field_dialogue_recipient'),
    t('term from field_user_parliament'),
    t('uuid'),
    t('body'),
    t('post_date'),
    t('annotation'),
    t('tags'),
    t('topic'),
    t('comment'),
    t('comment_post_date'),
    t('All'),
    t('XML-by-name'),
    t('XML-by-uuid'),
    t('CSV-by-uuid'),
    t('CSV-by-name'),
  );
  $export['pw_api_parliament_profile_dialogues'] = $view;

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
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Field: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Field: User: User UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: User (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Field: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Constituency */
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['id'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['field'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['label'] = 'constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['separator'] = '||';
  /* Sort criterion: User: User UUID */
  $handler->display->display_options['sorts']['uuid']['id'] = 'uuid';
  $handler->display->display_options['sorts']['uuid']['table'] = 'users';
  $handler->display->display_options['sorts']['uuid']['field'] = 'uuid';
  /* Sort criterion: User revision: Vid */
  $handler->display->display_options['sorts']['vid']['id'] = 'vid';
  $handler->display->display_options['sorts']['vid']['table'] = 'user_revision';
  $handler->display->display_options['sorts']['vid']['field'] = 'vid';
  $handler->display->display_options['sorts']['vid']['order'] = 'DESC';
  /* Contextual filter: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['arguments']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
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
  /* Filter criterion: User: Roles */
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
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Field: User: User UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: User (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Field: Excluded | Constituency UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'Excluded | Constituency UUID';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Field: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Constituency */
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
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
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
  /* Field: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Field: User: User UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: User (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Field: Excluded | Constituency UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'Excluded | Constituency UUID';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Field: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Constituency */
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
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
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
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
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
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
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
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Taxonomy term: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
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
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Taxonomy term: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Field: User: User UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: User (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Field: Excluded | Constituency UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'Excluded | Constituency UUID';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Field: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Constituency */
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
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
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
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Taxonomy term: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
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
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Taxonomy term: Area Codes (field_constituency_area_codes) */
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['id'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['table'] = 'field_data_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['field'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['relationships']['field_constituency_area_codes_tid']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Field: User: User UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: User (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Field: Excluded | Consituency UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'Excluded | Consituency UUID';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Field: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Constituency */
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
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_constituency_area_codes_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
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
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
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
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Field: User: User UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: User (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Field: Excluded | Constituency UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'Excluded | Constituency UUID';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Field: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Constituency */
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
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
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
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
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
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Field: User: User UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: User (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Field: Excluded | Constituency UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'Excluded | Constituency UUID';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Field: Excluded | Constituency Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['ui_name'] = 'Excluded | Constituency Number';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Constituency */
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
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/constituency-by-uuid/%/profiles.xml';
  $translatables['pw_api_parliament_profiles_revision'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Get all revisions from an user.'),
    t('term from field_user_parliament'),
    t('term from field_user_constituency'),
    t('name'),
    t('uuid'),
    t('first_name'),
    t('last_name'),
    t('party'),
    t('constituency_uuid'),
    t('constituency_number'),
    t('constituency'),
    t('All'),
    t('XML-by-name'),
    t('uuid**[uuid_1]}{name**[field_user_constituency-revision_id]}{number**[field_constituency_nr]'),
    t('XML-by-uuid'),
    t('CSV-by-name'),
    t('CSV-by-uuid'),
    t('CSV-Areacode-by-name'),
    t('term from field_constituency_area_codes'),
    t('XML-Areacode-by-name'),
    t('CSV-Areacode-by-uuid'),
    t('XML-Areacode-by-uuid'),
    t('CSV-Constituency-by-name'),
    t('XML-Constituency-by-name'),
    t('CSV-Constituency-by-uuid'),
    t('XML-Constituency-by-uuid'),
  );
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Valid Date */
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
  /* Field: Taxonomy term: Valid Date */
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
  /* Filter criterion: Taxonomy vocabulary: Machine name */
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
  $translatables['pw_api_parliaments'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('uuid'),
    t('name'),
    t('valid_date_start'),
    t('valid_date_end'),
    t('XML'),
    t('CSV'),
    t('JSON'),
  );
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User (historical data): Profile picture (field_user_picture:fid) */
  $handler->display->display_options['relationships']['field_user_picture_fid']['id'] = 'field_user_picture_fid';
  $handler->display->display_options['relationships']['field_user_picture_fid']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['relationships']['field_user_picture_fid']['field'] = 'field_user_picture_fid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Field: User revision: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Field: User: User UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Gender */
  $handler->display->display_options['fields']['field_user_gender-revision_id']['id'] = 'field_user_gender-revision_id';
  $handler->display->display_options['fields']['field_user_gender-revision_id']['table'] = 'field_revision_field_user_gender';
  $handler->display->display_options['fields']['field_user_gender-revision_id']['field'] = 'field_user_gender-revision_id';
  $handler->display->display_options['fields']['field_user_gender-revision_id']['label'] = 'gender';
  $handler->display->display_options['fields']['field_user_gender-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = 'first_name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = 'last_name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = 'party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Field: User (historical data): Parliament */
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['id'] = 'field_user_parliament-revision_id';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['field'] = 'field_user_parliament-revision_id';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['label'] = 'parliament';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_parliament-revision_id']['separator'] = '||';
  /* Field: User (historical data): Answers Give */
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['id'] = 'field_user_answers_give-revision_id';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['table'] = 'field_revision_field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['field'] = 'field_user_answers_give-revision_id';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['label'] = 'answers_given';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User (historical data): Committee */
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['id'] = 'field_user_commitee-revision_id';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['table'] = 'field_revision_field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['field'] = 'field_user_commitee-revision_id';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['label'] = 'committee';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_commitee-revision_id']['separator'] = '||';
  /* Field: User (historical data): user_education */
  $handler->display->display_options['fields']['field_user_education-revision_id']['id'] = 'field_user_education-revision_id';
  $handler->display->display_options['fields']['field_user_education-revision_id']['table'] = 'field_revision_field_user_education';
  $handler->display->display_options['fields']['field_user_education-revision_id']['field'] = 'field_user_education-revision_id';
  $handler->display->display_options['fields']['field_user_education-revision_id']['label'] = 'education';
  $handler->display->display_options['fields']['field_user_education-revision_id']['element_label_colon'] = FALSE;
  /* Field: excluded | constituency_uuid */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_1']['ui_name'] = 'excluded | constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['fields']['uuid_2']['id'] = 'uuid_2';
  $handler->display->display_options['fields']['uuid_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_2']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_2']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['uuid_2']['label'] = 'constituency_uuid';
  $handler->display->display_options['fields']['uuid_2']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Number */
  $handler->display->display_options['fields']['field_constituency_nr']['id'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['table'] = 'field_data_field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['field'] = 'field_constituency_nr';
  $handler->display->display_options['fields']['field_constituency_nr']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['field_constituency_nr']['label'] = 'constituency_number';
  $handler->display->display_options['fields']['field_constituency_nr']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Constituency */
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['id'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['field'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['label'] = 'constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['alter']['text'] = 'uuid|[uuid_1]|[field_user_constituency-revision_id]';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['separator'] = '||';
  /* Field: User (historical data): Political Roles */
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['id'] = 'field_user_political_roles-revision_id';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['table'] = 'field_revision_field_user_political_roles';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['field'] = 'field_user_political_roles-revision_id';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['label'] = 'political_roles';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_political_roles-revision_id']['separator'] = '; ';
  /* Field: excluded | copyright */
  $handler->display->display_options['fields']['field_image_copyright']['id'] = 'field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['table'] = 'field_data_field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['field'] = 'field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['relationship'] = 'field_user_picture_fid';
  $handler->display->display_options['fields']['field_image_copyright']['ui_name'] = 'excluded | copyright';
  $handler->display->display_options['fields']['field_image_copyright']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_copyright']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_copyright']['type'] = 'text_plain';
  /* Field: User (historical data): Profile picture */
  $handler->display->display_options['fields']['field_user_picture-revision_id']['id'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['field'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['label'] = 'profile_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['alter']['text'] = 'copyright##[field_image_copyright]##[field_user_picture-revision_id]';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['type'] = 'file_url_plain';
  /* Field: User (historical data): Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['id'] = 'field_user_questions_get-revision_id';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['table'] = 'field_revision_field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['field'] = 'field_user_questions_get-revision_id';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['label'] = 'questions_get';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: excluded | VID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'user_revision';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['ui_name'] = 'excluded | VID';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['alter']['text'] = 'http://dailwatch.ie/en-gb/user/[uid]/revisions/[vid]/view';
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  /* Field: excluded | UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'excluded | UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: excluded | base_url */
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'url_profile';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[php]/user/[uid]/revisions/[vid]/view';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: User: User UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
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
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User revision: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
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
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: User UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
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
  /* Contextual filter: User: User UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
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
  /* Contextual filter: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['arguments']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_action'] = 'default';
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
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['arguments']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_action'] = 'default';
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
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: User: User UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
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
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  /* Relationship: User (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: User: User UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid_1']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['uuid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid_1']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/profile-by-uuid/%/profile.csv';
  $translatables['pw_api_profile'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('file from field_user_picture'),
    t('term from field_user_constituency'),
    t('name'),
    t('uuid'),
    t('gender'),
    t('first_name'),
    t('last_name'),
    t('party'),
    t('parliament'),
    t('answers_given'),
    t('committee'),
    t('education'),
    t('constituency_uuid'),
    t('constituency_number'),
    t('constituency'),
    t('uuid|[uuid_1]|[field_user_constituency-revision_id]'),
    t('political_roles'),
    t('copyright'),
    t('profile_picture'),
    t('copyright##[field_image_copyright]##[field_user_picture-revision_id]'),
    t('questions_get'),
    t('http://dailwatch.ie/en-gb/user/[uid]/revisions/[vid]/view'),
    t('base_url'),
    t('url_profile'),
    t('[php]/user/[uid]/revisions/[vid]/view'),
    t('All'),
    t('XML-by-name'),
    t('CSV-by-name'),
    t('CSV-by-uuid'),
    t('XML-by-uuid'),
    t('XML-Parliament-by-name'),
    t('CSV-Parliament-by-name'),
    t('XML-Parliament-by-uuid'),
    t('term from field_user_parliament'),
    t('CSV-Parliament-by-uuid'),
  );
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: User: User UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'recipient_user_uuid';
  $handler->display->display_options['fields']['uuid_1']['element_label_colon'] = FALSE;
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_dialogue_tags']['id'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['table'] = 'field_data_field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['field'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['label'] = 'tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_tags']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'post_date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_dialogue_topic']['id'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['table'] = 'field_data_field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['field'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['label'] = 'topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_topic']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'question';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'comment';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['relationship'] = 'cid';
  $handler->display->display_options['fields']['created_1']['label'] = 'answer_post_date';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'long';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = 'answer';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_plain';
  /* Field: Field: Annotation */
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['id'] = 'field_dialogue_annotation_1';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['table'] = 'field_data_field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['field'] = 'field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['label'] = 'answer_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['type'] = 'text_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: User UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
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
  /* Contextual filter: User: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
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
  /* Contextual filter: User: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
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
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
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
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
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
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
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
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['arguments']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid_1']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['arguments']['uuid_1']['default_action'] = 'default';
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
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
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
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
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
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
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
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Relationship: User: Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uuid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['path'] = 'api/parliament-by-uuid/%/dialogues.csv';
  $translatables['pw_api_profile_dialogues'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Comments'),
    t('User entity referenced from field_dialogue_recipient'),
    t('term from field_user_parliament'),
    t('term from field_user_constituency'),
    t('uuid'),
    t('recipient_user_uuid'),
    t('tags'),
    t('post_date'),
    t('topic'),
    t('question'),
    t('answer_post_date'),
    t('answer'),
    t('answer_annotation'),
    t('All'),
    t('XML-by-name'),
    t('XML-by-uuid'),
    t('CSV-by-uuid'),
    t('CSV-by-name'),
    t('XML-Constituency-by-name'),
    t('CSV-Constituency-by-name'),
    t('XML-Constituency-by-uuid'),
    t('CSV-Constituency-by-uuid'),
    t('XML-Parliament-by-name'),
    t('CSV-Parliament-by-name'),
    t('XML-Parliament-by-uuid'),
    t('CSV-Parliament-by-uuid'),
  );
  $export['pw_api_profile_dialogues'] = $view;

  return $export;
}
