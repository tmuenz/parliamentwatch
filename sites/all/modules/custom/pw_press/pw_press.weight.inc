<?php
/**
 * @file
 * pw_press.weight.inc
 */

/**
 * Implements hook_default_weight_settings().
 */
function pw_press_default_weight_settings() {
  $export = array();

  $settings = new stdClass();
  $settings->disabled = FALSE; /* Edit this to true to make a default settings disabled initially */
  $settings->api_version = 1;
  $settings->id = '6';
  $settings->type = 'press_article';
  $settings->weight_enabled = FALSE;
  $settings->weight_range = TRUE;
  $settings->menu_weight = FALSE;
  $settings->weight_default = FALSE;
  $export['press_article'] = $settings;

  $settings = new stdClass();
  $settings->disabled = FALSE; /* Edit this to true to make a default settings disabled initially */
  $settings->api_version = 1;
  $settings->id = '5';
  $settings->type = 'press_release';
  $settings->weight_enabled = FALSE;
  $settings->weight_range = TRUE;
  $settings->menu_weight = FALSE;
  $settings->weight_default = FALSE;
  $export['press_release'] = $settings;

  return $export;
}
