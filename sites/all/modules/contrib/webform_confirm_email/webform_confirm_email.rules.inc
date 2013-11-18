<?php
/**
 * @file
 *
 * @author    Matthias Weiss <matthias@more-onion.com>
 * @copyright Copyright (c) 2013 copyright
 */

/**
 * Implements hook_rules_event_info().
 *
 * Define a rule event when an email was confirmed
 */
function webform_confirm_email_rules_event_info() {

  return array(
    'email_confirmed' => array(
      'label'     => t('A webform email address was confirmed.'),
      'group'     => t('Webform'),
      'module'    => 'webform_confirm_email',
      'variables' => array(
        'node' => array(
          'label'       => t('Drupal node object'),
          'type'        => 'node',
          'description' => t('Node object of the webform for which an email was confirmed.'),
        ),
        'submission' => array(
          'label'       => t('Webform submission object'),
          'type'        => 'submission',
          'description' => t('Webform submission object for which an email was confirmed.'),
        )
      ),
    ),
  );
}
