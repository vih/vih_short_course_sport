<?php
/**
 * @file
 * vih_short_course_sport.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function vih_short_course_sport_defaultconfig_features() {
  return array(
    'vih_short_course_sport' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function vih_short_course_sport_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create commerce_product entities of bundle vih_short_course_sportcamp'.
  $permissions['create commerce_product entities of bundle vih_short_course_sportcamp'] = array(
    'name' => 'create commerce_product entities of bundle vih_short_course_sportcamp',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create vih_short_course_sport_camp content'.
  $permissions['create vih_short_course_sport_camp content'] = array(
    'name' => 'create vih_short_course_sport_camp content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_short_course_sport_camp content'.
  $permissions['delete any vih_short_course_sport_camp content'] = array(
    'name' => 'delete any vih_short_course_sport_camp content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vih_short_course_sport_camp content'.
  $permissions['delete own vih_short_course_sport_camp content'] = array(
    'name' => 'delete own vih_short_course_sport_camp content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_product entity of bundle vih_short_course_sportcamp'.
  $permissions['edit any commerce_product entity of bundle vih_short_course_sportcamp'] = array(
    'name' => 'edit any commerce_product entity of bundle vih_short_course_sportcamp',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any vih_short_course_sport_camp content'.
  $permissions['edit any vih_short_course_sport_camp content'] = array(
    'name' => 'edit any vih_short_course_sport_camp content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_product entities of bundle vih_short_course_sportcamp'.
  $permissions['edit own commerce_product entities of bundle vih_short_course_sportcamp'] = array(
    'name' => 'edit own commerce_product entities of bundle vih_short_course_sportcamp',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own vih_short_course_sport_camp content'.
  $permissions['edit own vih_short_course_sport_camp content'] = array(
    'name' => 'edit own vih_short_course_sport_camp content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any commerce_product entity of bundle vih_short_course_sportcamp'.
  $permissions['view any commerce_product entity of bundle vih_short_course_sportcamp'] = array(
    'name' => 'view any commerce_product entity of bundle vih_short_course_sportcamp',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle vih_short_course_sportcamp'.
  $permissions['view own commerce_product entities of bundle vih_short_course_sportcamp'] = array(
    'name' => 'view own commerce_product entities of bundle vih_short_course_sportcamp',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
