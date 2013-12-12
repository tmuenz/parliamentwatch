<?php

/**
* @file
* Contains rules integration for the comment module needed during evaluation.
*
* @addtogroup rules
* @{
*/

/**
 * Condition: Check if the comment is published
 */

function rules_condition_comment_is_published($comment) {
  return $comment->status == 1;
}

/**
 * @}
 */
