<?php
/**
 * @file
 * pw_subsite.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function pw_subsite_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-parliaments
  $menus['menu-parliaments'] = array(
    'menu_name' => 'menu-parliaments',
    'title' => 'Parliaments',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Parliaments');


  return $menus;
}
