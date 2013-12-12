<?php
/**
 * @file
 * pw_subsite.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function pw_subsite_locale_default_languages() {
  $languages = array();

  // Exported language: de.
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'German',
    'native' => 'Deutsch',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'de',
    'weight' => '0',
  );
  return $languages;
}
