<?php
/**
 * @file
 * pw_press.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function pw_press_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'press_articles';
  $feeds_importer->config = array(
    'name' => 'Press articles',
    'description' => 'Imports a csv file to press article nodes',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'press_article',
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'ID',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'datum',
            'target' => 'field_press_article_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'medium',
            'target' => 'field_press_article_publisher',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'url',
            'target' => 'field_press_article_attachment',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'video',
            'target' => 'field_press_article_video:MediaFeedsLibraryProvider',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'sound',
            'target' => 'field_press_article_sound:MediaFeedsLibraryProvider',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'link',
            'target' => 'field_press_article_link:url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'managed_content',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['press_articles'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'press_release';
  $feeds_importer->config = array(
    'name' => 'Press release',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'ID',
          'xpathparser:1' => 'title',
          'xpathparser:2' => 'txt',
          'xpathparser:3' => 'datum',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
        ),
        'context' => '//aw_pressemitteilungen',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'press_release',
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_press_release_body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_press_release_date:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'managed_content',
        'skip_hash_check' => 0,
        'authorize' => 1,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['press_release'] = $feeds_importer;

  return $export;
}
