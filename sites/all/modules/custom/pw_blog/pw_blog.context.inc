<?php
/**
 * @file
 * pw_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pw_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog';
  $context->description = 'Blocks in the sidebar';
  $context->tag = 'blog';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blogpost' => 'blogpost',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'blogtags' => 'blogtags',
        'blogtags/*' => 'blogtags/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'blog' => 'blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'custom_search_blocks-1' => array(
          'module' => 'custom_search_blocks',
          'delta' => '1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'tagadelic-24' => array(
          'module' => 'tagadelic',
          'delta' => '24',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'tagadelic-31' => array(
          'module' => 'tagadelic',
          'delta' => '31',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-blog_comments-block' => array(
          'module' => 'views',
          'delta' => 'blog_comments-block',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'delta_blocks-feed-icons' => array(
          'module' => 'delta_blocks',
          'delta' => 'feed-icons',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks in the sidebar');
  t('blog');
  $export['blog'] = $context;

  return $export;
}
