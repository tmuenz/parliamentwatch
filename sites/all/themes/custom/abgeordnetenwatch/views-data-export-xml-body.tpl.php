<?php
/**
 * @file views-view-table.tpl.php
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $rows: An array of row items. Each row is an array of content
 *   keyed by field ID.
 * - $header: an array of headers(labels) for fields.
 * - $themed_rows: a array of rows with themed fields.
 * @ingroup views_templates
 */
function correct_plural($input) {
  return str_replace("ys", "ies", $input); // golden tap ;-)))
}

?>
<?php foreach ($themed_rows as $count => $row): ?>
  <<?php print $item_node; ?>>
<?php foreach ($row as $field => $content): ?>
  <?php
    switch($content["type"]) {
      case "multiplefield_with_attributes":
        print '<'.correct_plural($xml_tag[$field].'s').'>';
        foreach ($content["content"] as $content_entry) {
          echo '<'.$xml_tag[$field].' '.$content_entry["attribute_name"].'="'.$content_entry["attribute_value"].'">'.$content_entry["value"].'</'.$xml_tag[$field].'>';
        }
        print '</'.correct_plural($xml_tag[$field].'s').'>';
        break;
      case "multiplefield_without_attributes":
        print '<'.correct_plural($xml_tag[$field].'s').'>';
        foreach ($content["content"] as $content_entry) {
          echo '<'.$xml_tag[$field].'>'.$content_entry.'</'.$xml_tag[$field].'>';
        }
        print '</'.correct_plural($xml_tag[$field].'s').'>';
        break;
      case "singlefield_with_attributes":
        echo '<'.$xml_tag[$field].' '.$content["content"]["attribute_name"].'="'.$content["content"]["attribute_value"].'">'.$content["content"]["value"].'</'.$xml_tag[$field].'>';
        break;
      case "singlefield_with_single_subfields":
        echo '<'.$xml_tag[$field].'>';
        foreach ($content["content"] as $content_entry) {
          echo '<'.$content_entry["name"].'>'.$content_entry["value"].'</'.$content_entry["name"].'>';
        }
        echo '</'.$xml_tag[$field].'>';
        break;
      case "singlefield_without_attributes":
      default:
        print '<'.$xml_tag[$field].'>'.$content["content"].'</'.$xml_tag[$field].'>';
        break;
    }
  ?>
  
<?php endforeach; ?>
  </<?php print $item_node; ?>>
<?php endforeach; ?>
