<?php
/**
 * @file
 * subsite_conf.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function subsite_conf_locale_default_languages() {
  $languages = array();

  // Exported language: lb.
  $languages['lb'] = array(
    'language' => 'lb',
    'name' => 'Luxembourgish',
    'native' => 'Luxembourgish',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => '0',
  );
  return $languages;
}
