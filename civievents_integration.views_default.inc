<?php
/**
 * @file
 * civievents_integration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function civievents_integration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'civievent_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CiviEvent Display';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Alumni Events / Reunions';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_civievent_start_date']['id'] = 'field_civievent_start_date';
  $handler->display->display_options['fields']['field_civievent_start_date']['table'] = 'field_data_field_civievent_start_date';
  $handler->display->display_options['fields']['field_civievent_start_date']['field'] = 'field_civievent_start_date';
  $handler->display->display_options['fields']['field_civievent_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_civievent_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_civievent_start_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_start_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_start_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_civievent_start_date']['field_api_classes'] = TRUE;
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_civievent_end_date']['id'] = 'field_civievent_end_date';
  $handler->display->display_options['fields']['field_civievent_end_date']['table'] = 'field_data_field_civievent_end_date';
  $handler->display->display_options['fields']['field_civievent_end_date']['field'] = 'field_civievent_end_date';
  $handler->display->display_options['fields']['field_civievent_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_civievent_end_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_civievent_end_date']['alter']['text'] = '[field_civievent_start_date] - [field_civievent_end_date]';
  $handler->display->display_options['fields']['field_civievent_end_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_civievent_end_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_end_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_end_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_end_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_civievent_end_date']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_civievent_short_desc']['id'] = 'field_civievent_short_desc';
  $handler->display->display_options['fields']['field_civievent_short_desc']['table'] = 'field_data_field_civievent_short_desc';
  $handler->display->display_options['fields']['field_civievent_short_desc']['field'] = 'field_civievent_short_desc';
  $handler->display->display_options['fields']['field_civievent_short_desc']['label'] = '';
  $handler->display->display_options['fields']['field_civievent_short_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_civievent_short_desc']['element_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_short_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_short_desc']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_short_desc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_short_desc']['field_api_classes'] = TRUE;
  /* Field: Content: Where */
  $handler->display->display_options['fields']['field_civievent_location']['id'] = 'field_civievent_location';
  $handler->display->display_options['fields']['field_civievent_location']['table'] = 'field_data_field_civievent_location';
  $handler->display->display_options['fields']['field_civievent_location']['field'] = 'field_civievent_location';
  $handler->display->display_options['fields']['field_civievent_location']['label'] = 'Location';
  $handler->display->display_options['fields']['field_civievent_location']['alter']['text'] = 'Location: [field_civievent_location]';
  $handler->display->display_options['fields']['field_civievent_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_location']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_civievent_location']['field_api_classes'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_civievent_link']['id'] = 'field_civievent_link';
  $handler->display->display_options['fields']['field_civievent_link']['table'] = 'field_data_field_civievent_link';
  $handler->display->display_options['fields']['field_civievent_link']['field'] = 'field_civievent_link';
  $handler->display->display_options['fields']['field_civievent_link']['label'] = '';
  $handler->display->display_options['fields']['field_civievent_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_civievent_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_civievent_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_civievent_link']['field_api_classes'] = TRUE;
  /* Field: Content: Registration Open */
  $handler->display->display_options['fields']['field_civievent_reg_open']['id'] = 'field_civievent_reg_open';
  $handler->display->display_options['fields']['field_civievent_reg_open']['table'] = 'field_data_field_civievent_reg_open';
  $handler->display->display_options['fields']['field_civievent_reg_open']['field'] = 'field_civievent_reg_open';
  $handler->display->display_options['fields']['field_civievent_reg_open']['label'] = '';
  $handler->display->display_options['fields']['field_civievent_reg_open']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_civievent_reg_open']['element_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_reg_open']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_reg_open']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_reg_open']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_reg_open']['field_api_classes'] = TRUE;
  /* Field: Content: Registration Start Date */
  $handler->display->display_options['fields']['field_civievent_reg_start_date']['id'] = 'field_civievent_reg_start_date';
  $handler->display->display_options['fields']['field_civievent_reg_start_date']['table'] = 'field_data_field_civievent_reg_start_date';
  $handler->display->display_options['fields']['field_civievent_reg_start_date']['field'] = 'field_civievent_reg_start_date';
  $handler->display->display_options['fields']['field_civievent_reg_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_civievent_reg_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_civievent_reg_start_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_reg_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_reg_start_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_reg_start_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_reg_start_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_civievent_reg_start_date']['field_api_classes'] = TRUE;
  /* Field: Content: Registration End Date */
  $handler->display->display_options['fields']['field_civievent_reg_end_date']['id'] = 'field_civievent_reg_end_date';
  $handler->display->display_options['fields']['field_civievent_reg_end_date']['table'] = 'field_data_field_civievent_reg_end_date';
  $handler->display->display_options['fields']['field_civievent_reg_end_date']['field'] = 'field_civievent_reg_end_date';
  $handler->display->display_options['fields']['field_civievent_reg_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_civievent_reg_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_civievent_reg_end_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_reg_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_reg_end_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_civievent_reg_end_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_civievent_reg_end_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_civievent_reg_end_date']['field_api_classes'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_civievent_reg_open';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional']['then'] = '<a href="[field_civievent_link]" target="_blank">Register</a>';
  $handler->display->display_options['fields']['views_conditional']['or'] = 'Registration open from [field_civievent_reg_start_date] to [field_civievent_reg_end_date]';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'civievent' => 'civievent',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Is Active (field_civievent_is_active) */
  $handler->display->display_options['filters']['field_civievent_is_active_value']['id'] = 'field_civievent_is_active_value';
  $handler->display->display_options['filters']['field_civievent_is_active_value']['table'] = 'field_data_field_civievent_is_active';
  $handler->display->display_options['filters']['field_civievent_is_active_value']['field'] = 'field_civievent_is_active_value';
  $handler->display->display_options['filters']['field_civievent_is_active_value']['value'] = array(
    'Yes' => 'Yes',
  );
  $handler->display->display_options['filters']['field_civievent_is_active_value']['group'] = 1;
  /* Filter criterion: Content: Event Type (field_civievent_event_type) */
  $handler->display->display_options['filters']['field_civievent_event_type_value']['id'] = 'field_civievent_event_type_value';
  $handler->display->display_options['filters']['field_civievent_event_type_value']['table'] = 'field_data_field_civievent_event_type';
  $handler->display->display_options['filters']['field_civievent_event_type_value']['field'] = 'field_civievent_event_type_value';
  $handler->display->display_options['filters']['field_civievent_event_type_value']['value'] = array(
    'Alumni Events / Reunions' => 'Alumni Events / Reunions',
  );

  /* Display: General Events */
  $handler = $view->new_display('page', 'General Events', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'civievent' => 'civievent',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Is Active (field_civievent_is_active) */
  $handler->display->display_options['filters']['field_civievent_is_active_value']['id'] = 'field_civievent_is_active_value';
  $handler->display->display_options['filters']['field_civievent_is_active_value']['table'] = 'field_data_field_civievent_is_active';
  $handler->display->display_options['filters']['field_civievent_is_active_value']['field'] = 'field_civievent_is_active_value';
  $handler->display->display_options['filters']['field_civievent_is_active_value']['value'] = array(
    'Yes' => 'Yes',
  );
  $handler->display->display_options['filters']['field_civievent_is_active_value']['group'] = 1;
  /* Filter criterion: Content: Event Type (field_civievent_event_type) */
  $handler->display->display_options['filters']['field_civievent_event_type_value_1']['id'] = 'field_civievent_event_type_value_1';
  $handler->display->display_options['filters']['field_civievent_event_type_value_1']['table'] = 'field_data_field_civievent_event_type';
  $handler->display->display_options['filters']['field_civievent_event_type_value_1']['field'] = 'field_civievent_event_type_value';
  $handler->display->display_options['filters']['field_civievent_event_type_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_civievent_event_type_value_1']['value'] = array(
    'Private / Internal Events' => 'Private / Internal Events',
  );
  $handler->display->display_options['filters']['field_civievent_event_type_value_1']['group'] = 1;
  /* Filter criterion: Content: Event Type (field_civievent_event_type) */
  $handler->display->display_options['filters']['field_civievent_event_type_value']['id'] = 'field_civievent_event_type_value';
  $handler->display->display_options['filters']['field_civievent_event_type_value']['table'] = 'field_data_field_civievent_event_type';
  $handler->display->display_options['filters']['field_civievent_event_type_value']['field'] = 'field_civievent_event_type_value';
  $handler->display->display_options['filters']['field_civievent_event_type_value']['value'] = array(
    'all' => 'all',
    'General Event' => 'General Event',
    'Orientation Sessions' => 'Orientation Sessions',
    'Alumni Events / Reunions' => 'Alumni Events / Reunions',
    'Seminars / Lectures' => 'Seminars / Lectures',
  );
  $handler->display->display_options['filters']['field_civievent_event_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_civievent_event_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_civievent_event_type_value']['expose']['operator_id'] = 'field_civievent_event_type_value_op';
  $handler->display->display_options['filters']['field_civievent_event_type_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_civievent_event_type_value']['expose']['operator'] = 'field_civievent_event_type_value_op';
  $handler->display->display_options['filters']['field_civievent_event_type_value']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_civievent_event_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_civievent_event_type_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_civievent_event_type_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Start Date (field_civievent_start_date) */
  $handler->display->display_options['filters']['field_civievent_start_date_value']['id'] = 'field_civievent_start_date_value';
  $handler->display->display_options['filters']['field_civievent_start_date_value']['table'] = 'field_data_field_civievent_start_date';
  $handler->display->display_options['filters']['field_civievent_start_date_value']['field'] = 'field_civievent_start_date_value';
  $handler->display->display_options['filters']['field_civievent_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_civievent_start_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_civievent_start_date_value']['expose']['operator_id'] = 'field_civievent_start_date_value_op';
  $handler->display->display_options['filters']['field_civievent_start_date_value']['expose']['label'] = 'Start Date';
  $handler->display->display_options['filters']['field_civievent_start_date_value']['expose']['operator'] = 'field_civievent_start_date_value_op';
  $handler->display->display_options['filters']['field_civievent_start_date_value']['expose']['identifier'] = 'field_civievent_start_date_value';
  $handler->display->display_options['filters']['field_civievent_start_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_civievent_start_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_civievent_start_date_value']['year_range'] = '-0:+1';
  $handler->display->display_options['path'] = 'events';

  /* Display: Alumni Events / Reunions */
  $handler = $view->new_display('page', 'Alumni Events / Reunions', 'page_1');
  $handler->display->display_options['path'] = 'alumni/events';
  $export['civievent_display'] = $view;

  return $export;
}
