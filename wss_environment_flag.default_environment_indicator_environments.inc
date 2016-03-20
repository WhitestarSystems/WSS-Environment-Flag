<?php
/**
 * @file
 * wss_environment_flag.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function wss_environment_flag_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'production_environment';
  $environment->name = 'Production';
  $environment->regexurl = 'northamptonfencing.org';
  $environment->settings = array(
    'color' => '#aa3333',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['production_environment'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'test_environment';
  $environment->name = 'Test environment';
  $environment->regexurl = 'test.northamptonfencing.org';
  $environment->settings = array(
    'color' => '#1d7de3',
    'text_color' => '#ffffff',
    'weight' => '50',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['test_environment'] = $environment;

  return $export;
}
