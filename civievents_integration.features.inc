<?php
/**
 * @file
 * civievents_integration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function civievents_integration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function civievents_integration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function civievents_integration_node_info() {
  $items = array(
    'civievent' => array(
      'name' => t('CiviEvent'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
