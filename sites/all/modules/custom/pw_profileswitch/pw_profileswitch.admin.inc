<?php

/*
 * @file
 * Provides configurability to the PW Profiles module.
 */

/**
 * Form builder. Configure PW Profiles.
 *
 * @ingroup forms
 * @see system_settings_form().
 */
function pw_profileswitch_admin_settings() {
  $existing_assignment = variable_get('pw_profileswitch_assignment', array());
  $existing_assignment[""] = ""; // this is a new empty line for a new assignment
  
  // obtain available view modes:
  $view_modes_raw = ds_entity_view_modes("user");
  $display_mode_choice = array();
  foreach ($view_modes_raw as $view_mode_raw_id => $view_mode_raw_arr) {
    $display_mode_choice[$view_mode_raw_id] = $view_mode_raw_arr["label"]." (".$view_mode_raw_id.")";
  }
  //obtain available user roles from the taxonomy field_user_roles_for_view_mode_switch:
  $vocabulary = taxonomy_vocabulary_machine_name_load('pw_profile_roles_for_view_mode_switch');
  $terms = taxonomy_get_tree($vocabulary->vid);
  $roleArray = array();
  foreach($terms as $term) {
      $roleArray[$term->tid] = $term->name;
  }
  
  $form = array();
  $count = 1;
  foreach ($existing_assignment as $rid => $did) {
    $assignment_title = $count;
    if ($rid == "")
      $assignment_title = "new";
    $form['group'.$count] = array(
      '#type' => 'fieldset', 
      '#title' => t('Assignment '.$assignment_title), 
      '#weight' => 5, 
      '#collapsible' => FALSE, 
      '#collapsed' => FALSE,
    );

    $form['group'.$count]['pw_profileswitch_role'.$count] = array(
        '#type' => 'select',
        '#title' => t('Role'),
        '#options' => $roleArray, //user_roles(),
        '#default_value' => $rid,
        "#empty_option"=>t('- Select -'),
    );

    $form['group'.$count]['pw_profileswitch_display_mode'.$count] = array(
        '#type' => 'select',
        '#title' => t('Display Mode'),
        '#options' => $display_mode_choice,
        '#default_value' => $did,
        "#empty_option"=>t('- Select -'),
    );
    $count++;
  }
  $form["comment"] = array(
      "#type" => "markup",
      "#markup" => t("In order to delete an assignment, please select the first \"-Select-\" entries for both, the role and the display mode."),
  );
  
  $form['#submit'][] = 'pw_profileswitch_admin_settings_submit';
  return system_settings_form($form);
}

/**
 * Process PW Profile settings submission.
 */
function pw_profileswitch_admin_settings_submit($form, $form_state) {
  $newAssignment = array();
  foreach ($form_state['groups'] as $group => $notUsed) {
    $groupId = str_replace("group", "", $group);
    $rid = $form_state["values"]["pw_profileswitch_role".$groupId];
    $did = $form_state["values"]["pw_profileswitch_display_mode".$groupId];
    if ($did != "" && $rid != "") {
      $newAssignment[$rid] = $did;
    }
  }
  variable_set('pw_profileswitch_assignment', $newAssignment);
}
