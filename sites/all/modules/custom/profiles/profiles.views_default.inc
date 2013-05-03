<?php
/**
 * @file
 * profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'polls_profile';
  $view->description = '';
  $view->tag = 'profile, poll';
  $view->base_table = 'node';
  $view->human_name = 'Polls for the profile';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_pw_poll_date' => 'field_pw_poll_date',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pw_poll_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Relationship: Content: Votes */
  $handler->display->display_options['relationships']['votingapi_vote']['id'] = 'votingapi_vote';
  $handler->display->display_options['relationships']['votingapi_vote']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_vote']['field'] = 'votingapi_vote';
  $handler->display->display_options['relationships']['votingapi_vote']['votingapi'] = array(
    'value_type' => '',
    'tag' => '',
  );
  $handler->display->display_options['relationships']['votingapi_vote']['current_user'] = 0;
  /* Relationship: Votes: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'votingapi_vote';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'votingapi_vote';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_pw_poll_date']['id'] = 'field_pw_poll_date';
  $handler->display->display_options['fields']['field_pw_poll_date']['table'] = 'field_data_field_pw_poll_date';
  $handler->display->display_options['fields']['field_pw_poll_date']['field'] = 'field_pw_poll_date';
  $handler->display->display_options['fields']['field_pw_poll_date']['label'] = '';
  $handler->display->display_options['fields']['field_pw_poll_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pw_poll_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_pw_poll_date']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['field_pw_poll_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pw_poll_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_wrapper_class'] = 'poll-behavior';
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

$uid = arg(2);

$nid = $row->nid;
$sql = "SELECT entity_id, value FROM {votingapi_vote} WHERE entity_id=:nid AND uid=:uid";
$result  = db_query($sql,array(\':nid\'=>$nid,\':uid\'=>$uid));
$record = $result->fetchObject();

if($record->value == 0){
 echo t(\'yes\');
}else if($record->value == 1){
 echo t(\'no\');
}else if($record->value == 2){
 echo t(\'absent\');
}else{
 echo t(\'blank\');
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Sort criterion: Content: Date (field_pw_poll_date) */
  $handler->display->display_options['sorts']['field_pw_poll_date_value']['id'] = 'field_pw_poll_date_value';
  $handler->display->display_options['sorts']['field_pw_poll_date_value']['table'] = 'field_data_field_pw_poll_date';
  $handler->display->display_options['sorts']['field_pw_poll_date_value']['field'] = 'field_pw_poll_date_value';
  $handler->display->display_options['sorts']['field_pw_poll_date_value']['order'] = 'DESC';
  /* Contextual filter: Votes: User */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'votingapi_vote';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'votingapi_vote';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'pw_poll' => 'pw_poll',
  );

  /* Display: Last */
  $handler = $view->new_display('block', 'Last', 'last');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'content-wrapper';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Voting behavior of [field_user_fname] [field_user_lname]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Info';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Deputies can challenge the Ceann Comhairle and demand a recorded vote by shouting Votáil! (Vote!) The Ceann Comhairle then shouts \'Votáil\' again which starts the voting process. We select the most important votes and document them. If you think an important vote is missing, then <a href="/en-gb/about/contact">please let us know</a>.';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'info-content element-hidden';
  $handler->display->display_options['fields']['nothing_1']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['nothing_1']['element_label_class'] = 'info-title';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'ic-info';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Global PHP: Overview Chart */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Global PHP: Overview Chart';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php_1']['alter']['text'] = '[php_1]
<div class="poll-behavior"><span class="icon yes"></span>yes</div>
<div class="poll-behavior"><span class="icon no"></span>no</div>
<div class="poll-behavior"><span class="icon absent"></span>absent</div>
<div class="poll-behavior"><span class="icon blank"></span>blank</div>

';
  $handler->display->display_options['fields']['php_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['php_1']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['php_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['php_1']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php_1']['element_wrapper_class'] = 'float-left';
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
print pw_blocks_get_chart($row->nid,\'total\', NULL, 105,128);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_pw_poll_date']['id'] = 'field_pw_poll_date';
  $handler->display->display_options['fields']['field_pw_poll_date']['table'] = 'field_data_field_pw_poll_date';
  $handler->display->display_options['fields']['field_pw_poll_date']['field'] = 'field_pw_poll_date';
  $handler->display->display_options['fields']['field_pw_poll_date']['label'] = '';
  $handler->display->display_options['fields']['field_pw_poll_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pw_poll_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_pw_poll_date']['element_wrapper_class'] = 'push-bottom-s';
  $handler->display->display_options['fields']['field_pw_poll_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pw_poll_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global PHP: User Vote */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'Global PHP: User Vote';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php_2']['alter']['text'] = '[field_user_fname] [field_user_lname] voted with <span class="inline [php_2]">[php_2]</span>';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php_2']['element_wrapper_class'] = 'poll-behavior push-bottom-s';
  $handler->display->display_options['fields']['php_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
if(arg(1) == \'user\'){
$uid = arg(2);
}else{
$uid = arg(1);
}
$nid = $row->nid;
$sql = "SELECT entity_id, value FROM {votingapi_vote} WHERE entity_id=:nid AND uid=:uid";
$result  = db_query($sql,array(\':nid\'=>$nid,\':uid\'=>$uid));
$record = $result->fetchObject();

if($record->value == 0){
 echo t(\'yes\');
}else if($record->value == 1){
 echo t(\'no\');
}else if($record->value == 2){
 echo t(\'absent\');
}else{
 echo t(\'blank\');
}

?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '155';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'description';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '155',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'link-poll';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Details to vote';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['block_description'] = 'Poll profile: Last poll';

  /* Display: Archive */
  $handler = $view->new_display('block', 'Archive', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Voting Archive of [field_user_fname] [field_user_lname] <a href="/print/polls/archive/[uid]" class="ic-print external" title="print voting archive">print</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'managed_content';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_pw_poll_date']['id'] = 'field_pw_poll_date';
  $handler->display->display_options['fields']['field_pw_poll_date']['table'] = 'field_data_field_pw_poll_date';
  $handler->display->display_options['fields']['field_pw_poll_date']['field'] = 'field_pw_poll_date';
  $handler->display->display_options['fields']['field_pw_poll_date']['label'] = '';
  $handler->display->display_options['fields']['field_pw_poll_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pw_poll_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_pw_poll_date']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['field_pw_poll_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pw_poll_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['text'] = '<span class="poll-behavior"><span class="block [php]">[php]</span></span>';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if(arg(1) == \'user\'){
$uid = arg(2);
}else{
$uid = arg(1);
}
$nid = $row->nid;
$sql = "SELECT entity_id, value FROM {votingapi_vote} WHERE entity_id=:nid AND uid=:uid";
$result  = db_query($sql,array(\':nid\'=>$nid,\':uid\'=>$uid));
$record = $result->fetchObject();

if($record->value == 0){
 echo t(\'yes\');
}else if($record->value == 1){
 echo t(\'no\');
}else if($record->value == 2){
 echo t(\'absent\');
}else{
 echo t(\'blank\');
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['block_description'] = 'Poll profile: Archive';

  /* Display: Print Page */
  $handler = $view->new_display('page', 'Print Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_pw_poll_date']['id'] = 'field_pw_poll_date';
  $handler->display->display_options['fields']['field_pw_poll_date']['table'] = 'field_data_field_pw_poll_date';
  $handler->display->display_options['fields']['field_pw_poll_date']['field'] = 'field_pw_poll_date';
  $handler->display->display_options['fields']['field_pw_poll_date']['label'] = '';
  $handler->display->display_options['fields']['field_pw_poll_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pw_poll_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_pw_poll_date']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['field_pw_poll_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pw_poll_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['text'] = '<span class="poll-behavior"><span class="block [php]">[php]</span></span>';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

$uid = arg(2);

$nid = $row->nid;
$sql = "SELECT entity_id, value FROM {votingapi_vote} WHERE entity_id=:nid AND uid=:uid";
$result  = db_query($sql,array(\':nid\'=>$nid,\':uid\'=>$uid));
$record = $result->fetchObject();

if($record->value == 0){
 echo t(\'yes\');
}else if($record->value == 1){
 echo t(\'no\');
}else if($record->value == 2){
 echo t(\'absent\');
}else{
 echo t(\'blank\');
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['path'] = 'polls/archive/%';
  $translatables['polls_profile'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Votes'),
    t('Individual voter'),
    t('All'),
    t('Last'),
    t('Voting behavior of [field_user_fname] [field_user_lname]'),
    t('Info'),
    t('Deputies can challenge the Ceann Comhairle and demand a recorded vote by shouting Votáil! (Vote!) The Ceann Comhairle then shouts \'Votáil\' again which starts the voting process. We select the most important votes and document them. If you think an important vote is missing, then <a href="/en-gb/about/contact">please let us know</a>.'),
    t('[php_1]
<div class="poll-behavior"><span class="icon yes"></span>yes</div>
<div class="poll-behavior"><span class="icon no"></span>no</div>
<div class="poll-behavior"><span class="icon absent"></span>absent</div>
<div class="poll-behavior"><span class="icon blank"></span>blank</div>

'),
    t('[title_1]'),
    t('[field_user_fname] [field_user_lname] voted with <span class="inline [php_2]">[php_2]</span>'),
    t('Details to vote'),
    t('Poll profile: Last poll'),
    t('Archive'),
    t('<h3>Voting Archive of [field_user_fname] [field_user_lname] <a href="/print/polls/archive/[uid]" class="ic-print external" title="print voting archive">print</a></h3>'),
    t('<span class="poll-behavior"><span class="block [php]">[php]</span></span>'),
    t('Poll profile: Archive'),
    t('Print Page'),
  );
  $export['polls_profile'] = $view;

  $view = new view();
  $view->name = 'profile_list_rev';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'user_revision';
  $view->human_name = 'Profile List Rev';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'pager-full';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '21';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'prev';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'profiles-list-compact';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['required'] = TRUE;
  /* Relationship: User revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User revision: Vid */
  $handler->display->display_options['fields']['vid_1']['id'] = 'vid_1';
  $handler->display->display_options['fields']['vid_1']['table'] = 'user_revision';
  $handler->display->display_options['fields']['vid_1']['field'] = 'vid';
  $handler->display->display_options['fields']['vid_1']['label'] = '';
  $handler->display->display_options['fields']['vid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid_1']['element_label_colon'] = FALSE;
  /* Field: | start compact */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = '| start compact';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="profiles-list-compact-wrapper">';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Field: User (historical data): Profile picture */
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['id'] = 'field_user_picture-revision_id_1';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['field'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['alter']['text'] = '[field_user_picture-revision_id_1]';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_m',
  );
  /* Field: User (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['id'] = 'field_user_fname-revision_id_1';
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['alter']['text'] = '<strong>[field_user_fname-revision_id_1]';
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['empty'] = '<strong>[field_user_fname]';
  $handler->display->display_options['fields']['field_user_fname-revision_id_1']['hide_alter_empty'] = FALSE;
  /* Field: User (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['id'] = 'field_user_lname-revision_id_1';
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['alter']['text'] = '[field_user_lname-revision_id_1], ';
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['empty'] = '[field_user_lname], ';
  $handler->display->display_options['fields']['field_user_lname-revision_id_1']['hide_alter_empty'] = FALSE;
  /* Field: User (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['text'] = '[field_user_party-revision_id]</strong>';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Field: | more info start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '| more info start';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="element-hidden profile-list-compact-info">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: User (historical data): Profile picture */
  $handler->display->display_options['fields']['field_user_picture-revision_id']['id'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['field'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['alter']['path'] = 'user/[uid]/revisions/[vid_1]/view';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_wrapper_class'] = 'profile-image';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_l',
  );
  /* Field: User (historical data): First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['alter']['text'] = '<h3>[field_user_fname-revision_id]';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['empty'] = '<h3>[field_user_fname]';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['hide_alter_empty'] = FALSE;
  /* Field: User (historical data): Last name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['alter']['text'] = '[field_user_lname-revision_id]</h3>';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['empty'] = '[field_user_lname]</h3>';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['hide_alter_empty'] = FALSE;
  /* Field: User (historical data): Party */
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['id'] = 'field_user_party-revision_id_1';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['element_wrapper_class'] = 'bg-white row party push-bottom-xxs';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id_1']['delta_offset'] = '0';
  /* Field: User (historical data): Constituency */
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['id'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['field'] = 'field_user_constituency-revision_id';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_wrapper_class'] = 'bg-white row constituency push-bottom-xxs';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_constituency-revision_id']['delta_offset'] = '0';
  /* Field: Link to profile */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'user_revision';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['ui_name'] = 'Link to profile';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['vid']['alter']['text'] = 'Go to profile';
  $handler->display->display_options['fields']['vid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['vid']['alter']['path'] = 'user/[uid]/revisions/[vid]/view';
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['vid']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['vid']['element_wrapper_class'] = 'link-profile row bg-white';
  $handler->display->display_options['fields']['vid']['element_default_classes'] = FALSE;
  /* Field: | more info end */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '| more info end';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: | compact end */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '| compact end';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Sort criterion: Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['sorts']['tid']['order'] = 'DESC';
  /* Sort criterion: User (historical data): Last name (field_user_lname) */
  $handler->display->display_options['sorts']['field_user_lname_value']['id'] = 'field_user_lname_value';
  $handler->display->display_options['sorts']['field_user_lname_value']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['sorts']['field_user_lname_value']['field'] = 'field_user_lname_value';
  /* Contextual filter: User (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['arguments']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['default_argument_options']['argument'] = 'bundestag';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate_options']['vocabularies'] = array(
    'parliaments' => 'parliaments',
  );
  $handler->display->display_options['arguments']['field_user_parliament_tid']['validate_options']['type'] = 'convert';
  /* Filter criterion: User (historical data): Last name (field_user_lname) */
  $handler->display->display_options['filters']['field_user_lname_value']['id'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['filters']['field_user_lname_value']['field'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['operator_id'] = 'field_user_lname_value_op';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['label'] = 'Last name (field_user_lname)';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['operator'] = 'field_user_lname_value_op';
  $handler->display->display_options['filters']['field_user_lname_value']['expose']['identifier'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_user_lname_value']['group_info']['label'] = 'Last name';
  $handler->display->display_options['filters']['field_user_lname_value']['group_info']['identifier'] = 'field_user_lname_value';
  $handler->display->display_options['filters']['field_user_lname_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_user_lname_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'D',
      'operator' => 'starts',
      'value' => 'D',
    ),
    2 => array(
      'title' => 'E',
      'operator' => 'starts',
      'value' => 'E',
    ),
    3 => array(
      'title' => 'C',
      'operator' => 'starts',
      'value' => 'C',
    ),
    4 => array(
      'title' => 'B',
      'operator' => 'starts',
      'value' => 'B',
    ),
    5 => array(
      'title' => 'A',
      'operator' => 'starts',
      'value' => 'A',
    ),
    6 => array(
      'title' => 'F',
      'operator' => 'starts',
      'value' => 'F',
    ),
    7 => array(
      'title' => 'G',
      'operator' => 'starts',
      'value' => 'G',
    ),
    8 => array(
      'title' => 'K',
      'operator' => 'starts',
      'value' => 'K',
    ),
    9 => array(
      'title' => 'J',
      'operator' => 'starts',
      'value' => 'J',
    ),
    10 => array(
      'title' => 'I',
      'operator' => 'starts',
      'value' => 'I',
    ),
    11 => array(
      'title' => 'H',
      'operator' => 'starts',
      'value' => 'H',
    ),
    12 => array(
      'title' => 'L',
      'operator' => 'starts',
      'value' => 'L',
    ),
    13 => array(
      'title' => 'M',
      'operator' => 'starts',
      'value' => 'M',
    ),
    14 => array(
      'title' => 'N',
      'operator' => 'starts',
      'value' => 'N',
    ),
    15 => array(
      'title' => 'R',
      'operator' => 'starts',
      'value' => 'S',
    ),
    16 => array(
      'title' => 'T',
      'operator' => 'starts',
      'value' => 'T',
    ),
    17 => array(
      'title' => 'Q',
      'operator' => 'starts',
      'value' => 'Q',
    ),
    18 => array(
      'title' => 'P',
      'operator' => 'starts',
      'value' => 'P',
    ),
    19 => array(
      'title' => 'O',
      'operator' => 'starts',
      'value' => 'O',
    ),
    20 => array(
      'title' => 'U',
      'operator' => 'starts',
      'value' => 'U',
    ),
    21 => array(
      'title' => 'V',
      'operator' => 'starts',
      'value' => 'V',
    ),
    22 => array(
      'title' => 'Z',
      'operator' => 'starts',
      'value' => 'Z',
    ),
    23 => array(
      'title' => 'Y',
      'operator' => 'starts',
      'value' => 'Y',
    ),
    24 => array(
      'title' => 'X',
      'operator' => 'starts',
      'value' => 'X',
    ),
    25 => array(
      'title' => 'W',
      'operator' => 'starts',
      'value' => 'W',
    ),
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  /* Filter criterion: User: Constituency (field_user_constituency) */
  $handler->display->display_options['filters']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['filters']['field_user_constituency_tid']['table'] = 'field_data_field_user_constituency';
  $handler->display->display_options['filters']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  $handler->display->display_options['filters']['field_user_constituency_tid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_user_constituency_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['operator_id'] = 'field_user_constituency_tid_op';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['label'] = 'Constituency';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['operator'] = 'field_user_constituency_tid_op';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['identifier'] = 'field_user_constituency_tid';
  $handler->display->display_options['filters']['field_user_constituency_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    181527986 => 0,
    51622513 => 0,
  );
  $handler->display->display_options['filters']['field_user_constituency_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_user_constituency_tid']['vocabulary'] = 'constituency';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'politicians_old/%';
  $translatables['profile_list_rev'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('prev'),
    t('next'),
    t('last »'),
    t('term from field_user_parliament'),
    t('Get all revisions from an user.'),
    t('<div class="profiles-list-compact-wrapper">'),
    t('[field_user_picture-revision_id_1]'),
    t('<strong>[field_user_fname-revision_id_1]'),
    t('<strong>[field_user_fname]'),
    t('[field_user_lname-revision_id_1], '),
    t('[field_user_lname], '),
    t('[field_user_party-revision_id]</strong>'),
    t('<div class="element-hidden profile-list-compact-info">'),
    t('<h3>[field_user_fname-revision_id]'),
    t('<h3>[field_user_fname]'),
    t('[field_user_lname-revision_id]</h3>'),
    t('[field_user_lname]</h3>'),
    t('Go to profile'),
    t('</div>'),
    t('All'),
    t('Last name (field_user_lname)'),
    t('Last name'),
    t('Active'),
    t('Constituency'),
    t('Page'),
  );
  $export['profile_list_rev'] = $view;

  $view = new view();
  $view->name = 'profile_questions_answers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Questions & Answers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Questions & Answers';
  $handler->display->display_options['css_class'] = 'pager-load-more';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = 'first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'prev';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'content author';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Field: | question start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '| question start';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="question">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_dialogue_topic']['id'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['table'] = 'field_data_field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['field'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_class'] = 'topic float-right';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_topic']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_topic']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_only_short';
  /* Field: Content: Sender Name */
  $handler->display->display_options['fields']['field_dialogue_sender_name']['id'] = 'field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['table'] = 'field_data_field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['field'] = 'field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['label'] = 'Question from';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['alter']['text'] = '[field_dialogue_sender_name]<br/><span class="subline">[created]</span>
';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_wrapper_class'] = 'bubble';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['empty'] = 'anonymous<br/><span class="subline">[created]</span>';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_class'] = 'content';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_dialogue_tags']['id'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['table'] = 'field_data_field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['field'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['label'] = '';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_tags']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_wrapper_class'] = 'icon-taxonomy';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_tags']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_dialogue_tags']['delta_offset'] = '0';
  /* Field: | question end */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '| question end';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: | answer start */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '| answer start';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="comment answer clearfix" id="answer-[cid]">';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: | inner start */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['ui_name'] = '| inner start';
  $handler->display->display_options['fields']['nothing_5']['label'] = '';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '<div class="content-inner clearfix">';
  $handler->display->display_options['fields']['nothing_5']['element_label_colon'] = FALSE;
  /* Field: User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_s',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'comment';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['relationship'] = 'cid';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created_1']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['created_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'short';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['text'] = '<div class="file-image float-left push-bottom-s">[field_user_picture]</div>
<h3>Answer from [field_user_fname] [field_user_lname]</h3>
<p class="date">[created_1]</p>
<div class="content clear-both">[comment_body]</div>';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['empty'] = '<div class="file-image float-left">[field_user_picture]</div>
<strong>No answer yet</strong>';
  $handler->display->display_options['fields']['comment_body']['hide_alter_empty'] = FALSE;
  /* Field: | inner end */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['ui_name'] = '| inner end';
  $handler->display->display_options['fields']['nothing_6']['label'] = '';
  $handler->display->display_options['fields']['nothing_6']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_6']['element_label_colon'] = FALSE;
  /* Field: | answer end */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = '| answer end';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Field: to top link */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'to top link';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '<div class="anchor-to-top clearfix"><a href="#page">to the top</a></div>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Recipient (field_dialogue_recipient) */
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dialogue_recipient_target_id']['summary_options']['items_per_page'] = '25';
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

  /* Display: Profile */
  $handler = $view->new_display('block', 'Profile', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Frontpage */
  $handler = $view->new_display('block', 'Frontpage', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Colorbox */
  $handler = $view->new_display('block', 'Colorbox', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Field: | question start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '| question start';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="question">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_dialogue_topic']['id'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['table'] = 'field_data_field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['field'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_class'] = 'topic float-right';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_topic']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_topic']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_only_short';
  /* Field: Content: Sender Name */
  $handler->display->display_options['fields']['field_dialogue_sender_name']['id'] = 'field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['table'] = 'field_data_field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['field'] = 'field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['label'] = 'Question from';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['alter']['text'] = '[field_dialogue_sender_name]<br/><span class="subline">[created]</span>
';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_wrapper_class'] = 'bubble';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['empty'] = 'anonymous<br/><span class="subline">[created]</span>';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_class'] = 'content';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_dialogue_tags']['id'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['table'] = 'field_data_field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['field'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['label'] = '';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_tags']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_wrapper_class'] = 'icon-taxonomy';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_tags']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_dialogue_tags']['delta_offset'] = '0';
  /* Field: | question end */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '| question end';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: | answer start */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '| answer start';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="comment answer clearfix" id="answer-[cid]">';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_s',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'comment';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['relationship'] = 'cid';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created_1']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['created_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'short';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['text'] = '<div class="file-image float-left push-bottom-s">[field_user_picture]</div>
<h3>Answer from [field_user_fname] [field_user_lname]</h3>
<p class="date">[created_1]</p>
<div class="content clear-both">[comment_body]</div>';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['empty'] = '<div class="file-image float-left">[field_user_picture]</div>
<strong>No answer yet</strong>';
  $handler->display->display_options['fields']['comment_body']['hide_alter_empty'] = FALSE;
  /* Field: | answer end */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = '| answer end';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'dialogue' => 'dialogue',
  );

  /* Display: Full content */
  $handler = $view->new_display('block', 'Full content', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Field: User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture_1']['id'] = 'field_user_picture_1';
  $handler->display->display_options['fields']['field_user_picture_1']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture_1']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture_1']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_picture_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture_1']['element_wrapper_class'] = 'file-image float-left push-bottom-l';
  $handler->display->display_options['fields']['field_user_picture_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture_1']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture_1']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_l',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname_1']['id'] = 'field_user_fname_1';
  $handler->display->display_options['fields']['field_user_fname_1']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname_1']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname_1']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_fname_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname_1']['element_label_colon'] = FALSE;
  /* Field: User: Party */
  $handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['table'] = 'field_data_field_user_party';
  $handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_party']['label'] = '';
  $handler->display->display_options['fields']['field_user_party']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_party']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party']['delta_offset'] = '0';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname_1']['id'] = 'field_user_lname_1';
  $handler->display->display_options['fields']['field_user_lname_1']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname_1']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname_1']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_lname_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname_1']['alter']['text'] = '[field_user_fname_1] [field_user_lname_1], [field_user_party]';
  $handler->display->display_options['fields']['field_user_lname_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname_1']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['field_user_lname_1']['element_wrapper_class'] = 'push-bottom-xxs';
  $handler->display->display_options['fields']['field_user_lname_1']['element_default_classes'] = FALSE;
  /* Field: User: Parliament */
  $handler->display->display_options['fields']['field_user_parliament']['id'] = 'field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['field'] = 'field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_parliament']['label'] = '';
  $handler->display->display_options['fields']['field_user_parliament']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_parliament']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_user_parliament']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_parliament']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_parliament']['delta_offset'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Ask a Question';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'users/[name]#block-webform-client-block-17';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_class'] = 'form-submit big link-question';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'center push-bottom-l';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Link to the full profile */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['view_user']['ui_name'] = 'Link to the full profile';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_user']['element_wrapper_class'] = 'link-profile';
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_user']['text'] = 'to the full profile';
  /* Field: | question start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '| question start';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="question clear-both">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_dialogue_topic']['id'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['table'] = 'field_data_field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['field'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_class'] = 'topic float-right';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_topic']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_topic']['type'] = 'textformatter_list';
  $handler->display->display_options['fields']['field_dialogue_topic']['settings'] = array(
    'textformatter_type' => 'comma',
    'textformatter_comma_and' => 0,
    'textformatter_comma_full_stop' => 0,
    'textformatter_comma_override' => 0,
    'textformatter_separator_custom' => '',
    'textformatter_separator_custom_tag' => '0',
    'textformatter_separator_custom_class' => '',
    'textformatter_comma_tag' => '0',
    'textformatter_class' => '',
    'textformatter_term_plain' => 1,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Sender Name */
  $handler->display->display_options['fields']['field_dialogue_sender_name']['id'] = 'field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['table'] = 'field_data_field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['field'] = 'field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['label'] = 'Question from';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['alter']['text'] = '[field_dialogue_sender_name]<br/><span class="subline">[created]</span>';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_wrapper_class'] = 'bubble';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['empty'] = 'anonymous<br/><span class="subline">[created]</span>';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_class'] = 'content';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_dialogue_tags']['id'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['table'] = 'field_data_field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['field'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags']['label'] = '';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_tags']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_wrapper_class'] = 'icon-taxonomy';
  $handler->display->display_options['fields']['field_dialogue_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_tags']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_dialogue_tags']['delta_offset'] = '0';
  /* Field: | question end */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '| question end';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: | answer start */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '| answer start';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="comment answer push-bottom-s clearfix">';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: | inner start */
  $handler->display->display_options['fields']['nothing_9']['id'] = 'nothing_9';
  $handler->display->display_options['fields']['nothing_9']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_9']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_9']['ui_name'] = '| inner start';
  $handler->display->display_options['fields']['nothing_9']['label'] = '';
  $handler->display->display_options['fields']['nothing_9']['alter']['text'] = '<div class="content-inner clearfix">';
  $handler->display->display_options['fields']['nothing_9']['element_label_colon'] = FALSE;
  /* Field: User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_class'] = 'float-left file-image push-bottom-s';
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_s',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'comment';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['relationship'] = 'cid';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created_1']['element_wrapper_class'] = 'date';
  $handler->display->display_options['fields']['created_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'short';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['text'] = '<div class="file-image float-left push-bottom-s">[field_user_picture]</div>
<h3>Answer from [field_user_fname] [field_user_lname]</h3>
<p class="date">[created_1]</p>
<div class="content clear-both">[comment_body]</div>';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['empty'] = '<div class="file-image float-left">[field_user_picture]</div>
<strong>No answer yet</strong>';
  $handler->display->display_options['fields']['comment_body']['hide_alter_empty'] = FALSE;
  /* Field: | inner end */
  $handler->display->display_options['fields']['nothing_10']['id'] = 'nothing_10';
  $handler->display->display_options['fields']['nothing_10']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_10']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_10']['ui_name'] = '| inner end';
  $handler->display->display_options['fields']['nothing_10']['label'] = '';
  $handler->display->display_options['fields']['nothing_10']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_10']['element_label_colon'] = FALSE;
  /* Field: | more info start */
  $handler->display->display_options['fields']['nothing_7']['id'] = 'nothing_7';
  $handler->display->display_options['fields']['nothing_7']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_7']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_7']['ui_name'] = '| more info start';
  $handler->display->display_options['fields']['nothing_7']['label'] = '';
  $handler->display->display_options['fields']['nothing_7']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_7']['alter']['text'] = '<div class="more-info content-inner clear-both">';
  $handler->display->display_options['fields']['nothing_7']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Print link */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['ui_name'] = 'Print link';
  $handler->display->display_options['fields']['nothing_5']['label'] = '';
  $handler->display->display_options['fields']['nothing_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = 'Print question and answer';
  $handler->display->display_options['fields']['nothing_5']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_5']['alter']['path'] = 'print/node/[nid]';
  $handler->display->display_options['fields']['nothing_5']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing_5']['alter']['link_class'] = 'print-page';
  $handler->display->display_options['fields']['nothing_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_5']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing_5']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Permalink to this question and answer';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<div class="text-field path">[path]</div>';
  $handler->display->display_options['fields']['path']['element_type'] = 'div';
  $handler->display->display_options['fields']['path']['element_class'] = 'form-text';
  $handler->display->display_options['fields']['path']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['path']['element_label_class'] = 'push-bottom-xxs';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['path']['element_wrapper_class'] = 'permalink';
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Clipboard link */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['ui_name'] = 'Clipboard link';
  $handler->display->display_options['fields']['nothing_6']['label'] = '';
  $handler->display->display_options['fields']['nothing_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_6']['alter']['text'] = 'Copy to clipboard';
  $handler->display->display_options['fields']['nothing_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_6']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_6']['element_wrapper_class'] = 'zero-clipboard float-right';
  $handler->display->display_options['fields']['nothing_6']['element_default_classes'] = FALSE;
  /* Field: | more info end */
  $handler->display->display_options['fields']['nothing_8']['id'] = 'nothing_8';
  $handler->display->display_options['fields']['nothing_8']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_8']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_8']['ui_name'] = '| more info end';
  $handler->display->display_options['fields']['nothing_8']['label'] = '';
  $handler->display->display_options['fields']['nothing_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_8']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_8']['element_label_colon'] = FALSE;
  /* Field: | answer end */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = '| answer end';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Field: To profile link */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'To profile link';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '[view_user]';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_4']['element_wrapper_class'] = 'link-profile';
  $handler->display->display_options['fields']['nothing_4']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'dialogue' => 'dialogue',
  );
  $translatables['profile_questions_answers'] = array(
    t('Master'),
    t('Questions & Answers'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('first'),
    t('prev'),
    t('next'),
    t('last'),
    t('Comments'),
    t('content author'),
    t('User entity referenced from field_dialogue_recipient'),
    t('<div class="question">'),
    t('Topic'),
    t('Question from'),
    t('[field_dialogue_sender_name]<br/><span class="subline">[created]</span>
'),
    t('anonymous<br/><span class="subline">[created]</span>'),
    t('</div>'),
    t('<div class="comment answer clearfix" id="answer-[cid]">'),
    t('<div class="content-inner clearfix">'),
    t('<div class="file-image float-left push-bottom-s">[field_user_picture]</div>
<h3>Answer from [field_user_fname] [field_user_lname]</h3>
<p class="date">[created_1]</p>
<div class="content clear-both">[comment_body]</div>'),
    t('<div class="file-image float-left">[field_user_picture]</div>
<strong>No answer yet</strong>'),
    t('<div class="anchor-to-top clearfix"><a href="#page">to the top</a></div>'),
    t('All'),
    t('Profile'),
    t('Frontpage'),
    t('« first'),
    t('zurück'),
    t('weiter'),
    t('last »'),
    t('Colorbox'),
    t('Full content'),
    t('[field_user_fname_1] [field_user_lname_1], [field_user_party]'),
    t('Ask a Question'),
    t('to the full profile'),
    t('<div class="question clear-both">'),
    t('[field_dialogue_sender_name]<br/><span class="subline">[created]</span>'),
    t('<div class="comment answer push-bottom-s clearfix">'),
    t('<div class="more-info content-inner clear-both">'),
    t('Print question and answer'),
    t('Permalink to this question and answer'),
    t('<div class="text-field path">[path]</div>'),
    t('Copy to clipboard'),
    t('[view_user]'),
  );
  $export['profile_questions_answers'] = $view;

  $view = new view();
  $view->name = 'qa_counter_link';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Q&A Link and Counter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Anchor: go to Q and A */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Anchor: go to Q and A';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'go to Questions and Answers';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '#block-views-profile-questions-answers-block';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'link-qa';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: User: Answers Give */
  $handler->display->display_options['fields']['field_user_answers_give']['id'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['table'] = 'field_data_field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['field'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['label'] = '';
  $handler->display->display_options['fields']['field_user_answers_give']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['alter']['text'] = '[field_user_answers_give] answer(s)';
  $handler->display->display_options['fields']['field_user_answers_give']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: User: Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get']['id'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['table'] = 'field_data_field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['field'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['label'] = '';
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['text'] = '[nothing]<br/>
[field_user_questions_get] question(s), [field_user_answers_give]';
  $handler->display->display_options['fields']['field_user_questions_get']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_questions_get']['element_wrapper_class'] = 'bubble tiny';
  $handler->display->display_options['fields']['field_user_questions_get']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['qa_counter_link'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('go to Questions and Answers'),
    t('[field_user_answers_give] answer(s)'),
    t('[nothing]<br/>
[field_user_questions_get] question(s), [field_user_answers_give]'),
    t('All'),
    t('Block'),
  );
  $export['qa_counter_link'] = $view;

  return $export;
}
