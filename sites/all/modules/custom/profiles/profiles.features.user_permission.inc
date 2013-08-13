<?php
/**
 * @file
 * profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: create field_user_about.
  $permissions['create field_user_about'] = array(
    'name' => 'create field_user_about',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_address.
  $permissions['create field_user_address'] = array(
    'name' => 'create field_user_address',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_answers_give.
  $permissions['create field_user_answers_give'] = array(
    'name' => 'create field_user_answers_give',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_childs.
  $permissions['create field_user_childs'] = array(
    'name' => 'create field_user_childs',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_commitee.
  $permissions['create field_user_commitee'] = array(
    'name' => 'create field_user_commitee',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_gender.
  $permissions['create field_user_gender'] = array(
    'name' => 'create field_user_gender',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_image_gallery.
  $permissions['create field_user_image_gallery'] = array(
    'name' => 'create field_user_image_gallery',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_job_skills.
  $permissions['create field_user_job_skills'] = array(
    'name' => 'create field_user_job_skills',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_list_position.
  $permissions['create field_user_list_position'] = array(
    'name' => 'create field_user_list_position',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_marriage_status.
  $permissions['create field_user_marriage_status'] = array(
    'name' => 'create field_user_marriage_status',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_more.
  $permissions['create field_user_more'] = array(
    'name' => 'create field_user_more',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_parliament.
  $permissions['create field_user_parliament'] = array(
    'name' => 'create field_user_parliament',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_picture.
  $permissions['create field_user_picture'] = array(
    'name' => 'create field_user_picture',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_picture_copyright.
  $permissions['create field_user_picture_copyright'] = array(
    'name' => 'create field_user_picture_copyright',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_political_goals.
  $permissions['create field_user_political_goals'] = array(
    'name' => 'create field_user_political_goals',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_political_roles.
  $permissions['create field_user_political_roles'] = array(
    'name' => 'create field_user_political_roles',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_pseudonym.
  $permissions['create field_user_pseudonym'] = array(
    'name' => 'create field_user_pseudonym',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_questions_get.
  $permissions['create field_user_questions_get'] = array(
    'name' => 'create field_user_questions_get',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_twitter_account.
  $permissions['create field_user_twitter_account'] = array(
    'name' => 'create field_user_twitter_account',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create files.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      0 => 'Premium User',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete own files.
  $permissions['delete own files'] = array(
    'name' => 'delete own files',
    'roles' => array(
      0 => 'Premium User',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit any files.
  $permissions['edit any files'] = array(
    'name' => 'edit any files',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit field_user_about.
  $permissions['edit field_user_about'] = array(
    'name' => 'edit field_user_about',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_address.
  $permissions['edit field_user_address'] = array(
    'name' => 'edit field_user_address',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_answers_give.
  $permissions['edit field_user_answers_give'] = array(
    'name' => 'edit field_user_answers_give',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_childs.
  $permissions['edit field_user_childs'] = array(
    'name' => 'edit field_user_childs',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_commitee.
  $permissions['edit field_user_commitee'] = array(
    'name' => 'edit field_user_commitee',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_gender.
  $permissions['edit field_user_gender'] = array(
    'name' => 'edit field_user_gender',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_image_gallery.
  $permissions['edit field_user_image_gallery'] = array(
    'name' => 'edit field_user_image_gallery',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_job_skills.
  $permissions['edit field_user_job_skills'] = array(
    'name' => 'edit field_user_job_skills',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_list_position.
  $permissions['edit field_user_list_position'] = array(
    'name' => 'edit field_user_list_position',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_marriage_status.
  $permissions['edit field_user_marriage_status'] = array(
    'name' => 'edit field_user_marriage_status',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_more.
  $permissions['edit field_user_more'] = array(
    'name' => 'edit field_user_more',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_parliament.
  $permissions['edit field_user_parliament'] = array(
    'name' => 'edit field_user_parliament',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_picture.
  $permissions['edit field_user_picture'] = array(
    'name' => 'edit field_user_picture',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_political_goals.
  $permissions['edit field_user_political_goals'] = array(
    'name' => 'edit field_user_political_goals',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_political_roles.
  $permissions['edit field_user_political_roles'] = array(
    'name' => 'edit field_user_political_roles',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_pseudonym.
  $permissions['edit field_user_pseudonym'] = array(
    'name' => 'edit field_user_pseudonym',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_questions_get.
  $permissions['edit field_user_questions_get'] = array(
    'name' => 'edit field_user_questions_get',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_twitter_account.
  $permissions['edit field_user_twitter_account'] = array(
    'name' => 'edit field_user_twitter_account',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_about.
  $permissions['edit own field_user_about'] = array(
    'name' => 'edit own field_user_about',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_address.
  $permissions['edit own field_user_address'] = array(
    'name' => 'edit own field_user_address',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_answers_give.
  $permissions['edit own field_user_answers_give'] = array(
    'name' => 'edit own field_user_answers_give',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_childs.
  $permissions['edit own field_user_childs'] = array(
    'name' => 'edit own field_user_childs',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_commitee.
  $permissions['edit own field_user_commitee'] = array(
    'name' => 'edit own field_user_commitee',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_gender.
  $permissions['edit own field_user_gender'] = array(
    'name' => 'edit own field_user_gender',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_image_gallery.
  $permissions['edit own field_user_image_gallery'] = array(
    'name' => 'edit own field_user_image_gallery',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_job_skills.
  $permissions['edit own field_user_job_skills'] = array(
    'name' => 'edit own field_user_job_skills',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_list_position.
  $permissions['edit own field_user_list_position'] = array(
    'name' => 'edit own field_user_list_position',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_marriage_status.
  $permissions['edit own field_user_marriage_status'] = array(
    'name' => 'edit own field_user_marriage_status',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_more.
  $permissions['edit own field_user_more'] = array(
    'name' => 'edit own field_user_more',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_parliament.
  $permissions['edit own field_user_parliament'] = array(
    'name' => 'edit own field_user_parliament',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_picture.
  $permissions['edit own field_user_picture'] = array(
    'name' => 'edit own field_user_picture',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_picture_copyright.
  $permissions['edit own field_user_picture_copyright'] = array(
    'name' => 'edit own field_user_picture_copyright',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_political_goals.
  $permissions['edit own field_user_political_goals'] = array(
    'name' => 'edit own field_user_political_goals',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_political_roles.
  $permissions['edit own field_user_political_roles'] = array(
    'name' => 'edit own field_user_political_roles',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_pseudonym.
  $permissions['edit own field_user_pseudonym'] = array(
    'name' => 'edit own field_user_pseudonym',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_questions_get.
  $permissions['edit own field_user_questions_get'] = array(
    'name' => 'edit own field_user_questions_get',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_twitter_account.
  $permissions['edit own field_user_twitter_account'] = array(
    'name' => 'edit own field_user_twitter_account',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own files.
  $permissions['edit own files'] = array(
    'name' => 'edit own files',
    'roles' => array(
      0 => 'Premium User',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format managed_content.
  $permissions['use text format managed_content'] = array(
    'name' => 'use text format managed_content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: view field_user_about.
  $permissions['view field_user_about'] = array(
    'name' => 'view field_user_about',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_address.
  $permissions['view field_user_address'] = array(
    'name' => 'view field_user_address',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_answers_give.
  $permissions['view field_user_answers_give'] = array(
    'name' => 'view field_user_answers_give',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_childs.
  $permissions['view field_user_childs'] = array(
    'name' => 'view field_user_childs',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_commitee.
  $permissions['view field_user_commitee'] = array(
    'name' => 'view field_user_commitee',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_gender.
  $permissions['view field_user_gender'] = array(
    'name' => 'view field_user_gender',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_image_gallery.
  $permissions['view field_user_image_gallery'] = array(
    'name' => 'view field_user_image_gallery',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_job_skills.
  $permissions['view field_user_job_skills'] = array(
    'name' => 'view field_user_job_skills',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_list_position.
  $permissions['view field_user_list_position'] = array(
    'name' => 'view field_user_list_position',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_marriage_status.
  $permissions['view field_user_marriage_status'] = array(
    'name' => 'view field_user_marriage_status',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_more.
  $permissions['view field_user_more'] = array(
    'name' => 'view field_user_more',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_parliament.
  $permissions['view field_user_parliament'] = array(
    'name' => 'view field_user_parliament',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_picture.
  $permissions['view field_user_picture'] = array(
    'name' => 'view field_user_picture',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_picture_copyright.
  $permissions['view field_user_picture_copyright'] = array(
    'name' => 'view field_user_picture_copyright',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_political_goals.
  $permissions['view field_user_political_goals'] = array(
    'name' => 'view field_user_political_goals',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_political_roles.
  $permissions['view field_user_political_roles'] = array(
    'name' => 'view field_user_political_roles',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_pseudonym.
  $permissions['view field_user_pseudonym'] = array(
    'name' => 'view field_user_pseudonym',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_questions_get.
  $permissions['view field_user_questions_get'] = array(
    'name' => 'view field_user_questions_get',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Deputy',
      2 => 'Politician',
      3 => 'Premium User',
      4 => 'administrator',
      5 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_twitter_account.
  $permissions['view field_user_twitter_account'] = array(
    'name' => 'view field_user_twitter_account',
    'roles' => array(
      0 => 'Candidate',
      1 => 'Content Manager',
      2 => 'Deputy',
      3 => 'Politician',
      4 => 'Premium User',
      5 => 'administrator',
      6 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view files.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own field_user_about.
  $permissions['view own field_user_about'] = array(
    'name' => 'view own field_user_about',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_address.
  $permissions['view own field_user_address'] = array(
    'name' => 'view own field_user_address',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_answers_give.
  $permissions['view own field_user_answers_give'] = array(
    'name' => 'view own field_user_answers_give',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_childs.
  $permissions['view own field_user_childs'] = array(
    'name' => 'view own field_user_childs',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_commitee.
  $permissions['view own field_user_commitee'] = array(
    'name' => 'view own field_user_commitee',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_gender.
  $permissions['view own field_user_gender'] = array(
    'name' => 'view own field_user_gender',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_image_gallery.
  $permissions['view own field_user_image_gallery'] = array(
    'name' => 'view own field_user_image_gallery',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_job_skills.
  $permissions['view own field_user_job_skills'] = array(
    'name' => 'view own field_user_job_skills',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_list_position.
  $permissions['view own field_user_list_position'] = array(
    'name' => 'view own field_user_list_position',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_marriage_status.
  $permissions['view own field_user_marriage_status'] = array(
    'name' => 'view own field_user_marriage_status',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_more.
  $permissions['view own field_user_more'] = array(
    'name' => 'view own field_user_more',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_parliament.
  $permissions['view own field_user_parliament'] = array(
    'name' => 'view own field_user_parliament',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_picture.
  $permissions['view own field_user_picture'] = array(
    'name' => 'view own field_user_picture',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_picture_copyright.
  $permissions['view own field_user_picture_copyright'] = array(
    'name' => 'view own field_user_picture_copyright',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_political_goals.
  $permissions['view own field_user_political_goals'] = array(
    'name' => 'view own field_user_political_goals',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_political_roles.
  $permissions['view own field_user_political_roles'] = array(
    'name' => 'view own field_user_political_roles',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_pseudonym.
  $permissions['view own field_user_pseudonym'] = array(
    'name' => 'view own field_user_pseudonym',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_questions_get.
  $permissions['view own field_user_questions_get'] = array(
    'name' => 'view own field_user_questions_get',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_twitter_account.
  $permissions['view own field_user_twitter_account'] = array(
    'name' => 'view own field_user_twitter_account',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Premium User',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own files.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      0 => 'Premium User',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own private files.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      0 => 'Premium User',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
