<?php
/**
 * @file
 * faq_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function faq_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer faq'.
  $permissions['administer faq'] = array(
    'name' => 'administer faq',
    'roles' => array(
      'expert' => 'expert',
    ),
    'module' => 'faq',
  );

  // Exported permission: 'administer faq order'.
  $permissions['administer faq order'] = array(
    'name' => 'administer faq order',
    'roles' => array(
      'expert' => 'expert',
    ),
    'module' => 'faq',
  );

  // Exported permission: 'create faqs content'.
  $permissions['create faqs content'] = array(
    'name' => 'create faqs content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'expert' => 'expert',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faqs content'.
  $permissions['delete any faqs content'] = array(
    'name' => 'delete any faqs content',
    'roles' => array(
      'expert' => 'expert',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faqs content'.
  $permissions['delete own faqs content'] = array(
    'name' => 'delete own faqs content',
    'roles' => array(
      'expert' => 'expert',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any faqs content'.
  $permissions['edit any faqs content'] = array(
    'name' => 'edit any faqs content',
    'roles' => array(
      'expert' => 'expert',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own faqs content'.
  $permissions['edit own faqs content'] = array(
    'name' => 'edit own faqs content',
    'roles' => array(
      'expert' => 'expert',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view faq page'.
  $permissions['view faq page'] = array(
    'name' => 'view faq page',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'expert' => 'expert',
    ),
    'module' => 'faq',
  );

  return $permissions;
}
