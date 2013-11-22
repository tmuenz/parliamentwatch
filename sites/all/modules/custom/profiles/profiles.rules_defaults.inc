<?php
/**
 * @file
 * profiles.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function profiles_default_rules_configuration() {
  $items = array();
  $items['rules_submitting_question'] = entity_import('rules_config', '{ "rules_submitting_question" : {
      "LABEL" : "Submitting Question",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "REQUIRES" : [ "webform_rules", "php", "rules" ],
      "ON" : [ "webform_rules_submit" ],
      "IF" : [
        { "webform_has_id" : {
            "form_id" : "webform-client-form-3",
            "selected_webform" : { "value" : { "webform-client-form-3" : "webform-client-form-3" } }
          }
        }
      ],
      "DO" : [
        { "php_eval" : { "code" : "extract($_POST[\\u0027submitted\\u0027]);\\r\\n$url = \\u0027http:\\/\\/mod.parliamentwatch.org\\/dailwatch\\/api\\/message\\u0027;\\r\\n# $recipient_user_name = str_replace(\\u0027-\\u0027, \\u0027_\\u0027, $recipient);\\r\\n# $recipient_user = user_load_by_name($recipient_user_name);\\r\\n\\r\\n$recipient_user = user_load_by_name($recipient);\\r\\n\\r\\n# dpm($recipient_user);\\r\\n\\r\\n$term_topic_id = preg_replace(\\u0027\\/\\\\D\\/\\u0027, \\u0027\\u0027, $topic);\\r\\n$term_topic = taxonomy_term_load($term_topic_id);\\r\\n\\r\\nif(!isset($sender_first_name)) {\\r\\n    $sender_first_name = \\u0027\\u0027;\\r\\n}\\r\\nif(!isset($sender_last_name)) {\\r\\n    $sender_last_name = \\u0027\\u0027;\\r\\n}\\r\\nif(!isset($sender_pseudonym)) {\\r\\n    $sender_pseudonym = \\u0027\\u0027;\\r\\n}\\r\\n\\r\\n$data = array(\\r\\n        \\u0027type\\u0027 =\\u003E \\u0027question\\u0027,\\r\\n        \\u0027recipient_id_e\\u0027 =\\u003E \\u0027True\\u0027,\\r\\n        \\u0027recipient_id\\u0027 =\\u003E $recipient_user-\\u003Euuid,\\r\\n        \\u0027text\\u0027 =\\u003E $question_text,\\r\\n        \\u0027topic\\u0027 =\\u003E $term_topic-\\u003Ename,\\r\\n        \\u0027sender_first_name\\u0027 =\\u003E$sender_first_name,\\r\\n        \\u0027sender_last_name\\u0027 =\\u003E $sender_last_name,\\r\\n        \\u0027sender_pseudonym\\u0027 =\\u003E $sender_pseudonym,\\r\\n        \\u0027sender_email\\u0027 =\\u003E $sender_email,\\r\\n        \\u0027sender_city\\u0027 =\\u003E $sender_city,\\r\\n        \\u0027sender_ip\\u0027 =\\u003E $_SERVER[\\u0027REMOTE_ADDR\\u0027],\\r\\n);\\r\\n\\r\\n# dpm($data);\\r\\n\\r\\n$ch = curl_init();\\r\\ncurl_setopt($ch, CURLOPT_URL, $url);\\r\\ncurl_setopt($ch, CURLOPT_HTTPHEADER, array(\\u0022Accept: application\\/json\\u0022));\\r\\ncurl_setopt($ch, CURLOPT_FOLLOWLOCATION, 1);\\r\\ncurl_setopt($ch, CURLOPT_RETURNTRANSFER, 1); \\/\\/to get response\\r\\ncurl_setopt($ch, CURLOPT_CUSTOMREQUEST, \\u0022POST\\u0022);\\r\\ncurl_setopt($ch, CURLOPT_POST, 1);\\r\\ncurl_setopt($ch, CURLOPT_POSTFIELDS, $data);\\r\\n\\r\\n$response = curl_exec($ch);\\r\\ncurl_close($ch);\\r\\n$responses = json_decode($response);\\r\\n\\r\\nif (is_object($responses)) {\\r\\n    $errors = \\u0027\\u0027;\\r\\n    foreach($responses-\\u003Eerrors as $error) {\\r\\n        $errors .=\\u0027\\u003Cli\\u003E\\u0027.$error-\\u003Emsg.\\u0027\\u003C\\/li\\u003E\\u0027;\\r\\n    }\\r\\n}\\r\\nif ($errors != \\u0027\\u0027){\\r\\n    drupal_set_message($errors,\\u0027error\\u0027);\\r\\n}\\r\\nelse{\\r\\n    drupal_set_message(t(\\u0027Thank you! Your question has been submitted!\\u0027));\\r\\n}\\r\\n# drupal_goto(\\u0027users\\/\\u0027.$recipient);" } }
      ]
    }
  }');
  return $items;
}
