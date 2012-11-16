<?php
/**
 * @file
 * library_base_layout.box.inc
 */

/**
 * Implements hook_default_box().
 */
function library_base_layout_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Library Footer';
  $box->options = array(
    'body' => array(
      'value' => 'St. Lawrence University | 23 Romoda Drive, Canton, NY 13617 | ODY Library (315) 229-5451 Science Library (315) 229-5400',
      'format' => 'filtered_html',
    ),
  );
  $export['footer'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'library_db_course_list';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'LInk to datbases and courses';
  $box->options = array(
    'body' => array(
      'value' => '<p>&nbsp;</p><p><span><a href="databases"><img src="sites/all/themes/slu_libraries_theme/images/databases-a-z.gif"></a><a href="courses"><img src="sites/all/themes/slu_libraries_theme/images/course-resources-and-reserves.gif"></a></span></p>',
      'format' => 'full_html',
    ),
  );
  $export['library_db_course_list'] = $box;

  return $export;
}
