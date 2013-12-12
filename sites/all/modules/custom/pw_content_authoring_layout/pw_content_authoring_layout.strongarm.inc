<?php
/**
 * @file
 * pw_content_authoring_layout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_content_authoring_layout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_per_field_core';
  $strongarm->value = 1;
  $export['better_formats_per_field_core'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      'media_link' => array(
        'custom_settings' => TRUE,
      ),
      'media_preview' => array(
        'custom_settings' => TRUE,
      ),
      'media_small' => array(
        'custom_settings' => TRUE,
      ),
      'media_large' => array(
        'custom_settings' => TRUE,
      ),
      'media_original' => array(
        'custom_settings' => TRUE,
      ),
      'pw_file_landscape_l' => array(
        'custom_settings' => TRUE,
      ),
      'pw_file_portrait_l' => array(
        'custom_settings' => TRUE,
      ),
      'pw_file_portrait_m' => array(
        'custom_settings' => TRUE,
      ),
      'pw_file_portrait_s' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'pw_file_portrait_xs' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'pw_file_landscape_l' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'pw_file_portrait_l' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'pw_file_portrait_m' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'pw_file_portrait_s' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'pw_file_portrait_xs' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'media_responsive' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'gd';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_block_enabled';
  $strongarm->value = 1;
  $export['resp_img_block_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_default_suffix';
  $strongarm->value = '__mobile';
  $export['resp_img_default_suffix'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_forceredirect';
  $strongarm->value = '0';
  $export['resp_img_forceredirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_forceresize';
  $strongarm->value = '1';
  $export['resp_img_forceresize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_purgeexpire';
  $strongarm->value = '0';
  $export['resp_img_purgeexpire'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_reloadonresize';
  $strongarm->value = '0';
  $export['resp_img_reloadonresize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_user_user_field_user_about';
  $strongarm->value = 0;
  $export['resp_img_user_user_field_user_about'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_user_user_field_user_education';
  $strongarm->value = 0;
  $export['resp_img_user_user_field_user_education'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_user_user_field_user_first_letter_lname';
  $strongarm->value = 0;
  $export['resp_img_user_user_field_user_first_letter_lname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_user_user_field_user_fname';
  $strongarm->value = 0;
  $export['resp_img_user_user_field_user_fname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_user_user_field_user_job_skills';
  $strongarm->value = 0;
  $export['resp_img_user_user_field_user_job_skills'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_user_user_field_user_lname';
  $strongarm->value = 0;
  $export['resp_img_user_user_field_user_lname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_user_user_field_user_political_goals';
  $strongarm->value = 0;
  $export['resp_img_user_user_field_user_political_goals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_user_user_field_user_pseudonym';
  $strongarm->value = 0;
  $export['resp_img_user_user_field_user_pseudonym'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_user_user_field_user_twitter_account';
  $strongarm->value = 0;
  $export['resp_img_user_user_field_user_twitter_account'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resp_img_use_device_pixel_ratio';
  $strongarm->value = 0;
  $export['resp_img_use_device_pixel_ratio'] = $strongarm;

  return $export;
}
