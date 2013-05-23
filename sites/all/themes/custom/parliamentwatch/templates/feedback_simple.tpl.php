<?php
/**
 * @file
 * Template file.
 *
 * @param $link: link path.
 * @param $align: left or right.
 * @param $class: array of classes to apply to anchor tag.
 * @param $top: distance from the top; include unit.
 * @param $alt: alt text.
 * @param $image: image path.
 * @param $height: image height in pixels.
 * @param $width: image width in pixels.
 * @param $enabled: true or false.
 */
?>
<?php if ($enabled): ?>
<div id='feedback_simple'>
  <a
    href='<?php print $link ?>?width=600&height=400'
    class='colorbox-node feedback_simple-<?php print $align ?> <?php print implode(' ', $class) ?>'
    style='top: <?php print $top ?>; height: <?php print $height ?>px; width: <?php print $width ?>px;'>
      <img
        alt='<?php print $alt ?>'
        src='<?php print $image ?>'
        height='<?php print $height ?>'
        width='<?php print $width ?>' />
  </a>
</div>
<?php endif; ?>
