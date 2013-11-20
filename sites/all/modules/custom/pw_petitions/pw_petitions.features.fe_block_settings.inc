<?php
/**
 * @file
 * pw_petitions.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_petitions_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-petitions_description'] = array(
    'cache' => -1,
    'custom' => '0',
    'i18n_mode' => '1',
    'machine_name' => 'petitions_description',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
