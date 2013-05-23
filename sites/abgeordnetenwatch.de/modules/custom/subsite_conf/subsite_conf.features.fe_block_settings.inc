<?php
/**
 * @file
 * subsite_conf.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function subsite_conf_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-metanavi_addthis'] = array(
    'cache' => -1,
    'custom' => '0',
    'i18n_mode' => '1',
    'machine_name' => 'metanavi_addthis',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Share',
    'visibility' => '0',
  );

  $export['block-press_contact'] = array(
    'cache' => -1,
    'custom' => '0',
    'i18n_mode' => '0',
    'machine_name' => 'press_contact',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Ihr Pressekontakt',
    'visibility' => '0',
  );

  $export['block-press_partner'] = array(
    'cache' => -1,
    'custom' => '0',
    'i18n_mode' => '0',
    'machine_name' => 'press_partner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Unsere Medienpartner',
    'visibility' => '0',
  );

  $export['block-social_media_footer'] = array(
    'cache' => -1,
    'custom' => '0',
    'i18n_mode' => '0',
    'machine_name' => 'social_media_footer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'postscript_fourth',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Social Media',
    'visibility' => '0',
  );

  $export['tagadelic-24'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => '24',
    'i18n_mode' => '1',
    'module' => 'tagadelic',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Tags in the blog',
    'visibility' => '0',
  );

  $export['tagadelic-31'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => '31',
    'i18n_mode' => '0',
    'module' => 'tagadelic',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Kategorien im Blog',
    'visibility' => '0',
  );

  return $export;
}
