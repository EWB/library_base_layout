<?php
/**
 * @file
 * library_base_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function library_base_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'library_frontpage_delta';
  $context->description = 'Frontpage context for the library website';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-library_humanities_links' => array(
          'module' => 'boxes',
          'delta' => 'library_humanities_links',
          'region' => 'content_grid_first',
          'weight' => '-9',
        ),
        'boxes-library_sciences_links' => array(
          'module' => 'boxes',
          'delta' => 'library_sciences_links',
          'region' => 'content_grid_second',
          'weight' => '-10',
        ),
        'boxes-library_general_sources_links' => array(
          'module' => 'boxes',
          'delta' => 'library_general_sources_links',
          'region' => 'content_grid_third',
          'weight' => '-23',
        ),
        'boxes-library_social_sciences_links' => array(
          'module' => 'boxes',
          'delta' => 'library_social_sciences_links',
          'region' => 'content_grid_third',
          'weight' => '-23',
        ),
        'boxes-library_interdisciplinary_links' => array(
          'module' => 'boxes',
          'delta' => 'library_interdisciplinary_links',
          'region' => 'content_grid_fourth',
          'weight' => '-10',
        ),
        'quicktabs-library_search_cluster' => array(
          'module' => 'quicktabs',
          'delta' => 'library_search_cluster',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'boxes-library_db_course_list' => array(
          'module' => 'boxes',
          'delta' => 'library_db_course_list',
          'region' => 'header_first',
          'weight' => '-9',
        ),
        'views-featured_content-block' => array(
          'module' => 'views',
          'delta' => 'featured_content-block',
          'region' => 'header_second',
          'weight' => '-10',
        ),
        'views-base_announcement-block_1' => array(
          'module' => 'views',
          'delta' => 'base_announcement-block_1',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'boxes-footer' => array(
          'module' => 'boxes',
          'delta' => 'footer',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'library_front_page',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage context for the library website');
  $export['library_frontpage_delta'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        2 => 2,
        3 => 3,
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nice_menus-2' => array(
          'module' => 'nice_menus',
          'delta' => '2',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'boxes-footer' => array(
          'module' => 'boxes',
          'delta' => 'footer',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
