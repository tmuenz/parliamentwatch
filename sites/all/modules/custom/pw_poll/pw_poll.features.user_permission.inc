<?php
/**
 * @file
 * pw_poll.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_poll_user_default_permissions() {
  $permissions = array();

  // Exported permission: create pw_poll content.
  $permissions['create pw_poll content'] = array(
    'name' => 'create pw_poll content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any pw_poll content.
  $permissions['delete any pw_poll content'] = array(
    'name' => 'delete any pw_poll content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own pw_poll content.
  $permissions['delete own pw_poll content'] = array(
    'name' => 'delete own pw_poll content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: ds_switch pw_poll.
  $permissions['ds_switch pw_poll'] = array(
    'name' => 'ds_switch pw_poll',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: edit any pw_poll content.
  $permissions['edit any pw_poll content'] = array(
    'name' => 'edit any pw_poll content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own pw_poll content.
  $permissions['edit own pw_poll content'] = array(
    'name' => 'edit own pw_poll content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: moderate spam in nodes of type PW Poll.
  $permissions['moderate spam in nodes of type PW Poll'] = array(
    'name' => 'moderate spam in nodes of type PW Poll',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'antispam',
  );

  return $permissions;
}
