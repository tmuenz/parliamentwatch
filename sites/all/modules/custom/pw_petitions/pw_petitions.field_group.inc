<?php
/**
 * @file
 * pw_petitions.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_petitions_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_petition_content|node|pw_petition|form';
  $field_group->group_name = 'group_petition_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pw_petition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_blogpost_blogtags',
      2 => 'field_teaser_image',
      3 => 'field_petitions_required',
      4 => 'field_petition_signings',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_petition_content|node|pw_petition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_petition_recipient|node|pw_petition|form';
  $field_group->group_name = 'group_petition_recipient';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pw_petition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recipients',
    'weight' => '2',
    'children' => array(
      0 => 'field_petition_content',
      1 => 'field_pw_parmliament',
      2 => 'field_petition_recipient',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_petition_recipient|node|pw_petition|form'] = $field_group;

  return $export;
}
