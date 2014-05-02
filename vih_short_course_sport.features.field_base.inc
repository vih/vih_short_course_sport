<?php
/**
 * @file
 * vih_short_course_sport.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function vih_short_course_sport_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_sportcamp_subjects'
  $field_bases['field_sportcamp_subjects'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sportcamp_subjects',
    'foreign keys' => array(),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(
            0 => '[commerce-line-item:commerce-product:product-id]',
          ),
          'display_name' => 'entityreference_1',
          'view_name' => 'vih_short_course_sportcamp_subjects',
        ),
      ),
      'handler_submit' => 'Change handler',
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
