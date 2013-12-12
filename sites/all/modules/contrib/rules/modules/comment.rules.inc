<?php

/**
 * @file rules integration for the comment module
 *
 * @addtogroup rules
 * @{
 */

/**
  * Implements hook_rules_file_info() on behalf of the comment module.
  */
function rules_comment_file_info() {
  return array('modules/comment.eval');
}

/**
 * Implementation of hook_rules_event_info().
 */
function rules_comment_event_info() {
  $defaults = array(
    'group' => t('comment'),
    'module' => 'comment',
    'access callback' => 'rules_comment_integration_access',
  );
  return array(
    'comment_insert' => $defaults + array(
      'label' => t('After saving a new comment'),
      'variables' => array(
        'comment' => array('type' => 'comment', 'label' => t('created comment')),
      ),
    ),
    'comment_update' => $defaults + array(
      'label' => t('After updating an existing comment'),
      'variables' => array(
        'comment' => array('type' => 'comment', 'label' => t('updated comment')),
        'comment_unchanged' => array('type' => 'comment', 'label' => t('unchanged comment'), 'handler' => 'rules_events_entity_unchanged'),
      ),
    ),
    'comment_presave' => $defaults + array(
      'label' => t('Before saving a comment'),
      'variables' => array(
        'comment' => array('type' => 'comment', 'label' => t('saved comment'), 'skip save' => TRUE),
        'comment_unchanged' => array('type' => 'comment', 'label' => t('unchanged comment'), 'handler' => 'rules_events_entity_unchanged'),
      ),
    ),
    'comment_view' => $defaults + array(
      'label' => t('A comment is viewed'),
      'variables' => array(
        'comment' => array('type' => 'comment', 'label' => t('viewed comment')),
      ),
      'help' => t("Note that if drupal's page cache is enabled, this event won't be generated for pages served from cache."),
    ),
    'comment_delete' => $defaults + array(
      'label' => t('After deleting a comment'),
      'variables' => array(
        'comment' => array('type' => 'comment', 'label' => t('deleted comment')),
      ),
    ),
    'comment_approve' => $defaults + array(
      'label' => t('After approving a new comment'),
      'variables' => array(
        'comment' => array('type' => 'comment', 'label' => t('approve comment')),
      ),
    ),
  );
}

/**
 * Implements hook_rules_condition_info() on behalf of the comment module.
 */
function rules_comment_condition_info() {
  $defaults = array(
    'parameter' => array(
      'node' => array('type' => 'comment', 'label' => t('Comment')),
    ),
    'group' => t('Comment'),
    'access callback' => 'rules_comment_integration_access',
  );
  $items['comment_is_published'] = $defaults + array(
    'label' => t('Comment is published'),
    'base' => 'rules_condition_comment_is_published',
  );
  return $items;
}

/**
 * Implements hook_rules_action_info() on behalf of the comment module.
 */
function rules_comment_action_info() {
  $defaults = array(
    'parameter' => array(
      'node' => array('type' => 'comment', 'label' => t('Comment'), 'save' => TRUE),
    ),
    'group' => t('Comment'),
    'access callback' => 'rules_comment_admin_access',
  );
  // Add support for hand-picked core actions.
  $core_actions = comment_action_info();
  $actions = array(
    'comment_publish_action',
    'comment_unpublish_action',
  );
  foreach ($actions as $base) {
    $action_name = str_replace('_action', '', $base);
    $items[$action_name] = $defaults + array(
      'label' => $core_actions[$base]['label'],
      'base' => $base,
    );
  }
  return $items;
}

/**
 * Comment integration access callback.
 */
function rules_comment_integration_access($type, $name) {
  if ($type == 'event' || $type == 'condition') {
    return entity_access('view', 'comment');
  }
}

/**
 * Comment integration admin access callback.
 */
function rules_comment_admin_access() {
  return user_access('administer comments');
}

/**
 * @}
 */
