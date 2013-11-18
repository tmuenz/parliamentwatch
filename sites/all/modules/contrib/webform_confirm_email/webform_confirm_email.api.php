<?php
/**
 * @file
 *
 * @author    Matthias Weiss <matthias@more-onion.com>
 * @copyright Copyright (c) 2013 copyright
 */


/**
 * React on an email that was confirmed when the user clicked
 * the confirmation link
 *
 * @param $node
 *   The node object of the webform for which an email was confirmed
 *
 * @param $submission
 *   The submission object of the webform submission where the user
 *   just confirmed his/her email address
 */
function hook_email_confirmed($node, $submission) {
  db_query(
    'INSERT INTO {my_confirmed_submission_list} ' .
    '  VALUES (:nid, :sid) ',
    array(':nid' => $node->nid, ':sid' => $submission->sid)
  );
}

/**
 * React on an email confirmation request that has expired according
 * to the maximum request lifetime that the admin had set
 *
 * @param $expired_submissions
 *   An associative array of submissions that have expired. It's indexed
 *   by nid's (node ID's), it's values are subarrays containing the sid's
 *   (webform submission ID's) that have expired for this nid
 */
function hook_confirmation_request_expired($expired_submissions) {
  // delete the webform submissions where the confirmation request
  // have expired
  module_load_include('inc', 'webform', 'includes/webform.submissions');

  foreach ($expired_submissions as $nid => $sids) {
    $node = node_load((int) $nid);
    foreach ($sids as $sid) {
      webform_submission_delete($node, webform_get_submission((int) $nid, (int) $sid));
    }
  }
}
