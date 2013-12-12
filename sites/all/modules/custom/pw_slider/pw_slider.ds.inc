<?php
/**
 * @file
 * pw_slider.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_slider_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pw_slider|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pw_slider';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'service_links_displays_group' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'sld_group_image',
    ),
  );
  $export['node|pw_slider|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_slider_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'pw_slider';
  $ds_field->label = 'PW Slider';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'comment' => 'comment',
    'node' => 'node',
    'file' => 'file',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 'user',
    'ds_views' => 'ds_views',
    'rules_config' => 'rules_config',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|slider-block',
    'block_render' => '3',
  );
  $export['pw_slider'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pw_slider_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pw_slider|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pw_slider';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'webform',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'webform' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|pw_slider|default'] = $ds_layout;

  return $export;
}
