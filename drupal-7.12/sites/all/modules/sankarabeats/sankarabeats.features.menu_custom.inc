<?php
/**
 * @file
 * sankarabeats.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function sankarabeats_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-categories.
  $menus['menu-categories'] = array(
    'menu_name' => 'menu-categories',
    'title' => 'Categories',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');


  return $menus;
}
