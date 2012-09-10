<?php
/**
 * @file
 * sankarabeats.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function sankarabeats_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|album_photo|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'album_photo';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
  );
  $export['node|album_photo|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|album_photo|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'album_photo';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|album_photo|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|post|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'post';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
  );
  $export['node|post|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|post|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'post';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Lire la suite',
        'wrapper' => '',
        'class' => '',
      ),
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
  );
  $export['node|post|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tutorial|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tutorial';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
  );
  $export['node|tutorial|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tutorial|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tutorial';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Lire la suite',
        'wrapper' => '',
        'class' => '',
      ),
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
  );
  $export['node|tutorial|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function sankarabeats_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|album_photo|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'album_photo';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'post_date',
        1 => 'body',
        2 => 'field_slider',
        3 => 'comments',
      ),
    ),
    'fields' => array(
      'post_date' => 'ds_content',
      'body' => 'ds_content',
      'field_slider' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|album_photo|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|album_photo|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'album_photo';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        0 => 'body',
      ),
      'footer' => array(
        0 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_image' => 'left',
      'body' => 'right',
      'node_link' => 'footer',
    ),
    'classes' => array(),
  );
  $export['node|album_photo|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|post|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'post';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'post_date',
        1 => 'body',
        2 => 'field_tags',
        3 => 'comments',
      ),
    ),
    'fields' => array(
      'post_date' => 'ds_content',
      'body' => 'ds_content',
      'field_tags' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|post|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|post|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'post';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'footer' => array(
        0 => 'node_link',
      ),
      'header' => array(
        0 => 'post_date',
        1 => 'title',
      ),
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'node_link' => 'footer',
      'post_date' => 'header',
      'field_image' => 'left',
      'title' => 'header',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|post|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tutorial|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tutorial';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'post_date',
      ),
      'right' => array(
        0 => 'field_public_rate',
      ),
      'footer' => array(
        0 => 'body',
        1 => 'field_video',
        2 => 'comments',
      ),
    ),
    'fields' => array(
      'post_date' => 'left',
      'field_public_rate' => 'right',
      'body' => 'footer',
      'field_video' => 'footer',
      'comments' => 'footer',
    ),
    'classes' => array(),
  );
  $export['node|tutorial|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tutorial|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tutorial';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'post_date',
        1 => 'title',
      ),
      'left' => array(
        0 => 'field_video',
      ),
      'right' => array(
        0 => 'body',
      ),
      'footer' => array(
        0 => 'node_link',
      ),
    ),
    'fields' => array(
      'post_date' => 'header',
      'title' => 'header',
      'field_video' => 'left',
      'body' => 'right',
      'node_link' => 'footer',
    ),
    'classes' => array(),
  );
  $export['node|tutorial|teaser'] = $ds_layout;

  return $export;
}
