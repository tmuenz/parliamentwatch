<?php
/**
 * @file
 * pw_newsletter.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function pw_newsletter_webform_defaults() {
$webforms = array();
  $webforms['newsletter_subscription'] = array(
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
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '02763736-dab6-4d2f-9e45-87da9211d495',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.
</p>
',
        'summary' => '',
        'format' => 'managed_content',
        'safe_value' => '<p>
	Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.
</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
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
      0 => array(
        'email' => 'newsletter_subscription-e_mail',
        'subject' => 'Confirmation',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '%confirm_url',
        'excluded_components' => array(),
        'html' => '0',
        'attachments' => '0',
        'components_machine_names' => array(
          'email' => TRUE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      'newsletter_subscription-e_mail' => array(
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
      'newsletter_subscription__status' => array(
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
);
return $webforms;
}
