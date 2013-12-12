<?php
/**
 * @file
 * pw_subsite.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pw_subsite_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Media Footer';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'social_media_footer';
  $fe_block_boxes->body = '<ul class="menu">
	<li class="first leaf facebook">
		<a href="https://www.facebook.com/abgeordnetenwatch.de" title="">Facebook</a>
	</li>
	<li class="leaf twitter">
		<a href="https://twitter.com/a_watch" title="">Twitter</a>
	</li>
	<li class="leaf google">
		<a href="https://plus.google.com/101206126881536002255/" title="">Google+</a>
	</li>
</ul>
';

  $export['social_media_footer'] = $fe_block_boxes;

  return $export;
}
