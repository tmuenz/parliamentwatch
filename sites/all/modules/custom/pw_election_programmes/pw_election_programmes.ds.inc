<?php
/**
 * @file
 * pw_election_programmes.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_election_programmes_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|election_programme|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'election_programme';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
        ),
      ),
    ),
    'field_election_programme_open' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'text-right read-more',
        ),
      ),
    ),
    'field_teaser_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'file-image float-left',
        ),
      ),
    ),
    'field_pdf_download' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'text-right',
        ),
      ),
    ),
  );
  $export['node|election_programme|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pw_election_programmes_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|election_programme|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'election_programme';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_teaser_image',
        1 => 'body',
        2 => 'field_election_programme_open',
        3 => 'field_pdf_download',
      ),
    ),
    'fields' => array(
      'field_teaser_image' => 'ds_content',
      'body' => 'ds_content',
      'field_election_programme_open' => 'ds_content',
      'field_pdf_download' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|election_programme|default'] = $ds_layout;

  return $export;
}
