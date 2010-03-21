<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_poll_context_default_contexts() {
  module_load_include('inc', 'atrium_poll', 'atrium_poll.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_poll_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_poll_ctools_plugin_api() {
  module_load_include('inc', 'atrium_poll', 'atrium_poll.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_poll_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function atrium_poll_menu_default_items() {
  module_load_include('inc', 'atrium_poll', 'atrium_poll.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_poll_menu_default_items', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_poll_user_default_permissions() {
  module_load_include('inc', 'atrium_poll', 'atrium_poll.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_poll_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function atrium_poll_strongarm() {
  module_load_include('inc', 'atrium_poll', 'atrium_poll.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_poll_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function atrium_poll_views_default_views() {
  module_load_include('inc', 'atrium_poll', 'atrium_poll.features.views');
  $args = func_get_args();
  return call_user_func_array('_atrium_poll_views_default_views', $args);
}
