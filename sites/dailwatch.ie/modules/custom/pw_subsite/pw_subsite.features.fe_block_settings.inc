<?php
/**
 * @file
 * pw_subsite.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_subsite_default_fe_block_settings() {
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
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => 'user_second',
        'status' => '1',
        'theme' => 'dailwatch',
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
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => 'postscript_fourth',
        'status' => '1',
        'theme' => 'dailwatch',
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

  $export['delta_blocks-breadcrumb'] = array(
    'cache' => 4,
    'custom' => '0',
    'delta' => 'breadcrumb',
    'i18n_mode' => '0',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dailwatch',
        'weight' => '-22',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['delta_blocks-messages'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'messages',
    'i18n_mode' => '0',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'dailwatch',
        'weight' => '-26',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'language',
    'i18n_mode' => '1',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => 'user_second',
        'status' => '1',
        'theme' => 'dailwatch',
        'weight' => '-26',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Language',
    'visibility' => '0',
  );

  $export['nice_menus-1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '1',
    'i18n_mode' => '0',
    'module' => 'nice_menus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => 'menu',
        'status' => '1',
        'theme' => 'dailwatch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['nice_menus-2'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '2',
    'i18n_mode' => '0',
    'module' => 'nice_menus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => 'menu',
        'status' => '1',
        'theme' => 'dailwatch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['print-print-links'] = array(
    'cache' => 4,
    'custom' => '0',
    'delta' => 'print-links',
    'i18n_mode' => '0',
    'module' => 'print',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dailwatch',
        'weight' => '-26',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'form',
    'i18n_mode' => '0',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '-1',
      ),
      'dailwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dailwatch',
        'weight' => '-26',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '-10',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'help',
    'i18n_mode' => '0',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'help',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => 'header_first',
        'status' => '1',
        'theme' => 'dailwatch',
        'weight' => '-22',
      ),
      'seven' => array(
        'region' => 'help',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'main',
    'i18n_mode' => '0',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'dailwatch',
        'weight' => '-25',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'navigation',
    'i18n_mode' => '0',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dailwatch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'powered-by',
    'i18n_mode' => '0',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '10',
      ),
      'dailwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dailwatch',
        'weight' => '10',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '10',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['text_resize-0'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => '0',
    'i18n_mode' => '1',
    'module' => 'text_resize',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => 'user_second',
        'status' => '1',
        'theme' => 'dailwatch',
        'weight' => '-26',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Text resize',
    'visibility' => '0',
  );

  $export['views--exp-profile_list_rev-page'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '-exp-profile_list_rev-page',
    'i18n_mode' => '0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dailwatch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-slider-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'slider-block',
    'i18n_mode' => '0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => 'header_second',
        'status' => '1',
        'theme' => 'dailwatch',
        'weight' => '-17',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  return $export;
}
