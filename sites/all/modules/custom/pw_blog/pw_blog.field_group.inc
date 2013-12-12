<?php
/**
 * @file
 * pw_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_author|node|blogpost|full';
  $field_group->group_name = 'group_blog_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogpost';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_blogpost_categories',
      1 => 'author_linked_to_contact_form',
      2 => 'post_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'push-bottom-m medium',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_blog_author|node|blogpost|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_metainformation|node|blogpost|full';
  $field_group->group_name = 'group_blog_metainformation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogpost';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metainformation',
    'weight' => '3',
    'children' => array(
      0 => 'field_blogpost_blogtags',
      1 => 'custom_comment_counter',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Metainformation',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_blog_metainformation|node|blogpost|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_searchitem|node|blogpost|search_result';
  $field_group->group_name = 'group_blog_searchitem';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogpost';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PW list item',
    'weight' => '0',
    'children' => array(
      0 => 'title',
      1 => 'node_link',
      2 => 'post_date',
      3 => 'search_snippet',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'PW list item',
      'instance_settings' => array(
        'classes' => 'pw-list-item',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_blog_searchitem|node|blogpost|search_result'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_search_blog_body|node|blogpost|search_result';
  $field_group->group_name = 'group_search_blog_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogpost';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '14',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Body',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_search_blog_body|node|blogpost|search_result'] = $field_group;

  return $export;
}
