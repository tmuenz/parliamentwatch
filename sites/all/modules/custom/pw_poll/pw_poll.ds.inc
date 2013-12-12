<?php
/**
 * @file
 * pw_poll.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_poll_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pw_poll|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pw_poll';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'poll_legend_block' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'legend',
      ),
    ),
    'poll_details' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'poll_votes_per_party_block_ds' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'sharethis' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'comments' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'clear-both comments',
      ),
    ),
    'body' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => 'Background information',
        'lb-el' => 'h3',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'p',
        'fi-cl' => '',
      ),
    ),
    'field_pw_views_reference' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => 'How did your constituency representatives vote?',
        'lb-el' => 'h3',
        'lb-col' => TRUE,
      ),
    ),
  );
  $export['node|pw_poll|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pw_poll|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pw_poll';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'poll_legend_block' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'legend',
      ),
    ),
    'poll_details' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'poll_votes_per_party_block_ds' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'sharethis' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'comments' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'clear-both comments',
      ),
    ),
    'body' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => 'Background information',
        'lb-el' => 'h3',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'p',
        'fi-cl' => '',
      ),
    ),
    'field_pw_views_reference' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => 'How did your constituency representatives vote?',
        'lb-el' => 'h3',
        'lb-col' => TRUE,
      ),
    ),
  );
  $export['node|pw_poll|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pw_poll|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pw_poll';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'field_pw_overview_chart' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'float-left',
      ),
    ),
  );
  $export['node|pw_poll|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_poll_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'poll_details';
  $ds_field->label = 'Poll Details';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|pw_polls_list-details',
    'block_render' => '1',
  );
  $export['poll_details'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'poll_legend_block';
  $ds_field->label = 'Poll legend block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|4',
    'block_render' => '3',
  );
  $export['poll_legend_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'poll_votes_per_party_block_ds';
  $ds_field->label = 'Total votes per party block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'pw_blocks|pw_per_party_votes',
    'block_render' => '3',
  );
  $export['poll_votes_per_party_block_ds'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'pw_poll_votes_total';
  $ds_field->label = 'Total votes per poll';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'pw_blocks|pw_total_votes',
    'block_render' => '3',
  );
  $export['pw_poll_votes_total'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pw_poll_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pw_poll|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pw_poll';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'poll_votes_per_party_block_ds',
        1 => 'sharethis',
        2 => 'poll_details',
        3 => 'group_fieldset_polls_per_party',
        4 => 'poll_legend_block',
        5 => 'field_pw_views_reference',
        6 => 'body',
        7 => 'comments',
      ),
    ),
    'fields' => array(
      'poll_votes_per_party_block_ds' => 'ds_content',
      'sharethis' => 'ds_content',
      'poll_details' => 'ds_content',
      'group_fieldset_polls_per_party' => 'ds_content',
      'poll_legend_block' => 'ds_content',
      'field_pw_views_reference' => 'ds_content',
      'body' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|pw_poll|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pw_poll|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pw_poll';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'sharethis',
        1 => 'title',
        2 => 'poll_details',
        3 => 'group_polls_per_party',
        4 => 'poll_votes_per_party_block_ds',
        5 => 'poll_legend_block',
        6 => 'field_pw_views_reference',
        7 => 'body',
        8 => 'comments',
      ),
    ),
    'fields' => array(
      'sharethis' => 'ds_content',
      'title' => 'ds_content',
      'poll_details' => 'ds_content',
      'group_polls_per_party' => 'ds_content',
      'poll_votes_per_party_block_ds' => 'ds_content',
      'poll_legend_block' => 'ds_content',
      'field_pw_views_reference' => 'ds_content',
      'body' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|pw_poll|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pw_poll|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pw_poll';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_pw_overview_chart',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_pw_overview_chart' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|pw_poll|teaser'] = $ds_layout;

  return $export;
}
