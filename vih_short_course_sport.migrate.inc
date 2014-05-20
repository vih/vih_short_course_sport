<?php

/**
 * @file
 *  Migrations for vih_short_course_commerce.
 */

class VIHShortCourseSportProduct extends VIHMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import short courses from CSV file.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sku' => array(
          'type' => 'varchar',
          'length' => 32,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('commerce_product', 'vih_short_course_sportcamp')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'vih_short_course_sport') . '/import/short_course_sport_products.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationEntityAPI('commerce_product', 'vih_short_course_sportcamp');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('sku', 'sku');
    $this->addFieldMapping('commerce_price', 'price');
    $this->addFieldMapping('field_room', 'room');
    $this->addFieldMapping('commerce_stock', 'stock_quantity');
    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('language', 'language');
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('sku', 'SKU');
    $columns[2] = array('price', 'Price');
    $columns[3] = array('stock_status', 'Stock status');
    $columns[4] = array('stock_quantity', 'Stock quantity');
    $columns[5] = array('room', 'Room');

    return $columns;
  }

  function prepareRow($row) {
    //$row->product_images = explode(', ', $row->images);
    $row->uid = 1;
    $row->language = LANGUAGE_NONE;
  }
}


/**
 * @file
 *  Migrations for vih_short_course_commerce.
 */
class VIHShortCourseSportExtraProduct extends VIHMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import short courses from CSV file.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sku' => array(
          'type' => 'varchar',
          'length' => 32,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('commerce_product', 'vih_kayak')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'vih_short_course_sport') . '/import/short_course_sport_extra_products.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationEntityAPI('commerce_product', 'vih_kayak');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('sku', 'sku');
    $this->addFieldMapping('commerce_price', 'price');
    $this->addFieldMapping('field_room', 'room');
    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('language', 'language');
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('sku', 'SKU');
    $columns[2] = array('price', 'Price');
    $columns[3] = array('stock_status', 'Stock status');
    $columns[4] = array('stock_quantity', 'Stock quantity');

    return $columns;
  }

  function prepareRow($row) {
    //$row->product_images = explode(', ', $row->images);
    $row->uid = 1;
    $row->language = LANGUAGE_NONE;
  }
}

class VIHShortCourseSportNode extends VIHMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import course nodes.');
    $this->dependencies = array('VIHShortCourseSportProduct', 'VIHShortCourseSportExtraProduct');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'vih_short_course_sport') . '/import/short_course_sport_nodes.csv', $this->csvcolumns(), array('header_rows' => 1), $this->fields());

    $this->destination = new MigrateDestinationNode('vih_short_course_sport_camp');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'description');
    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');
    $this->addFieldMapping('field_course_time', 'date_from');
    $this->addFieldMapping('field_course_time:to', 'date_to');

    $this->addFieldMapping('field_course_leader', 'teacher_reference')
      ->sourceMigration('VIHEmployeesContext');

    $this->addFieldMapping('field_short_course_lecture', 'lectures')
      ->sourceMigration('VIHLecturesNode');

    $this->addFieldMapping('field_course_type', 'course_type');
    $this->addFieldMapping('field_course_type:create_term')
      ->defaultValue(TRUE);

    // Images
    $this->addFieldMapping('field_pictures', 'all_images');
    $this->addFieldMapping('field_pictures:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_pictures:source_dir')
      ->defaultValue(drupal_get_path('module', 'vih_short_course_sport') . '/import/images');

    // Featured image
    $this->addFieldMapping('field_featured_image', 'featured_image');
    $this->addFieldMapping('field_picture:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_picture:source_dir')
      ->defaultValue(drupal_get_path('module', 'vih_short_course_sport') . '/import/images');

    // Connect the products
    $this->addFieldMapping('field_golf_product', 'skus');

    $this->addFieldMapping('field_product', 'extra_product');

    $this->addFieldMapping('field_kayak_extra_choices', 'options');
  }

  function fields() {
    return array(
      'all_images' => 'An array of images, populated during prepareRow().',
    );
  }

  public function prepareRow($row) {
    $row->all_images = explode(',', $row->images);
    $products = array();
    foreach(explode(', ', $row->sku) as $sku) {
      $product = commerce_product_load_by_sku($sku);
      $products[] = $product->product_id;
    }
    $row->skus = $products;

    $products = array();
    foreach(explode(', ', $row->extra_product) as $sku) {
      $product = commerce_product_load_by_sku($sku);
      $products[] = $product->product_id;
    }
    $row->extra_product = $products;
    $row->options = explode(',', $row->options);
  }

  function csvcolumns() {
    $columns[0] = array('id', 'Id');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('date_from', 'Date From');
    $columns[3] = array('date_to', 'Date To');
    $columns[4] = array('description', 'Description');
    $columns[5] = array('sku', 'SKU');
    $columns[6] = array('product', 'Product');
    $columns[7] = array('featured_image', 'Featured Image');
    $columns[8] = array('images', 'Images');
    $columns[9] = array('teacher_reference', 'Teacher');
    $columns[10] = array('lectures', 'Lectures');
    $columns[11] = array('course_type', 'Course Type');
    $columns[12] = array('options', 'Extra options');
    $columns[13] = array('extra_product', 'Extra product');
    return $columns;
  }
}
