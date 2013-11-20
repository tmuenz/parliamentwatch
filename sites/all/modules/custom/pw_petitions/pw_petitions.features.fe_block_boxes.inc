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
	Consectetuer eget, posuere ut, mauris. Praesent adipiscing. Phasellus ullamcorper ipsum rutrum nunc. Nunc nonummy metus.<br />
	Vestibulum volutpat pretium libero. Cras id dui. Aenean ut eros et nisl sagittis vestibulum. Nullam nulla eros, ultricies sit amet, nonummy id, imperdiet feugiat, pede.
</p>
';

  $export['petitions_description'] = $fe_block_boxes;

  return $export;
}
