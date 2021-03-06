<?php
/**
 * @file
 * dialogues.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function dialogues_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'dialogue_importer';
  $feeds_importer->config = array(
    'name' => 'Dialogue importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:12' => 'message[1]/annotation',
          'xpathparser:14' => 'message[1]/topic',
          'xpathparser:15' => 'message[1]/sender',
          'xpathparser:0' => 'concat(\'Question to \', message[1]/recipient, \' (@id: \', @id, \')\')',
          'xpathparser:1' => 'message[1]/tags/tags_item',
          'xpathparser:2' => 'message[1]/recipient.external_id',
          'xpathparser:3' => 'message[1]/inserted_date',
          'xpathparser:5' => 'message[1]/type',
          'xpathparser:6' => 'message[1]/id',
          'xpathparser:7' => 'concat(\'question-\',message[1]/id)',
          'xpathparser:8' => 'message[1]/documents/documents_item',
          'xpathparser:9' => '@id',
          'xpathparser:10' => 'message[1]/text',
          'xpathparser:11' => 'message[1]/keyworded_text',
          'xpathparser:16' => 'message[1]/sender.external_id',
          'xpathparser:17' => 'message[1]/status=1',
        ),
        'rawXML' => array(
          'xpathparser:12' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
        ),
        'context' => '//dialogue',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:12' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'dialogue',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_dialogue_annotation',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_dialogue_topic',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_dialogue_sender_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 0,
          ),
          4 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_dialogue_tags',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_dialogue_recipient:uuid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:3',
            'target' => 'created',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_dialogue_message_type',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_dialogue_message_id',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:7',
            'target' => 'guid',
            'unique' => 1,
          ),
          10 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_dialogue_documents:url',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_dialogue_id',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:10',
            'target' => 'body',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:11',
            'target' => 'body:summary',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:16',
            'target' => 'uid:uuid',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:17',
            'target' => 'status',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'filtered_html',
        'authorize' => 0,
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
  $export['dialogue_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'dialogue_message_importer';
  $feeds_importer->config = array(
    'name' => 'Dialogue message importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:1' => 'concat(\'question-\',../message[1]/id)',
          'xpathparser:2' => 'sender.external_id',
          'xpathparser:3' => 'topic',
          'xpathparser:4' => 'tags/tags_item',
          'xpathparser:5' => 'sender',
          'xpathparser:6' => 'recipient.external_id',
          'xpathparser:7' => 'status=1',
          'xpathparser:8' => 'inserted_date',
          'xpathparser:9' => 'sender',
          'xpathparser:10' => 'type',
          'xpathparser:11' => 'id',
          'xpathparser:12' => 'concat(\'answer-\',id)',
          'xpathparser:13' => 'documents/documents_item',
          'xpathparser:14' => '../@id',
          'xpathparser:15' => 'keyworded_text',
          'xpathparser:16' => 'text',
          'xpathparser:17' => 'concat(\'Answer to \', recipient, \' (@id: \', ../@id, \')\')',
        ),
        'rawXML' => array(
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
        ),
        'context' => '//dialogue/message[position()>1]',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsCommentProcessor',
      'config' => array(
        'input_format' => 'filtered_html',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'nid_by_guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'uid:uuid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_dialogue_topic',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_dialogue_tags',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_dialogue_sender_fullname',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_dialogue_recipient:uuid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:7',
            'target' => 'status',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:8',
            'target' => 'created',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:9',
            'target' => 'name',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_dialogue_message_type',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_dialogue_message_id',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:12',
            'target' => 'guid',
            'unique' => 1,
          ),
          12 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_dialogue_documents:url',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_dialogue_id',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_dialogue_annotation',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:16',
            'target' => 'comment_body',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:17',
            'target' => 'subject',
            'unique' => FALSE,
          ),
        ),
        'author' => 0,
        'node_type' => 'dialogue',
        'skip_hash_check' => FALSE,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['dialogue_message_importer'] = $feeds_importer;

  return $export;
}
