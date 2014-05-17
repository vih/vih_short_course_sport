<?php

/**
 * Field handler to translate a line item type into its readable form.
 */
class vih_short_course_sport_additional_product_options extends views_handler_field {
  /**
   * Add some required fields needed on render().
   */
  function construct() {
    parent::construct();
    $this->additional_fields['addtional_product_options'] = array(
      'table' => 'commerce_line_item',
      'field' => 'data',
    );
  }
  /**
   * Loads additional fields.
   */
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }
  function render($values) {
    $line_item_data = unserialize($values->commerce_line_item_field_data_commerce_line_items_data);

    if (isset($line_item_data['additional_products'])) {
      $additional_products = $line_item_data['additional_products'];
      $return_array = array();

      // Loop through the items and add to return array
      foreach ($additional_products as $label => $data) {
        $return_array[] = '<strong>' . $label . ':</strong> ' . $data;
      }
      return '<div class="additional-products">' . implode('<br />', $return_array) . '</div>';
    }

    return NULL;
  }
}
