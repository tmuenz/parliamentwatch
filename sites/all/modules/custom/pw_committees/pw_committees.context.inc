<?php
/**
 * @file
 * pw_committees.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pw_committees_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'committees';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'committee/*' => 'committee/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-profile_list_solr-block_1' => array(
          'module' => 'views',
          'delta' => 'profile_list_solr-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['committees'] = $context;

  return $export;
}
