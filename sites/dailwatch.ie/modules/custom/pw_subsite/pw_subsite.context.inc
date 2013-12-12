<?php
/**
 * @file
 * pw_subsite.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pw_subsite_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-86a53961ed245acd288207ce4e4aebaf' => array(
          'module' => 'views',
          'delta' => '86a53961ed245acd288207ce4e4aebaf',
          'region' => 'content',
          'weight' => '-9',
        ),
        'quicktabs-politicians_answer' => array(
          'module' => 'quicktabs',
          'delta' => 'politicians_answer',
          'region' => 'content',
          'weight' => '-8',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['frontpage'] = $context;

  return $export;
}
