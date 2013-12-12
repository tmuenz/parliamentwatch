<?php
/**
 * @file
 * pw_globals.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function pw_globals_user_default_roles() {
  $roles = array();

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => '3',
    'machine_name' => 'content_manager',
  );

  return $roles;
}
