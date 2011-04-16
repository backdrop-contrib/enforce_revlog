<?php

/**
 * Enable or disable Enforce revlog.
 */
class enforce_revlog_context_reaction_active extends context_reaction {
  function options_form($context) {
    return array('enforce_revlog_active' => array('#type' => 'value', '#value' => TRUE));
  }

  function options_form_submit($values) {
    return array('enforce_revlog_active' => 1);
  }

  /**
   * Set global variable to indicate enforce_revlog status
   */
  function execute() {
    $contexts = context_active_contexts();
    foreach ($contexts as $context) {
      if (!empty($context->reactions['active'])) {

      global $enforce_revlog_active;
      $enforce_revlog_active = 1;

      }
    }
  }

}
