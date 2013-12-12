<?php
/**
 * @file
 * dialogues.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dialogues_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear dialogue_importer feeds.
  $permissions['clear dialogue_importer feeds'] = array(
    'name' => 'clear dialogue_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: clear dialogue_message_importer feeds.
  $permissions['clear dialogue_message_importer feeds'] = array(
    'name' => 'clear dialogue_message_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: create dialogue content.
  $permissions['create dialogue content'] = array(
    'name' => 'create dialogue content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any dialogue content.
  $permissions['delete any dialogue content'] = array(
    'name' => 'delete any dialogue content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own dialogue content.
  $permissions['delete own dialogue content'] = array(
    'name' => 'delete own dialogue content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 25.
  $permissions['delete terms in 25'] = array(
    'name' => 'delete terms in 25',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 26.
  $permissions['delete terms in 26'] = array(
    'name' => 'delete terms in 26',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: ds_switch dialogue.
  $permissions['ds_switch dialogue'] = array(
    'name' => 'ds_switch dialogue',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: edit any dialogue content.
  $permissions['edit any dialogue content'] = array(
    'name' => 'edit any dialogue content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own dialogue content.
  $permissions['edit own dialogue content'] = array(
    'name' => 'edit own dialogue content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 25.
  $permissions['edit terms in 25'] = array(
    'name' => 'edit terms in 25',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 26.
  $permissions['edit terms in 26'] = array(
    'name' => 'edit terms in 26',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: import dialogue_importer feeds.
  $permissions['import dialogue_importer feeds'] = array(
    'name' => 'import dialogue_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: import dialogue_message_importer feeds.
  $permissions['import dialogue_message_importer feeds'] = array(
    'name' => 'import dialogue_message_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: moderate spam in nodes of type Dialogue.
  $permissions['moderate spam in nodes of type Dialogue'] = array(
    'name' => 'moderate spam in nodes of type Dialogue',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'antispam',
  );

  // Exported permission: unlock dialogue_importer feeds.
  $permissions['unlock dialogue_importer feeds'] = array(
    'name' => 'unlock dialogue_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: unlock dialogue_message_importer feeds.
  $permissions['unlock dialogue_message_importer feeds'] = array(
    'name' => 'unlock dialogue_message_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
