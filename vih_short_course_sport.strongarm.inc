<?php
/**
 * @file
 * vih_short_course_sport.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vih_short_course_sport_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__vih_short_course_sport_camp';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'product:sku' => array(
          'teaser' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'teaser' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_stock' => array(
          'teaser' => array(
            'weight' => '45',
            'visible' => FALSE,
          ),
        ),
        'product:field_room' => array(
          'teaser' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__vih_short_course_sport_camp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_vih_short_course_sport_camp';
  $strongarm->value = '0';
  $export['language_content_type_vih_short_course_sport_camp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_vih_short_course_sport_camp';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_vih_short_course_sport_camp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_vih_short_course_sport_camp';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_vih_short_course_sport_camp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_vih_short_course_sport_camp';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_vih_short_course_sport_camp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_vih_short_course_sport_camp';
  $strongarm->value = '1';
  $export['node_preview_vih_short_course_sport_camp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_vih_short_course_sport_camp';
  $strongarm->value = 0;
  $export['node_submitted_vih_short_course_sport_camp'] = $strongarm;

  return $export;
}
