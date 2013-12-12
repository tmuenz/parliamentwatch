<?php
/**
 * @file
 * pw_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_slider_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_slider_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pw_slider_node_info() {
  $items = array(
    'pw_slider' => array(
      'name' => t('Slider item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function pw_slider_weight_features_default_settings() {
  $settings = array();

  $settings['pw_slider'] = array(
    'enabled' => '1',
    'range' => '10',
    'menu_weight' => '0',
    'default' => '0',
    'sync_translations' => '0',
  );

  return $settings;
}
