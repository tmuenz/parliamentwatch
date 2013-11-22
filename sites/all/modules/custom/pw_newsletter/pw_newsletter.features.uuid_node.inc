<?php
/**
 * @file
 * pw_newsletter.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function pw_newsletter_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'Newsletter Subscription',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'c1c5b786-554c-429f-ba6e-37a58a183a79',
  'ds_switch' => '',
  'type' => 'webform',
  'language' => 'und',
  'created' => '1384869211',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '02763736-dab6-4d2f-9e45-87da9211d495',
  'revision_uid' => '1',
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'translations' => array(
    'original' => 'und',
    'data' => array(
      'und' => array(
        'entity_type' => 'node',
        'entity_id' => '10972',
        'language' => 'und',
        'source' => '',
        'uid' => '1',
        'status' => '1',
        'translate' => '0',
        'created' => '1384869263',
        'changed' => '1384869263',
      ),
    ),
  ),
  'webform' => array(
    'nid' => '10972',
    'confirmation' => '<p>
	<span style="line-height: 1.5;">Thank you!</span>
</p>
<p>
	Please check your e-mail account and click on the confirmation link in the e-mail we just send you.
</p>
<p>
	<span style="line-height: 1.5;">back to </span><a href="http://www.abgeordnetenwatch.de" style="line-height: 1.5;" target="_top">homepage</a><span style="line-height: 1.5;">.</span>
</p>
',
    'confirmation_format' => 'managed_content',
    'redirect_url' => '<none>',
    'status' => '1',
    'block' => '0',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '0',
    'submit_text' => '',
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'machine_name' => 'newsletter_subscription',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(
      1 => array(
        'nid' => '10972',
        'eid' => '1',
        'email' => '1',
        'subject' => 'Confirmation',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '%confirm_url',
        'excluded_components' => array(),
        'html' => '0',
        'attachments' => '0',
      ),
    ),
    'components' => array(
      1 => array(
        'nid' => 10972,
        'cid' => '1',
        'pid' => '0',
        'form_key' => 'e_mail',
        'name' => 'E-Mail',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 1,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '0',
        'machine_name' => 'newsletter_subscription-e_mail',
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 10972,
        'cid' => '2',
        'pid' => '0',
        'form_key' => 'status',
        'name' => 'status',
        'type' => 'hidden',
        'value' => 'subscribed',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '1',
        'machine_name' => 'newsletter_subscription__status',
        'page_num' => 1,
      ),
    ),
  ),
  'signature' => '',
  'spaminess' => 0,
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'print_display' => 0,
  'print_display_comment' => 0,
  'print_display_urllist' => 0,
  'name' => 'root',
  'picture' => '0',
  'data' => 'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'weight_weight' => FALSE,
  'date' => '2013-11-19 14:53:31 +0100',
);
  return $nodes;
}
