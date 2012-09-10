<?php
/**
 * @file
 * sankarabeats.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sankarabeats_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function sankarabeats_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sankarabeats_node_info() {
  $items = array(
    'album_photo' => array(
      'name' => t('Album photo'),
      'base' => 'node_content',
      'description' => t('Contient un nombre illimité d\'images.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('Billet de blog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tutorial' => array(
      'name' => t('Tutorial'),
      'base' => 'node_content',
      'description' => t('Article proposant un tutoriel vidéo.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
