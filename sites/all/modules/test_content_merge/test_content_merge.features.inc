<?php
/**
 * @file
 * test_content_merge.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function test_content_merge_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function test_content_merge_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function test_content_merge_node_info() {
  $items = array(
    'product_display' => array(
      'name' => t('Product Display'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
