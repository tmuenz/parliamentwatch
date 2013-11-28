<?php
/**
 * @file
 * pw_petitions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_petitions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_petitions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PW Petitions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Petitionen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'pw-list-item clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Inhalt: Teaser image (field_teaser_image:fid) */
  $handler->display->display_options['relationships']['field_teaser_image_fid']['id'] = 'field_teaser_image_fid';
  $handler->display->display_options['relationships']['field_teaser_image_fid']['table'] = 'field_data_field_teaser_image';
  $handler->display->display_options['relationships']['field_teaser_image_fid']['field'] = 'field_teaser_image_fid';
  /* Feld: Inhalt: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Feld: Inhalt: Progress */
  $handler->display->display_options['fields']['field_petition_progress']['id'] = 'field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['table'] = 'field_data_field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['field'] = 'field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['label'] = '';
  $handler->display->display_options['fields']['field_petition_progress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_petition_progress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petition_progress']['type'] = 'computed_field_unsanitized';
  /* Feld: Inhalt: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Feld: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Teaser image wrapper';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_teaser_image',
    1 => 'field_image_copyright',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'float-left push-bottom-s push-right-m';
  /* Feld: Inhalt: Teaser image */
  $handler->display->display_options['fields']['field_teaser_image']['id'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['table'] = 'field_data_field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['field'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_teaser_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_image']['settings'] = array(
    'image_style' => 'pw_landscape_l',
    'image_link' => 'content',
  );
  /* Feld: Datei: copyright */
  $handler->display->display_options['fields']['field_image_copyright']['id'] = 'field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['table'] = 'field_data_field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['field'] = 'field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['relationship'] = 'field_teaser_image_fid';
  $handler->display->display_options['fields']['field_image_copyright']['label'] = '';
  $handler->display->display_options['fields']['field_image_copyright']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_copyright']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image_copyright']['element_wrapper_class'] = 'small medium';
  $handler->display->display_options['fields']['field_image_copyright']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Recipient */
  $handler->display->display_options['fields']['field_petition_recipient']['id'] = 'field_petition_recipient';
  $handler->display->display_options['fields']['field_petition_recipient']['table'] = 'field_data_field_petition_recipient';
  $handler->display->display_options['fields']['field_petition_recipient']['field'] = 'field_petition_recipient';
  $handler->display->display_options['fields']['field_petition_recipient']['label'] = '';
  $handler->display->display_options['fields']['field_petition_recipient']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petition_recipient']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_petition_recipient']['element_wrapper_class'] = 'medium';
  $handler->display->display_options['fields']['field_petition_recipient']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'strong';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div class="pw-petition-progress-wrapper float-left"><div class="pw-petition-progress" style="width: <?php 
$required = $data->_field_data[\'nid\'][\'entity\']->field_petition_required[\'und\'][0][\'value\'];
$signings = $data->_field_data[\'nid\'][\'entity\']->field_petition_signings[\'und\'][0][\'value\'];
$progress = $data->_field_data[\'nid\'][\'entity\']->field_petition_progress[\'und\'][0][\'value\'];
if($signings > $required){
    $progress = 100;
}
print $progress; ?>%;"></div></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Inhalt: Required signings */
  $handler->display->display_options['fields']['field_petition_required']['id'] = 'field_petition_required';
  $handler->display->display_options['fields']['field_petition_required']['table'] = 'field_data_field_petition_required';
  $handler->display->display_options['fields']['field_petition_required']['field'] = 'field_petition_required';
  $handler->display->display_options['fields']['field_petition_required']['label'] = 'Benötigte Unterschriften';
  $handler->display->display_options['fields']['field_petition_required']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_petition_required']['element_class'] = 'medium';
  $handler->display->display_options['fields']['field_petition_required']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_petition_required']['element_label_class'] = 'label-inline';
  $handler->display->display_options['fields']['field_petition_required']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_petition_required']['element_wrapper_class'] = 'medium clear-both';
  $handler->display->display_options['fields']['field_petition_required']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_petition_required']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Feld: Inhalt: Signings */
  $handler->display->display_options['fields']['field_petition_signings']['id'] = 'field_petition_signings';
  $handler->display->display_options['fields']['field_petition_signings']['table'] = 'field_data_field_petition_signings';
  $handler->display->display_options['fields']['field_petition_signings']['field'] = 'field_petition_signings';
  $handler->display->display_options['fields']['field_petition_signings']['label'] = '';
  $handler->display->display_options['fields']['field_petition_signings']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petition_signings']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_petition_signings']['element_wrapper_class'] = 'small light';
  $handler->display->display_options['fields']['field_petition_signings']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_petition_signings']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'text-right link-sign';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'zur Petition';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  /* Feld: Inhalt: Tags */
  $handler->display->display_options['fields']['field_blogpost_blogtags']['id'] = 'field_blogpost_blogtags';
  $handler->display->display_options['fields']['field_blogpost_blogtags']['table'] = 'field_data_field_blogpost_blogtags';
  $handler->display->display_options['fields']['field_blogpost_blogtags']['field'] = 'field_blogpost_blogtags';
  $handler->display->display_options['fields']['field_blogpost_blogtags']['label'] = '';
  $handler->display->display_options['fields']['field_blogpost_blogtags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blogpost_blogtags']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_blogpost_blogtags']['element_wrapper_class'] = 'icon-taxonomy clearfix clear-both';
  $handler->display->display_options['fields']['field_blogpost_blogtags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blogpost_blogtags']['delta_offset'] = '0';
  /* Feld: Inhalt: Anzahl an Kommentaren */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['path'] = 'node/[nid]#comments';
  $handler->display->display_options['fields']['comment_count']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['alt'] = 'zu den Kommentaren';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['comment_count']['element_wrapper_class'] = 'comment-count clear-both';
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['separator'] = '';
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comments';
  /* Feld: Inhalt: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit petition';
  /* Feld: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'nid' => 0,
    'sharethis' => 0,
    'title' => 0,
    'fieldset' => 0,
    'field_teaser_image' => 0,
    'field_image_copyright' => 0,
    'field_petition_recipient' => 0,
    'body' => 0,
    'field_petition_required' => 0,
    'field_petition_signings' => 0,
    'view_node' => 0,
    'field_blogpost_blogtags' => 0,
    'comment_count' => 0,
    'expression' => 0,
  );
  /* Sort criterion: Inhalt: Datum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'pw_petition' => 'pw_petition',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'petitions';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Block Progress */
  $handler = $view->new_display('block', 'Block Progress', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Progress */
  $handler->display->display_options['fields']['field_petition_progress']['id'] = 'field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['table'] = 'field_data_field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['field'] = 'field_petition_progress';
  $handler->display->display_options['fields']['field_petition_progress']['label'] = '';
  $handler->display->display_options['fields']['field_petition_progress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_petition_progress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_petition_progress']['type'] = 'computed_field_unsanitized';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div class="pw-petition-progress-wrapper float-left"><div class="pw-petition-progress" style="width: <?php 
$required = $data->_field_data[\'nid\'][\'entity\']->field_petition_required[\'und\'][0][\'value\'];
$signings = $data->_field_data[\'nid\'][\'entity\']->field_petition_signings[\'und\'][0][\'value\'];
$progress = $data->_field_data[\'nid\'][\'entity\']->field_petition_progress[\'und\'][0][\'value\'];
if($signings > $required){
    $progress = 100;
}
print $progress; ?>%;"></div></div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Inhalt: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['pw_petitions'] = $view;

  return $export;
}
