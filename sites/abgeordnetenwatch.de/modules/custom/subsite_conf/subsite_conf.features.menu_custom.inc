<?php
/**
 * @file
 * subsite_conf.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function subsite_conf_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-about-us-de.
  $menus['menu-about-us-de'] = array(
    'menu_name' => 'menu-about-us-de',
    'title' => 'Über das Projekt',
    'description' => '',
  );
  // Exported menu: menu-elections-de.
  $menus['menu-elections-de'] = array(
    'menu_name' => 'menu-elections-de',
    'title' => 'Wahlen & Parlamente',
    'description' => '',
  );
  // Exported menu: menu-main-menu-de.
  $menus['menu-main-menu-de'] = array(
    'menu_name' => 'menu-main-menu-de',
    'title' => 'Main menu DE',
    'description' => '',
  );
  // Exported menu: menu-meta-de.
  $menus['menu-meta-de'] = array(
    'menu_name' => 'menu-meta-de',
    'title' => 'Meta DE',
    'description' => '',
  );
  // Exported menu: menu-support-us-de.
  $menus['menu-support-us-de'] = array(
    'menu_name' => 'menu-support-us-de',
    'title' => 'Projekt unterstützen',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu DE');
  t('Meta DE');
  t('Projekt unterstützen');
  t('Wahlen & Parlamente');
  t('Über das Projekt');


  return $menus;
}
