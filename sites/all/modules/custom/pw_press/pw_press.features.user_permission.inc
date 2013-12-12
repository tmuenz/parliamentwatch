<?php
/**
 * @file
 * pw_press.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_press_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear press_articles feeds.
  $permissions['clear press_articles feeds'] = array(
    'name' => 'clear press_articles feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: clear press_release feeds.
  $permissions['clear press_release feeds'] = array(
    'name' => 'clear press_release feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: create press_article content.
  $permissions['create press_article content'] = array(
    'name' => 'create press_article content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: create press_release content.
  $permissions['create press_release content'] = array(
    'name' => 'create press_release content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any press_article content.
  $permissions['delete any press_article content'] = array(
    'name' => 'delete any press_article content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any press_release content.
  $permissions['delete any press_release content'] = array(
    'name' => 'delete any press_release content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own press_article content.
  $permissions['delete own press_article content'] = array(
    'name' => 'delete own press_article content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own press_release content.
  $permissions['delete own press_release content'] = array(
    'name' => 'delete own press_release content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: ds_switch press_article.
  $permissions['ds_switch press_article'] = array(
    'name' => 'ds_switch press_article',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: ds_switch press_release.
  $permissions['ds_switch press_release'] = array(
    'name' => 'ds_switch press_release',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: edit any press_article content.
  $permissions['edit any press_article content'] = array(
    'name' => 'edit any press_article content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any press_release content.
  $permissions['edit any press_release content'] = array(
    'name' => 'edit any press_release content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own press_article content.
  $permissions['edit own press_article content'] = array(
    'name' => 'edit own press_article content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own press_release content.
  $permissions['edit own press_release content'] = array(
    'name' => 'edit own press_release content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: import press_articles feeds.
  $permissions['import press_articles feeds'] = array(
    'name' => 'import press_articles feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: import press_release feeds.
  $permissions['import press_release feeds'] = array(
    'name' => 'import press_release feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: moderate spam in nodes of type Press release.
  $permissions['moderate spam in nodes of type Press release'] = array(
    'name' => 'moderate spam in nodes of type Press release',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'antispam',
  );

  // Exported permission: moderate spam in nodes of type Presseartikel.
  $permissions['moderate spam in nodes of type Presseartikel'] = array(
    'name' => 'moderate spam in nodes of type Presseartikel',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'antispam',
  );

  // Exported permission: unlock press_articles feeds.
  $permissions['unlock press_articles feeds'] = array(
    'name' => 'unlock press_articles feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: unlock press_release feeds.
  $permissions['unlock press_release feeds'] = array(
    'name' => 'unlock press_release feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
