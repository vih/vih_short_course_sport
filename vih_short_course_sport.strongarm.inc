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
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'media_gallery_block' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '10',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '11',
        ),
        'redirect' => array(
          'weight' => '12',
        ),
        'xmlsitemap' => array(
          'weight' => '13',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:field_entity_registration' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:field_room' => array(
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'product:field_agegroup' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_stock' => array(
          'default' => array(
            'weight' => '8',
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
  $strongarm->value = array();
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
    1 => 'promote',
  );
  $export['node_options_vih_short_course_sport_camp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_vih_short_course_sport_camp';
  $strongarm->value = '0';
  $export['node_preview_vih_short_course_sport_camp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_vih_short_course_sport_camp';
  $strongarm->value = 0;
  $export['node_submitted_vih_short_course_sport_camp'] = $strongarm;

  return $export;
}