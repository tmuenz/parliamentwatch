<?php

/*
 * @file
 * Provides configurability to the PW API module.
 */

/**
 * Form builder. Configure PW API.
 *
 * @ingroup forms
 * @see system_settings_form().
 */
function pw_api_admin_settings() {
  $existing_assignment = variable_get('pw_api_allowed_ips', array());
  $existing_assignment[] = ""; // this is a new empty line for a new assignment
  sort($existing_assignment);
  
  $form = array();
  $count = 1;
  foreach ($existing_assignment as $key => $ip) {
    $assignment_title = "";
    if ($ip == "")
      $assignment_title = "Enter allowed IP here";
    $form['group'.$count] = array(
      '#type' => 'fieldset', 
      '#title' => t($assignment_title), 
      '#weight' => 5, 
      '#collapsible' => FALSE, 
      '#collapsed' => FALSE,
    );

    $form['group'.$count]['pw_api_ip'.$count] = array(
        '#type' => 'textfield',
        '#title' => t('Allowed IP'),
        '#default_value' => $ip,
    );

    $count++;
  }
  $form["comment"] = array(
      "#type" => "markup",
      "#markup" => t("IPs have to be entered in the form 123.123.123.123. Wildcards can be used for the last block, i. e. 123.123.123.*. In order to delete an assignment, please remove the IP."),
  );
  
  $form['#submit'][] = 'pw_api_admin_settings_submit';
  return system_settings_form($form);
}

/**
 * Process PW Profile settings submission.
 */
function pw_api_admin_settings_submit($form, $form_state) {
  $newAssignment = array();
  foreach ($form_state['groups'] as $group => $notUsed) {
    $groupId = str_replace("group", "", $group);
    $ip = $form_state["values"]["pw_api_ip".$groupId];
    if ($ip != "") {
      $newAssignment[] = $ip;
    }
  }
  variable_set('pw_api_allowed_ips', $newAssignment);
}
