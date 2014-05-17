<?php
/**
 * @file
 * Integrates Views with VIH Short Course Sport.
 */

/**
 * Implements hook_views_data_alter().
 */
function vih_short_course_sport_views_data_alter(&$data) {
  //Changed created to use our date sort handler which adds weekly granularity.
  $data['commerce_line_item']['additional_product_options'] = array(
    'title' => t('Additional Product Options'),
    'help' => t('Data stored on the line item as additional product options.'),
    'field' => array(
      'handler' => 'vih_short_course_sport_additional_product_options',
    ),
  );
}
