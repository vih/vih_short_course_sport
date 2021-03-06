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
  $display->layout = 'radix_boxton';
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
  $pane->pid = 'new-702b9021-9780-4463-9dea-83e0cb511916';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'panopoly_image_spotlight',
      'image_link' => '',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '702b9021-9780-4463-9dea-83e0cb511916';
  $display->content['new-702b9021-9780-4463-9dea-83e0cb511916'] = $pane;
  $display->panels['contentmain'][0] = 'new-702b9021-9780-4463-9dea-83e0cb511916';
  $pane = new stdClass();
  $pane->pid = 'new-a5203cd6-bcd6-4515-8eee-a0c9bbca6ee7';
  $pane->panel = 'contentmain';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a5203cd6-bcd6-4515-8eee-a0c9bbca6ee7';
  $display->content['new-a5203cd6-bcd6-4515-8eee-a0c9bbca6ee7'] = $pane;
  $display->panels['contentmain'][1] = 'new-a5203cd6-bcd6-4515-8eee-a0c9bbca6ee7';
  $pane = new stdClass();
  $pane->pid = 'new-a5e49880-9d53-4c7b-a0e8-ec21a654ecbc';
  $pane->panel = 'contentmain';
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
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = 'a5e49880-9d53-4c7b-a0e8-ec21a654ecbc';
  $display->content['new-a5e49880-9d53-4c7b-a0e8-ec21a654ecbc'] = $pane;
  $display->panels['contentmain'][2] = 'new-a5e49880-9d53-4c7b-a0e8-ec21a654ecbc';
  $pane = new stdClass();
  $pane->pid = 'new-7a91de38-ebe9-4490-b786-e44ece8726f3';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pictures';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'colorbox',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'colorbox_node_style' => 'vih_quarter_square',
      'colorbox_node_style_first' => '',
      'colorbox_image_style' => 'panopoly_image_full',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7a91de38-ebe9-4490-b786-e44ece8726f3';
  $display->content['new-7a91de38-ebe9-4490-b786-e44ece8726f3'] = $pane;
  $display->panels['contentmain'][3] = 'new-7a91de38-ebe9-4490-b786-e44ece8726f3';
  $pane = new stdClass();
  $pane->pid = 'new-fcac5e04-4853-451b-a030-7afca45d4d09';
  $pane->panel = 'contentmain';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'fcac5e04-4853-451b-a030-7afca45d4d09';
  $display->content['new-fcac5e04-4853-451b-a030-7afca45d4d09'] = $pane;
  $display->panels['contentmain'][4] = 'new-fcac5e04-4853-451b-a030-7afca45d4d09';
  $pane = new stdClass();
  $pane->pid = 'new-b9022771-99e9-47ca-ae08-9046ed807358';
  $pane->panel = 'contentmain';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'b9022771-99e9-47ca-ae08-9046ed807358';
  $display->content['new-b9022771-99e9-47ca-ae08-9046ed807358'] = $pane;
  $display->panels['contentmain'][5] = 'new-b9022771-99e9-47ca-ae08-9046ed807358';
  $pane = new stdClass();
  $pane->pid = 'new-a89993fa-616b-4822-9980-feef9ab8bfea';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'employees_context-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Undervisere',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'headline' => '',
      'style' => 'alternate',
    ),
    'style' => 'vih_box_highlight',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'a89993fa-616b-4822-9980-feef9ab8bfea';
  $display->content['new-a89993fa-616b-4822-9980-feef9ab8bfea'] = $pane;
  $display->panels['contentmain'][6] = 'new-a89993fa-616b-4822-9980-feef9ab8bfea';
  $pane = new stdClass();
  $pane->pid = 'new-4c505046-05bb-481f-9348-9a464c90cdf3';
  $pane->panel = 'contentmain';
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
    'override_title' => 1,
    'override_title_text' => 'Tilmelding til %node:title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'headline' => '',
      'style' => 'alternate',
    ),
    'style' => 'vih_box_highlight',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '4c505046-05bb-481f-9348-9a464c90cdf3';
  $display->content['new-4c505046-05bb-481f-9348-9a464c90cdf3'] = $pane;
  $display->panels['contentmain'][7] = 'new-4c505046-05bb-481f-9348-9a464c90cdf3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  return $export;
}
