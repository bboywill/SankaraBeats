<?php

function repro_form_system_theme_settings_alter(&$form, $form_state) {

  $form['advansed_theme_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Advansed Theme Settings'),
  );

  $form['advansed_theme_settings']['socacc'] = array(
    '#type' => 'fieldset',
    '#title' => t('Accounts'),
  );

  $form['advansed_theme_settings']['socacc']['sankara_twitter'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter'),
    '#default_value' => theme_get_setting('sankara_twitter'),
  );

  $form['advansed_theme_settings']['socacc']['sankara_youtube'] = array(
    '#type' => 'textfield',
    '#title' => t('Youtube'),
    '#default_value' => theme_get_setting('sankara_youtube'),
  );

  $form['advansed_theme_settings']['socacc']['sankara_contact'] = array(
    '#type' => 'textfield',
    '#title' => t('Contact'),
    '#default_value' => theme_get_setting('sankara_contact'),
  );
  
  $form['advansed_theme_settings']['socacc']['sankara_facebook'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook'),
    '#default_value' => theme_get_setting('sankara_facebook'),
  );

}
