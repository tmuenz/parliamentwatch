<?php
/**
 * @file
 * pw_election_programmes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_election_programmes_user_default_permissions() {
  $permissions = array();

  // Exported permission: create election_programme content.
  $permissions['create election_programme content'] = array(
    'name' => 'create election_programme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any election_programme content.
  $permissions['delete any election_programme content'] = array(
    'name' => 'delete any election_programme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own election_programme content.
  $permissions['delete own election_programme content'] = array(
    'name' => 'delete own election_programme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: ds_switch election_programme.
  $permissions['ds_switch election_programme'] = array(
    'name' => 'ds_switch election_programme',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: edit any election_programme content.
  $permissions['edit any election_programme content'] = array(
    'name' => 'edit any election_programme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own election_programme content.
  $permissions['edit own election_programme content'] = array(
    'name' => 'edit own election_programme content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
