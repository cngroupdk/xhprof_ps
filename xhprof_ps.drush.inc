<?php

function xhprof_ps_drush_command() {
  $items['xhprof_ps_prof_en'] = array(
    'description' => 'enable the mm profiler',
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'aliases' => array('mm_prof'),
  );
  $items['xhprof_ps_prof_dis'] = array(
    'description' => 'mm profiler disable',
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'aliases' => array('mm_disp'),
  );
  return $items;
}

function drush_xhprof_ps_prof_en() {
  variable_set('xhprof_ps_prof', TRUE);
}

function mm_disp() {
  variable_set('xhprof_ps_prof', FALSE);
}