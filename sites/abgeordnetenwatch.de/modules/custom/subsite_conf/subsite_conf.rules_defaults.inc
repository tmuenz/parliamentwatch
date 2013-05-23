<?php
/**
 * @file
 * subsite_conf.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function subsite_conf_default_rules_configuration() {
  $items = array();
  $items['rules_blog_comment_notification'] = entity_import('rules_config', '{ "rules_blog_comment_notification" : {
      "LABEL" : "Blog comment notification",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "blog" ],
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : [ "comment_insert" ],
      "DO" : [
        { "mail" : {
            "to" : "info@abgeordnetenwatch.de",
            "subject" : "[site:name]: Blog Kommentar:  \\u0022[comment:node]\\u0022",
            "message" : "Autor: [comment:name] (IP: [comment:hostname])\\r\\nE-Mail: [comment:mail]\\r\\nURL: [comment:url]\\r\\nWhois: http:\\/\\/ws.arin.net\\/cgi-bin\\/whois.pl?queryinput=[comment:hostname]\\r\\n\\r\\nKommentar: \\r\\n[comment:body]\\r\\n\\r\\n------------------------------------------------------------------\\r\\nDu kannst alle Kommentare zu diesem Artikel hier sehen:\\r\\n[comment:node:url]\\/#comments\\r\\n\\r\\nDu kannst den Kommentar hier bearbeiten oder l\\u00f6schen:\\r\\n[comment:edit-url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
