<?php
/**
 * @file
 * pw_petitions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_petitions_user_default_permissions() {
  $permissions = array();

  // Exported permission: create pw_petition content.
  $permissions['create pw_petition content'] = array(
    'name' => 'create pw_petition content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any pw_petition content.
  $permissions['delete any pw_petition content'] = array(
    'name' => 'delete any pw_petition content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own pw_petition content.
  $permissions['delete own pw_petition content'] = array(
    'name' => 'delete own pw_petition content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any pw_petition content.
  $permissions['edit any pw_petition content'] = array(
    'name' => 'edit any pw_petition content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own pw_petition content.
  $permissions['edit own pw_petition content'] = array(
    'name' => 'edit own pw_petition content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: moderate spam in nodes of type Petition.
  $permissions['moderate spam in nodes of type Petition'] = array(
    'name' => 'moderate spam in nodes of type Petition',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'antispam',
  );

  return $permissions;
}
