<?php
/**
 * @file
 * pw_petitions.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pw_petitions_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'petitions_description';
  $context->description = '';
  $context->tag = 'petitions';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'pw_petitions:page' => 'pw_petitions:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('petitions');
  $export['petitions_description'] = $context;

  return $export;
}
