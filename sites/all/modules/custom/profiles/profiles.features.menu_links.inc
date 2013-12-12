<?php
/**
 * @file
 * profiles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function profiles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-calendar-options-menu:node/add/calendar-entry
  $menu_links['menu-calendar-options-menu:node/add/calendar-entry'] = array(
    'menu_name' => 'menu-calendar-options-menu',
    'link_path' => 'node/add/calendar-entry',
    'router_path' => 'node/add/calendar-entry',
    'link_title' => '+ Add Calendar Entry',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('+ Add Calendar Entry');


  return $menu_links;
}
