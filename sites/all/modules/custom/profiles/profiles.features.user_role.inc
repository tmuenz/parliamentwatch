<?php
/**
 * @file
 * profiles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function profiles_user_default_roles() {
  $roles = array();

  // Exported role: Candidate.
  $roles['Candidate'] = array(
    'name' => 'Candidate',
    'weight' => '6',
    'machine_name' => 'candidate',
  );

  // Exported role: Deputy.
  $roles['Deputy'] = array(
    'name' => 'Deputy',
    'weight' => '5',
    'machine_name' => 'deputy',
  );

  // Exported role: Premium User.
  $roles['Premium User'] = array(
    'name' => 'Premium User',
    'weight' => '7',
    'machine_name' => 'user_premium',
  );

  return $roles;
}
