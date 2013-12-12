<?php
/**
 * @file
 * pw_trustees.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_trustees_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|trustee|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'trustee';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_trustee_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'file-image float-left',
        ),
      ),
    ),
  );
  $export['node|trustee|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pw_trustees_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|trustee|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'trustee';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_trustee_image',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_trustee_image' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|trustee|default'] = $ds_layout;

  return $export;
}
