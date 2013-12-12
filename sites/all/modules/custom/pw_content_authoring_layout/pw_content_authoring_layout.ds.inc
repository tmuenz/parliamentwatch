<?php
/**
 * @file
 * pw_content_authoring_layout.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function pw_content_authoring_layout_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'pw_file_portrait_xs';
  $ds_view_mode->label = 'pw_file_portrait_xs';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['pw_file_portrait_xs'] = $ds_view_mode;

  return $export;
}
