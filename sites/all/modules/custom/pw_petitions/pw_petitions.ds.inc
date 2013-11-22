<?php
/**
 * @file
 * pw_petitions.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_petitions_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pw_petition|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pw_petition';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'pw_petition_form' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'sharethis' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'custom_comment_counter' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => 'comment-count push-bottom-m',
      ),
    ),
    'comments' => array(
      'weight' => '10',
      'label' => 'above',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'body' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'field_blogpost_blogtags' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'icon-taxonomy',
      ),
    ),
    'field_teaser_image' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'file-image float-left push-bottom-s',
      ),
    ),
    'field_petition_recipient' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => 'medium',
      ),
    ),
    'field_petitions_required' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'strong',
        'ow-cl' => 'medium',
      ),
    ),
    'field_petition_signings' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'light small push-bottom-l',
      ),
    ),
  );
  $export['node|pw_petition|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_petitions_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'pw_petition_form';
  $ds_field->label = 'Petition form';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'webform|client-block-10344',
    'block_render' => '1',
  );
  $export['pw_petition_form'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pw_petitions_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pw_petition|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pw_petition';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_petition_recipient',
        1 => 'sharethis',
        2 => 'field_blogpost_blogtags',
        3 => 'custom_comment_counter',
        4 => 'field_teaser_image',
        5 => 'body',
        6 => 'field_petitions_required',
        7 => 'field_petition_signings',
        8 => 'pw_petition_form',
        9 => 'comments',
      ),
    ),
    'fields' => array(
      'field_petition_recipient' => 'ds_content',
      'sharethis' => 'ds_content',
      'field_blogpost_blogtags' => 'ds_content',
      'custom_comment_counter' => 'ds_content',
      'field_teaser_image' => 'ds_content',
      'body' => 'ds_content',
      'field_petitions_required' => 'ds_content',
      'field_petition_signings' => 'ds_content',
      'pw_petition_form' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|pw_petition|full'] = $ds_layout;

  return $export;
}
