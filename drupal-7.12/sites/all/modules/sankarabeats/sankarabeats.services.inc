<?php
/**
 * @file
 * sankarabeats.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function sankarabeats_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'webservice';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'webservice';
  $endpoint->authentication = array();
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'tutorial' => array(
      'operations' => array(
        'index' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'blog' => array(
      'operations' => array(
        'index' => array(
          'enabled' => 1,
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['webservice'] = $endpoint;

  return $export;
}
