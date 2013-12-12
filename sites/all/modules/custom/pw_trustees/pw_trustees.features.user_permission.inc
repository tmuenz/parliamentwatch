<?php
/**
 * @file
 * pw_trustees.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_trustees_user_default_permissions() {
  $permissions = array();

  // Exported permission: create trustee content.
  $permissions['create trustee content'] = array(
    'name' => 'create trustee content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any trustee content.
  $permissions['delete any trustee content'] = array(
    'name' => 'delete any trustee content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own trustee content.
  $permissions['delete own trustee content'] = array(
    'name' => 'delete own trustee content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: ds_switch trustee.
  $permissions['ds_switch trustee'] = array(
    'name' => 'ds_switch trustee',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: edit any trustee content.
  $permissions['edit any trustee content'] = array(
    'name' => 'edit any trustee content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own trustee content.
  $permissions['edit own trustee content'] = array(
    'name' => 'edit own trustee content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: moderate spam in nodes of type Trustee.
  $permissions['moderate spam in nodes of type Trustee'] = array(
    'name' => 'moderate spam in nodes of type Trustee',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'antispam',
  );

  return $permissions;
}
