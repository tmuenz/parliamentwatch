<?php
/**
 * @file
 * pw_content_authoring_layout.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function pw_content_authoring_layout_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new stdClass();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'full';
  $linkit_profile->admin_title = 'Full';
  $linkit_profile->data = array(
    'plugins' => array(
      'entity:taxonomy_term' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:node' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:file' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:user' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'article' => 0,
        'page' => 0,
        'blogpost' => 0,
        'dialogue' => 0,
        'pw_poll' => 0,
        'press_release' => 0,
        'press_article' => 0,
        'pw_slider' => 0,
        'trustee' => 0,
        'webform' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
      'include_unpublished' => 1,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'audio' => 0,
        'document' => 0,
        'image' => 0,
        'video' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
      'show_scheme' => 1,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'area_codex' => 0,
        'committee' => 0,
        'committee_types' => 0,
        'constituency' => 0,
        'parliaments' => 0,
        'party' => 0,
        'political_roles' => 0,
        'pw_widget_values' => 0,
        'tags' => 0,
        'zipcodes' => 0,
        'blogtags' => 0,
        'dialogue_tags' => 0,
        'dialogue_topics' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
      'reverse_menu_trail' => 0,
    ),
    'autocomplete' => array(
      'charLimit' => 3,
      'wait' => 350,
      'remoteTimeout' => 10000,
    ),
    'attributes' => array(
      'rel' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'class' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'accesskey' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'id' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'title' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
    ),
  );
  $linkit_profile->role_rids = array(
    3 => 1,
  );
  $linkit_profile->weight = 0;
  $export['full'] = $linkit_profile;

  $linkit_profile = new stdClass();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'managed_content';
  $linkit_profile->admin_title = 'Managed content';
  $linkit_profile->data = array(
    'plugins' => array(
      'entity:taxonomy_term' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:node' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:file' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:user' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'article' => 0,
        'page' => 0,
        'blogpost' => 0,
        'dialogue' => 0,
        'pw_poll' => 0,
        'press_release' => 0,
        'press_article' => 0,
        'pw_slider' => 0,
        'trustee' => 0,
        'webform' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
      'include_unpublished' => 1,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'audio' => 0,
        'document' => 0,
        'image' => 0,
        'video' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
      'show_scheme' => 1,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'area_codex' => 0,
        'committee' => 0,
        'committee_types' => 0,
        'constituency' => 0,
        'parliaments' => 0,
        'party' => 0,
        'political_roles' => 0,
        'pw_widget_values' => 0,
        'tags' => 0,
        'zipcodes' => 0,
        'blogtags' => 0,
        'dialogue_tags' => 0,
        'dialogue_topics' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
      'reverse_menu_trail' => 0,
    ),
    'autocomplete' => array(
      'charLimit' => 3,
      'wait' => 350,
      'remoteTimeout' => 10000,
    ),
    'attributes' => array(
      'rel' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'class' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'accesskey' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'id' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'title' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
    ),
  );
  $linkit_profile->role_rids = array(
    51622513 => 1,
  );
  $linkit_profile->weight = 0;
  $export['managed_content'] = $linkit_profile;

  return $export;
}
