<?php
/**
 * @file
 * pw_petitions.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pw_petitions_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Petitions description';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'petitions_description';
  $fe_block_boxes->body = '<p>
	Wenn wir Bürgerinnen und Bürger uns gemeinsam und lautstark zu Wort melden, wird das von unseren Abgeordneten gehört werden!
</p>
<p>
	Mit Ihrer Unterschrift können Sie den Petitionen Gehör verschaffen und zu ihrem Erfolg beitragen. Sind Sie dabei?
</p>
';

  $export['petitions_description'] = $fe_block_boxes;

  return $export;
}
