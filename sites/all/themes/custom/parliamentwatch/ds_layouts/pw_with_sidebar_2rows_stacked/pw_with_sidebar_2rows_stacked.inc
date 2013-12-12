<?php

/**
 * @file
 * Display Suite PW Two Rows Content and Sidebar stacked configuration.
 */

function ds_pw_with_sidebar_2rows_stacked() {
  return array(
    'label' => t('PW Two Rows Content and Sidebar stacked'),
    'regions' => array(
      'header' => t('Header'),
      'left_1' => t('Left 1'),
      'right_1' => t('Right 1'),
      'inbetween' => t('Inbetween'),
      'left_2' => t('Left 2'),
      'right_2' => t('Right 2'),
      'footer' => t('Footer'),
    ),
    // Uncomment if you want to include a CSS file for this layout (pw_with_sidebar_2rows_stacked.css)
    'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (pw_with_sidebar_2rows_stacked.png)
    'image' => TRUE,
  );
}
