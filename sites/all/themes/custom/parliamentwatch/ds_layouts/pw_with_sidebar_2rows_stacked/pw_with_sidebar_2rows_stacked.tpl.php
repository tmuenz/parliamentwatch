<?php
/**
 * @file
 * Display Suite PW Two Rows Content and Sidebar stacked template.
 *
 * Available variables:
 *
 * Layout:
 * - $classes: String of classes that can be used to style this layout.
 * - $contextual_links: Renderable array of contextual links.
 * - $layout_wrapper: wrapper surrounding the layout.
 *
 * Regions:
 *
 * - $header: Rendered content for the "Header" region.
 * - $header_classes: String of classes that can be used to style the "Header" region.
 *
 * - $left_1: Rendered content for the "Left 1" region.
 * - $left_1_classes: String of classes that can be used to style the "Left 1" region.
 *
 * - $right_1: Rendered content for the "Right 1" region.
 * - $right_1_classes: String of classes that can be used to style the "Right 1" region.
 *
 * - $inbetween: Rendered content for the "Inbetween" region.
 * - $inbetween_classes: String of classes that can be used to style the "Inbetween" region.
 *
 * - $left_2: Rendered content for the "Left 2" region.
 * - $left_2_classes: String of classes that can be used to style the "Left 2" region.
 *
 * - $right_2: Rendered content for the "Right 2" region.
 * - $right_2_classes: String of classes that can be used to style the "Right 2" region.
 *
 * - $footer: Rendered content for the "Footer" region.
 * - $footer_classes: String of classes that can be used to style the "Footer" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> clearfix">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

    <<?php print $header_wrapper; ?> class="ds-header<?php print $header_classes; ?>">
      <?php print $header; ?>
    </<?php print $header_wrapper; ?>>

    <<?php print $left_1_wrapper; ?> class="ds-left-1 slider-stage grid-8 alpha <?php print $left_1_classes; ?>">
      <?php print $left_1; ?>
    </<?php print $left_1_wrapper; ?>>

    <<?php print $right_1_wrapper; ?> class="ds-right-1 region-sidebar-second grid-4 omega<?php print $right_1_classes; ?>">
      <?php print $right_1; ?>
    </<?php print $right_1_wrapper; ?>>

    <<?php print $inbetween_wrapper; ?> class="ds-inbetween<?php print $inbetween_classes; ?>">
      <?php print $inbetween; ?>
    </<?php print $inbetween_wrapper; ?>>

    <<?php print $left_2_wrapper; ?> class="ds-left-2 grid-8 alpha<?php print $left_2_classes; ?>">
      <?php print $left_2; ?>
    </<?php print $left_2_wrapper; ?>>

    <<?php print $right_2_wrapper; ?> class="ds-right-2 region-sidebar-second grid-4 omega<?php print $right_2_classes; ?>">
      <?php print $right_2; ?>
    </<?php print $right_2_wrapper; ?>>

    <<?php print $footer_wrapper; ?> class="ds-footer<?php print $footer_classes; ?>">
      <?php print $footer; ?>
    </<?php print $footer_wrapper; ?>>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
