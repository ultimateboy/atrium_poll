<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _atrium_poll_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'atrium_poll';
  $context->description = '';
  $context->tag = 'Poll';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'poll' => 'poll',
      ),
    ),
    'node' => array(
      'values' => array(
        'poll' => 'poll',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'views' => array(
      'values' => array(
        'atrium_poll' => 'atrium_poll',
        'atrium_poll:page_1' => 'atrium_poll:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'wide',
    ),
    'menu' => 'poll',
  );
  $context->condition_mode = 0;

  $translatables['atrium_poll'] = array(
    t('Poll'),
  );

  $export['atrium_poll'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _atrium_poll_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  else if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _atrium_poll_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Polls',
    'path' => 'poll',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Polls'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _atrium_poll_user_default_permissions() {
  $permissions = array();

  // Exported permission: cancel own vote
  $permissions[] = array(
    'name' => 'cancel own vote',
    'roles' => array(
      '0' => 'Community Admin',
      '1' => 'Developer',
      '2' => 'Group Manager',
    ),
  );

  // Exported permission: create poll content
  $permissions[] = array(
    'name' => 'create poll content',
    'roles' => array(
      '0' => 'Community Admin',
      '1' => 'Developer',
      '2' => 'Group Manager',
    ),
  );

  // Exported permission: delete any poll content
  $permissions[] = array(
    'name' => 'delete any poll content',
    'roles' => array(
      '0' => 'Community Admin',
      '1' => 'Developer',
      '2' => 'Group Manager',
    ),
  );

  // Exported permission: delete own poll content
  $permissions[] = array(
    'name' => 'delete own poll content',
    'roles' => array(
      '0' => 'Community Admin',
      '1' => 'Developer',
      '2' => 'Examiner - Post',
      '3' => 'Group Manager',
    ),
  );

  // Exported permission: edit any poll content
  $permissions[] = array(
    'name' => 'edit any poll content',
    'roles' => array(
      '0' => 'Community Admin',
      '1' => 'Developer',
      '2' => 'Group Manager',
    ),
  );

  // Exported permission: edit own poll content
  $permissions[] = array(
    'name' => 'edit own poll content',
    'roles' => array(
      '0' => 'Community Admin',
      '1' => 'Developer',
      '2' => 'Examiner - Post',
      '3' => 'Group Manager',
    ),
  );

  // Exported permission: inspect all votes
  $permissions[] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      '0' => 'Community Admin',
      '1' => 'Developer',
      '2' => 'Group Manager',
    ),
  );

  // Exported permission: vote on polls
  $permissions[] = array(
    'name' => 'vote on polls',
    'roles' => array(
      '0' => 'Community Admin',
      '1' => 'Developer',
      '2' => 'Examiner - Post',
      '3' => 'Group Manager',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _atrium_poll_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_poll';
  $strongarm->value = 0;

  $export['comment_anonymous_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_poll';
  $strongarm->value = '3';

  $export['comment_controls_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_poll';
  $strongarm->value = '4';

  $export['comment_default_mode_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_poll';
  $strongarm->value = '1';

  $export['comment_default_order_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_poll';
  $strongarm->value = '50';

  $export['comment_default_per_page_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_poll';
  $strongarm->value = '0';

  $export['comment_form_location_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_poll';
  $strongarm->value = '0';

  $export['comment_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_poll';
  $strongarm->value = '1';

  $export['comment_preview_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_poll';
  $strongarm->value = '1';

  $export['comment_subject_field_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_poll';
  $strongarm->value = 'none';

  $export['comment_upload_images_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_poll';
  $strongarm->value = 0;

  $export['content_profile_use_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_poll';
  $strongarm->value = 0;

  $export['enable_revisions_page_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_poll';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_poll';
  $strongarm->value = array(
    '0' => 'nodetype',
  );

  $export['notifications_content_type_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_poll';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_poll';
  $strongarm->value = 0;

  $export['show_diff_inline_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_poll';
  $strongarm->value = 0;

  $export['show_preview_changes_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_poll';
  $strongarm->value = '1';

  $export['upload_poll'] = $strongarm;
  return $export;
}
