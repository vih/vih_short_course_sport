<?php
/**
 * @file
 * vih_short_course_sport.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function vih_short_course_sport_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Short Course SportCamp',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'vih_short_course_sport_camp' => 'vih_short_course_sport_camp',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 7,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Video',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 4,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'introduction',
        ),
        'parent' => '4',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'picture',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'picture' => array(
        'type' => 'region',
        'title' => 'Picture',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      'introduction' => array(
        'type' => 'region',
        'title' => 'Introduction',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'information',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'information' => array(
        'type' => 'region',
        'title' => 'Information',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '616bab15-6f71-48f7-9ed6-37d63c42289c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e0dc3419-998a-409e-870e-53a6f2c65424';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'formatter_settings' => array(
        'image_style' => 'sidepicture',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'e0dc3419-998a-409e-870e-53a6f2c65424';
    $display->content['new-e0dc3419-998a-409e-870e-53a6f2c65424'] = $pane;
    $display->panels['middle'][0] = 'new-e0dc3419-998a-409e-870e-53a6f2c65424';
    $pane = new stdClass();
    $pane->pid = 'new-a5e49880-9d53-4c7b-a0e8-ec21a654ecbc';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '%title %node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'a5e49880-9d53-4c7b-a0e8-ec21a654ecbc';
    $display->content['new-a5e49880-9d53-4c7b-a0e8-ec21a654ecbc'] = $pane;
    $display->panels['middle'][1] = 'new-a5e49880-9d53-4c7b-a0e8-ec21a654ecbc';
    $pane = new stdClass();
    $pane->pid = 'new-a696ee41-7f40-4c03-a0d8-2ed83e318dcd';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'vih_short_course_sportcamp_subjects-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a696ee41-7f40-4c03-a0d8-2ed83e318dcd';
    $display->content['new-a696ee41-7f40-4c03-a0d8-2ed83e318dcd'] = $pane;
    $display->panels['middle'][2] = 'new-a696ee41-7f40-4c03-a0d8-2ed83e318dcd';
    $pane = new stdClass();
    $pane->pid = 'new-fcac5e04-4853-451b-a030-7afca45d4d09';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'vih_lectures-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fcac5e04-4853-451b-a030-7afca45d4d09';
    $display->content['new-fcac5e04-4853-451b-a030-7afca45d4d09'] = $pane;
    $display->panels['middle'][3] = 'new-fcac5e04-4853-451b-a030-7afca45d4d09';
    $pane = new stdClass();
    $pane->pid = 'new-b9022771-99e9-47ca-ae08-9046ed807358';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_vih_schedule';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'pdf_reader_file',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'pdf_width' => '600',
        'pdf_height' => '480',
        'renderer' => '0',
        'download' => 1,
        'colorbox' => 0,
        'colorbox_link_text' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b9022771-99e9-47ca-ae08-9046ed807358';
    $display->content['new-b9022771-99e9-47ca-ae08-9046ed807358'] = $pane;
    $display->panels['middle'][4] = 'new-b9022771-99e9-47ca-ae08-9046ed807358';
    $pane = new stdClass();
    $pane->pid = 'new-285fc51a-ad59-4b35-ac03-452a49f1a75e';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'employees_context';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '50',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Kursusansvarlige',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '285fc51a-ad59-4b35-ac03-452a49f1a75e';
    $display->content['new-285fc51a-ad59-4b35-ac03-452a49f1a75e'] = $pane;
    $display->panels['middle'][5] = 'new-285fc51a-ad59-4b35-ac03-452a49f1a75e';
    $pane = new stdClass();
    $pane->pid = 'new-a5203cd6-bcd6-4515-8eee-a0c9bbca6ee7';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_course_time';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'date_default',
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'a5203cd6-bcd6-4515-8eee-a0c9bbca6ee7';
    $display->content['new-a5203cd6-bcd6-4515-8eee-a0c9bbca6ee7'] = $pane;
    $display->panels['middle'][6] = 'new-a5203cd6-bcd6-4515-8eee-a0c9bbca6ee7';
    $pane = new stdClass();
    $pane->pid = 'new-4c505046-05bb-481f-9348-9a464c90cdf3';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_golf_product';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'commerce_cart_add_to_cart_form',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'show_quantity' => 0,
        'default_quantity' => '1',
        'combine' => 1,
        'line_item_type' => 'vih_short_course_sport',
        'show_single_product_attributes' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '4c505046-05bb-481f-9348-9a464c90cdf3';
    $display->content['new-4c505046-05bb-481f-9348-9a464c90cdf3'] = $pane;
    $display->panels['middle'][7] = 'new-4c505046-05bb-481f-9348-9a464c90cdf3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  return $export;
}
