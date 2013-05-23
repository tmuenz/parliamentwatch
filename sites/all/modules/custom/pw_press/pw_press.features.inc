<?php
/**
 * @file
 * pw_press.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_press_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "weight" && $api == "weight") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_press_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pw_press_node_info() {
  $items = array(
    'press_article' => array(
      'name' => t('Presseartikel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'press_release' => array(
      'name' => t('Press release'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
