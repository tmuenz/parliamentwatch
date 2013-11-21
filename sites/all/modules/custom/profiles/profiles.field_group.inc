<?php
/**
 * @file
 * profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function profiles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basics|user|user|default';
  $field_group->group_name = 'group_basics';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basics ID Wrapper',
    'weight' => '6',
    'children' => array(
      0 => 'group_user_basics',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Basics ID Wrapper',
      'instance_settings' => array(
        'classes' => 'add-sharethis clear-both',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_basics|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_managed_content|user|user|form';
  $field_group->group_name = 'group_managed_content';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mangaged Content',
    'weight' => '9',
    'children' => array(
      0 => 'field_user_answers_give',
      1 => 'field_user_childs',
      2 => 'field_user_gender',
      3 => 'field_user_job_skills',
      4 => 'field_user_marriage_status',
      5 => 'field_user_questions_get',
      6 => 'field_profile_node_connector',
      7 => 'field_user_commitee',
      8 => 'field_user_first_letter_lname',
      9 => 'field_user_list_position',
      10 => 'field_user_parliament',
      11 => 'field_user_political_roles',
      12 => 'timezone',
      13 => 'locale',
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
  $export['group_managed_content|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_polls|user|user|default';
  $field_group->group_name = 'group_polls';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Polls ID Wrapper',
    'weight' => '8',
    'children' => array(
      0 => 'group_user_polls',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Polls ID Wrapper',
      'instance_settings' => array(
        'classes' => 'add-sharethis clear-both',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_polls|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_premium|user|user|form';
  $field_group->group_name = 'group_premium';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Premium',
    'weight' => '8',
    'children' => array(
      0 => 'field_user_more',
      1 => 'field_user_picture',
      2 => 'field_user_about',
      3 => 'field_user_address',
      4 => 'field_user_image_gallery',
      5 => 'field_user_political_goals',
      6 => 'field_user_twitter_account',
      7 => 'field_user_picture_copyright',
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
  $export['group_premium|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profiles_mouseover|user|user|pw_profiles_list_compact';
  $field_group->group_name = 'group_profiles_mouseover';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'pw_profiles_list_compact';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mouseover',
    'weight' => '7',
    'children' => array(
      0 => 'field_user_commitee',
      1 => 'field_user_constituency',
      2 => 'field_user_parliament',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Mouseover',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_profiles_mouseover|user|user|pw_profiles_list_compact'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_roles|user|user|default';
  $field_group->group_name = 'group_roles';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Roles ID Wrapper',
    'weight' => '7',
    'children' => array(
      0 => 'group_user_commitee',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Roles ID Wrapper',
      'instance_settings' => array(
        'classes' => 'add-sharethis clear-both',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_roles|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_basics_additional|user|user|default';
  $field_group->group_name = 'group_user_basics_additional';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_basics';
  $field_group->data = array(
    'label' => 'Additional',
    'weight' => '15',
    'children' => array(
      0 => 'field_user_more',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Additional',
      'instance_settings' => array(
        'classes' => '',
        'description' => 'Additional Links',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_basics_additional|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_basics_basics|user|user|default';
  $field_group->group_name = 'group_user_basics_basics';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_basics';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '13',
    'children' => array(
      0 => 'field_user_constituency',
      1 => 'field_user_job_skills',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Basics',
      'instance_settings' => array(
        'classes' => '',
        'description' => 'Basic information',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_basics_basics|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_basics|user|user|default';
  $field_group->group_name = 'group_user_basics';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_basics';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '7',
    'children' => array(
      0 => 'group_user_basics_additional',
      1 => 'group_user_basics_basics',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_user_basics|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_commitee_tab|user|user|default';
  $field_group->group_name = 'group_user_commitee_tab';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_commitee';
  $field_group->data = array(
    'label' => 'Political Roles',
    'weight' => '1',
    'children' => array(
      0 => 'field_user_commitee',
      1 => 'field_user_political_roles',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Political Roles',
      'instance_settings' => array(
        'classes' => '',
        'description' => 'Political Roles',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_user_commitee_tab|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_commitee|user|user|default';
  $field_group->group_name = 'group_user_commitee';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_roles';
  $field_group->data = array(
    'label' => 'Commitee Fieldgroup',
    'weight' => '8',
    'children' => array(
      0 => 'group_user_commitee_tab',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_user_commitee|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_name|user|user|default';
  $field_group->group_name = 'group_user_name';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '2',
    'children' => array(
      0 => 'field_user_fname',
      1 => 'field_user_lname',
      2 => 'field_user_party',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Name',
      'instance_settings' => array(
        'classes' => 'h2 push-bottom-xxs',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_name|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_name|user|user|user_search';
  $field_group->group_name = 'group_user_name';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'user_search';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User name',
    'weight' => '1',
    'children' => array(
      0 => 'field_user_fname',
      1 => 'field_user_lname',
      2 => 'field_user_party',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'User name',
      'instance_settings' => array(
        'classes' => 'h3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_name|user|user|user_search'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_polls_archive|user|user|default';
  $field_group->group_name = 'group_user_polls_archive';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_polls';
  $field_group->data = array(
    'label' => 'Polls archive',
    'weight' => '32',
    'children' => array(
      0 => 'polls_archive_view',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_user_polls_archive|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_polls_last|user|user|default';
  $field_group->group_name = 'group_user_polls_last';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_polls';
  $field_group->data = array(
    'label' => 'Last poll',
    'weight' => '31',
    'children' => array(
      0 => 'polls_profile_last',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_user_polls_last|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_polls|user|user|default';
  $field_group->group_name = 'group_user_polls';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_polls';
  $field_group->data = array(
    'label' => 'Polls',
    'weight' => '1',
    'children' => array(
      0 => 'group_user_polls_archive',
      1 => 'group_user_polls_last',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_user_polls|user|user|default'] = $field_group;

  return $export;
}
