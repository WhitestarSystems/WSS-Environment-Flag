<?php
/**
 * @file
 * wss_environment_flag.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wss_environment_flag_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "environment_indicator" && $api == "default_environment_indicator_environments") {
    return array("version" => "1");
  }
}
