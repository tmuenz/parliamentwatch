<?php
/**
 * @file
 * pw_basics.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_basics_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_transliterate';
  $strongarm->value = 1;
  $export['pathauto_transliterate'] = $strongarm;

  return $export;
}
