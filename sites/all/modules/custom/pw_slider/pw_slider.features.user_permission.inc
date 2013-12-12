<?php
/**
 * @file
 * pw_slider.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_slider_user_default_permissions() {
  $permissions = array();

  // Exported permission: create pw_slider content.
  $permissions['create pw_slider content'] = array(
    'name' => 'create pw_slider content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any pw_slider content.
  $permissions['delete any pw_slider content'] = array(
    'name' => 'delete any pw_slider content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own pw_slider content.
  $permissions['delete own pw_slider content'] = array(
    'name' => 'delete own pw_slider content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: ds_switch pw_slider.
  $permissions['ds_switch pw_slider'] = array(
    'name' => 'ds_switch pw_slider',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: edit any pw_slider content.
  $permissions['edit any pw_slider content'] = array(
    'name' => 'edit any pw_slider content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own pw_slider content.
  $permissions['edit own pw_slider content'] = array(
    'name' => 'edit own pw_slider content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: moderate spam in nodes of type Slider item.
  $permissions['moderate spam in nodes of type Slider item'] = array(
    'name' => 'moderate spam in nodes of type Slider item',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'antispam',
  );

  return $permissions;
}
