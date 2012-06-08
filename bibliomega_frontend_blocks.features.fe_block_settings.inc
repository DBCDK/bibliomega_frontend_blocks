<?php
/**
 * @file
 * bibliomega_frontend_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bibliomega_frontend_blocks_default_fe_block_settings() {
  $export = array();

  // bibliomega
  $theme = array();

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'bibliomega',
    'status' => '1',
    'weight' => '-21',
    'region' => 'action_user',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'bibliomega',
    'status' => '1',
    'weight' => '-24',
    'region' => 'action_user',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'bibliomega',
    'status' => '1',
    'weight' => '-23',
    'region' => 'help',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'bibliomega',
    'status' => 0,
    'weight' => '-21',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'bibliomega',
    'status' => 0,
    'weight' => '-22',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'bibliomega',
    'status' => 0,
    'weight' => '-23',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'bibliomega',
    'status' => 0,
    'weight' => '-24',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'bibliomega',
    'status' => '1',
    'weight' => '0',
    'region' => 'action_search',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bibliomega',
    'status' => '1',
    'weight' => '-24',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'bibliomega',
    'status' => '1',
    'weight' => '-23',
    'region' => 'action_user',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'bibliomega',
    'status' => '1',
    'weight' => '-22',
    'region' => 'action_user',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['bibliomega'] = $theme;

  $theme_default = variable_get('theme_default', 'bartik');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
