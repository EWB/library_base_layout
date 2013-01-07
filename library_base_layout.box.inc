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
  $box->delta = 'front_resources_block';
  $box->plugin_key = 'simple';
  $box->title = 'Resources';
  $box->description = 'Front Resources Block';
  $box->options = array(
    'body' => array(
      'value' => '<div class="homerightcoldot">&nbsp;<ul class="homeres"><li><a href="about/library-hours" title="Hours &amp; Locations"><img alt="Hours &amp; Locations" src="./sites/all/themes/slu_libraries_theme/images/home-hours.gif" title="Hours &amp; Locations" height="52" border="0" width="53"> Hours &amp; Locations </a></li><li><a href="https://www.refworks.com/Refworks/login.asp?WNCLang=false" title="RefWorks"><img alt="Find a Librarian" src="./sites/all/themes/slu_libraries_theme/images/refworks-icon.gif" title="RefWorks" height="52" border="0" width="52"> RefWorks </a></li><li><a href="off-campus" title="Off-Campus Access"><img alt="Off-Campus Access" src="./sites/all/themes/slu_libraries_theme/images/home-browserplug.gif" title="Off-Campus Access" height="52" border="0" width="53">Off-Campus Access </a></li><li><a href="printing" title="Printing Services"> <img alt="Printing Services" src="./sites/all/themes/slu_libraries_theme/images/home-fulltext.gif" title="Printing Services" height="52" border="0" width="53"> Printing Services</a></li><li><a href="help" title="Get Help"><img alt="Get Help" src="./sites/all/themes/slu_libraries_theme/images/home-asklib.gif" title="Get Help" height="52" border="0" width="53"> Get Help </a></li><li><a href="http://infotech.stlawu.edu" title="Technology Support"><img alt="Technology Support" src="./sites/all/themes/slu_libraries_theme/images/home-restools.gif" title="Technology Support" height="52" border="0" width="53"> Technology Support </a></li></ul></div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['front_resources_block'] = $box;

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
