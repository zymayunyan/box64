#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

//GO(xcb_xkb_action_end, 
//GO(xcb_xkb_action_next, 
//GO(xcb_xkb_behavior_end, 
//GO(xcb_xkb_behavior_next, 
//GO(xcb_xkb_bell, 
//GO(xcb_xkb_bell_checked, 
//GO(xcb_xkb_bell_class_spec_end, 
//GO(xcb_xkb_bell_class_spec_next, 
//GO(xcb_xkb_common_behavior_end, 
//GO(xcb_xkb_common_behavior_next, 
//GO(xcb_xkb_counted_string_16_alignment_pad, 
//GO(xcb_xkb_counted_string_16_alignment_pad_end, 
//GO(xcb_xkb_counted_string_16_alignment_pad_length, 
//GO(xcb_xkb_counted_string_16_end, 
//GO(xcb_xkb_counted_string_16_next, 
//GO(xcb_xkb_counted_string_16_sizeof, 
//GO(xcb_xkb_counted_string_16_string, 
//GO(xcb_xkb_counted_string_16_string_end, 
//GO(xcb_xkb_counted_string_16_string_length, 
//GO(xcb_xkb_default_behavior_end, 
//GO(xcb_xkb_default_behavior_next, 
//GO(xcb_xkb_device_led_info_end, 
//GO(xcb_xkb_device_led_info_maps, 
//GO(xcb_xkb_device_led_info_maps_iterator, 
//GO(xcb_xkb_device_led_info_maps_length, 
//GO(xcb_xkb_device_led_info_names, 
//GO(xcb_xkb_device_led_info_names_end, 
//GO(xcb_xkb_device_led_info_names_length, 
//GO(xcb_xkb_device_led_info_next, 
//GO(xcb_xkb_device_led_info_sizeof, 
//GO(xcb_xkb_device_spec_end, 
//GO(xcb_xkb_device_spec_next, 
//GO(xcb_xkb_get_compat_map, 
//GO(xcb_xkb_get_compat_map_group_rtrn, 
//GO(xcb_xkb_get_compat_map_group_rtrn_iterator, 
//GO(xcb_xkb_get_compat_map_group_rtrn_length, 
//GO(xcb_xkb_get_compat_map_reply, 
//GO(xcb_xkb_get_compat_map_si_rtrn, 
//GO(xcb_xkb_get_compat_map_si_rtrn_iterator, 
//GO(xcb_xkb_get_compat_map_si_rtrn_length, 
//GO(xcb_xkb_get_compat_map_sizeof, 
//GO(xcb_xkb_get_compat_map_unchecked, 
//GO(xcb_xkb_get_controls, 
//GO(xcb_xkb_get_controls_reply, 
//GO(xcb_xkb_get_controls_unchecked, 
//GO(xcb_xkb_get_device_info, 
//GO(xcb_xkb_get_device_info_btn_actions, 
//GO(xcb_xkb_get_device_info_btn_actions_iterator, 
//GO(xcb_xkb_get_device_info_btn_actions_length, 
//GO(xcb_xkb_get_device_info_leds_iterator, 
//GO(xcb_xkb_get_device_info_leds_length, 
//GO(xcb_xkb_get_device_info_name, 
//GO(xcb_xkb_get_device_info_name_end, 
//GO(xcb_xkb_get_device_info_name_length, 
//GO(xcb_xkb_get_device_info_reply, 
//GO(xcb_xkb_get_device_info_sizeof, 
//GO(xcb_xkb_get_device_info_unchecked, 
//GO(xcb_xkb_get_indicator_map, 
//GO(xcb_xkb_get_indicator_map_maps, 
//GO(xcb_xkb_get_indicator_map_maps_iterator, 
//GO(xcb_xkb_get_indicator_map_maps_length, 
//GO(xcb_xkb_get_indicator_map_reply, 
//GO(xcb_xkb_get_indicator_map_sizeof, 
//GO(xcb_xkb_get_indicator_map_unchecked, 
//GO(xcb_xkb_get_indicator_state, 
//GO(xcb_xkb_get_indicator_state_reply, 
//GO(xcb_xkb_get_indicator_state_unchecked, 
//GO(xcb_xkb_get_kbd_by_name, 
//GO(xcb_xkb_get_kbd_by_name_replies, 
//GO(xcb_xkb_get_kbd_by_name_replies_compat_map_group_rtrn, 
//GO(xcb_xkb_get_kbd_by_name_replies_compat_map_group_rtrn_iterator, 
//GO(xcb_xkb_get_kbd_by_name_replies_compat_map_group_rtrn_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_compat_map_si_rtrn, 
//GO(xcb_xkb_get_kbd_by_name_replies_compat_map_si_rtrn_iterator, 
//GO(xcb_xkb_get_kbd_by_name_replies_compat_map_si_rtrn_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_geometry_label_font, 
//GO(xcb_xkb_get_kbd_by_name_replies_indicator_maps_maps, 
//GO(xcb_xkb_get_kbd_by_name_replies_indicator_maps_maps_iterator, 
//GO(xcb_xkb_get_kbd_by_name_replies_indicator_maps_maps_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_groups, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_groups_end, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_groups_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_indicator_names, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_indicator_names_end, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_indicator_names_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_key_aliases, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_key_aliases_iterator, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_key_aliases_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_key_names, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_key_names_iterator, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_key_names_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_kt_level_names, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_kt_level_names_end, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_kt_level_names_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_n_levels_per_type, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_n_levels_per_type_end, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_n_levels_per_type_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_radio_group_names, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_radio_group_names_end, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_radio_group_names_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_serialize, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_sizeof, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_type_names, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_type_names_end, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_type_names_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_unpack, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_virtual_mod_names, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_virtual_mod_names_end, 
//GO(xcb_xkb_get_kbd_by_name_replies_key_names_value_list_virtual_mod_names_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_serialize, 
//GO(xcb_xkb_get_kbd_by_name_replies_sizeof, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_acts_rtrn_acts, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_acts_rtrn_acts_iterator, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_acts_rtrn_acts_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_acts_rtrn_count, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_acts_rtrn_count_end, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_acts_rtrn_count_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_behaviors_rtrn, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_behaviors_rtrn_iterator, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_behaviors_rtrn_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_explicit_rtrn, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_explicit_rtrn_iterator, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_explicit_rtrn_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_modmap_rtrn, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_modmap_rtrn_iterator, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_modmap_rtrn_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_serialize, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_sizeof, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_syms_rtrn_iterator, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_syms_rtrn_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_types_rtrn_iterator, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_types_rtrn_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_unpack, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_vmodmap_rtrn, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_vmodmap_rtrn_iterator, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_vmodmap_rtrn_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_vmods_rtrn, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_vmods_rtrn_end, 
//GO(xcb_xkb_get_kbd_by_name_replies_types_map_vmods_rtrn_length, 
//GO(xcb_xkb_get_kbd_by_name_replies_unpack, 
//GO(xcb_xkb_get_kbd_by_name_reply, 
//GO(xcb_xkb_get_kbd_by_name_sizeof, 
//GO(xcb_xkb_get_kbd_by_name_unchecked, 
GO(xcb_xkb_get_map, uFpWWWCCCCCCCCWCCCCCC)
GO(xcb_xkb_get_map_map, pFp)
//GO(xcb_xkb_get_map_map_acts_rtrn_acts, 
//GO(xcb_xkb_get_map_map_acts_rtrn_acts_iterator, 
//GO(xcb_xkb_get_map_map_acts_rtrn_acts_length, 
//GO(xcb_xkb_get_map_map_acts_rtrn_count, 
//GO(xcb_xkb_get_map_map_acts_rtrn_count_end, 
//GO(xcb_xkb_get_map_map_acts_rtrn_count_length, 
//GO(xcb_xkb_get_map_map_behaviors_rtrn, 
//GO(xcb_xkb_get_map_map_behaviors_rtrn_iterator, 
//GO(xcb_xkb_get_map_map_behaviors_rtrn_length, 
//GO(xcb_xkb_get_map_map_explicit_rtrn, 
//GO(xcb_xkb_get_map_map_explicit_rtrn_iterator, 
//GO(xcb_xkb_get_map_map_explicit_rtrn_length, 
//GO(xcb_xkb_get_map_map_modmap_rtrn, 
//GO(xcb_xkb_get_map_map_modmap_rtrn_iterator, 
//GO(xcb_xkb_get_map_map_modmap_rtrn_length, 
//GO(xcb_xkb_get_map_map_serialize, 
//GO(xcb_xkb_get_map_map_sizeof, 
//GO(xcb_xkb_get_map_map_syms_rtrn_iterator, 
//GO(xcb_xkb_get_map_map_syms_rtrn_length, 
//GO(xcb_xkb_get_map_map_types_rtrn_iterator, 
//GO(xcb_xkb_get_map_map_types_rtrn_length, 
GO(xcb_xkb_get_map_map_unpack, iFpCCCWCWCCCWp)
//GO(xcb_xkb_get_map_map_vmodmap_rtrn, 
//GO(xcb_xkb_get_map_map_vmodmap_rtrn_iterator, 
//GO(xcb_xkb_get_map_map_vmodmap_rtrn_length, 
//GO(xcb_xkb_get_map_map_vmods_rtrn, 
//GO(xcb_xkb_get_map_map_vmods_rtrn_end, 
//GO(xcb_xkb_get_map_map_vmods_rtrn_length, 
GO(xcb_xkb_get_map_reply, pFpup)
//GO(xcb_xkb_get_map_sizeof, 
//GO(xcb_xkb_get_map_unchecked, 
//GO(xcb_xkb_get_named_indicator, 
//GO(xcb_xkb_get_named_indicator_reply, 
//GO(xcb_xkb_get_named_indicator_unchecked, 
GO(xcb_xkb_get_names, uFpWu)
GO(xcb_xkb_get_names_reply, pFpup)
//GO(xcb_xkb_get_names_sizeof, 
GO(xcb_xkb_get_names_unchecked, uFpWu)
GO(xcb_xkb_get_names_value_list, pFp)
//GO(xcb_xkb_get_names_value_list_groups, 
//GO(xcb_xkb_get_names_value_list_groups_end, 
//GO(xcb_xkb_get_names_value_list_groups_length, 
//GO(xcb_xkb_get_names_value_list_indicator_names, 
//GO(xcb_xkb_get_names_value_list_indicator_names_end, 
//GO(xcb_xkb_get_names_value_list_indicator_names_length, 
//GO(xcb_xkb_get_names_value_list_key_aliases, 
//GO(xcb_xkb_get_names_value_list_key_aliases_iterator, 
//GO(xcb_xkb_get_names_value_list_key_aliases_length, 
//GO(xcb_xkb_get_names_value_list_key_names, 
//GO(xcb_xkb_get_names_value_list_key_names_iterator, 
//GO(xcb_xkb_get_names_value_list_key_names_length, 
//GO(xcb_xkb_get_names_value_list_kt_level_names, 
//GO(xcb_xkb_get_names_value_list_kt_level_names_end, 
//GO(xcb_xkb_get_names_value_list_kt_level_names_length, 
//GO(xcb_xkb_get_names_value_list_n_levels_per_type, 
//GO(xcb_xkb_get_names_value_list_n_levels_per_type_end, 
//GO(xcb_xkb_get_names_value_list_n_levels_per_type_length, 
//GO(xcb_xkb_get_names_value_list_radio_group_names, 
//GO(xcb_xkb_get_names_value_list_radio_group_names_end, 
//GO(xcb_xkb_get_names_value_list_radio_group_names_length, 
//GO(xcb_xkb_get_names_value_list_serialize, 
//GO(xcb_xkb_get_names_value_list_sizeof, 
//GO(xcb_xkb_get_names_value_list_type_names, 
//GO(xcb_xkb_get_names_value_list_type_names_end, 
//GO(xcb_xkb_get_names_value_list_type_names_length, 
GO(xcb_xkb_get_names_value_list_unpack, iFpCuWCCCCup)
//GO(xcb_xkb_get_names_value_list_virtual_mod_names, 
//GO(xcb_xkb_get_names_value_list_virtual_mod_names_end, 
//GO(xcb_xkb_get_names_value_list_virtual_mod_names_length, 
//GO(xcb_xkb_get_state, 
//GO(xcb_xkb_get_state_reply, 
//GO(xcb_xkb_get_state_unchecked, 
DATA(xcb_xkb_id, 2*sizeof(void*))
//GO(xcb_xkb_id_spec_end, 
//GO(xcb_xkb_id_spec_next, 
//GO(xcb_xkb_indicator_map_end, 
//GO(xcb_xkb_indicator_map_next, 
//GO(xcb_xkb_key_alias_end, 
//GO(xcb_xkb_key_alias_next, 
//GO(xcb_xkb_key_end, 
//GO(xcb_xkb_key_mod_map_end, 
//GO(xcb_xkb_key_mod_map_next, 
//GO(xcb_xkb_key_name_end, 
//GO(xcb_xkb_key_name_next, 
//GO(xcb_xkb_key_next, 
//GO(xcb_xkb_key_sym_map_end, 
//GO(xcb_xkb_key_sym_map_next, 
//GO(xcb_xkb_key_sym_map_sizeof, 
//GO(xcb_xkb_key_sym_map_syms, 
//GO(xcb_xkb_key_sym_map_syms_end, 
//GO(xcb_xkb_key_sym_map_syms_length, 
//GO(xcb_xkb_key_type_end, 
//GO(xcb_xkb_key_type_map, 
//GO(xcb_xkb_key_type_map_iterator, 
//GO(xcb_xkb_key_type_map_length, 
//GO(xcb_xkb_key_type_next, 
//GO(xcb_xkb_key_type_preserve, 
//GO(xcb_xkb_key_type_preserve_iterator, 
//GO(xcb_xkb_key_type_preserve_length, 
//GO(xcb_xkb_key_type_sizeof, 
//GO(xcb_xkb_key_v_mod_map_end, 
//GO(xcb_xkb_key_v_mod_map_next, 
//GO(xcb_xkb_kt_map_entry_end, 
//GO(xcb_xkb_kt_map_entry_next, 
//GO(xcb_xkb_kt_set_map_entry_end, 
//GO(xcb_xkb_kt_set_map_entry_next, 
//GO(xcb_xkb_latch_lock_state, 
//GO(xcb_xkb_latch_lock_state_checked, 
//GO(xcb_xkb_led_class_spec_end, 
//GO(xcb_xkb_led_class_spec_next, 
//GO(xcb_xkb_list_components, 
//GO(xcb_xkb_list_components_compat_maps_iterator, 
//GO(xcb_xkb_list_components_compat_maps_length, 
//GO(xcb_xkb_list_components_geometries_iterator, 
//GO(xcb_xkb_list_components_geometries_length, 
//GO(xcb_xkb_list_components_keycodes_iterator, 
//GO(xcb_xkb_list_components_keycodes_length, 
//GO(xcb_xkb_list_components_keymaps_iterator, 
//GO(xcb_xkb_list_components_keymaps_length, 
//GO(xcb_xkb_list_components_reply, 
//GO(xcb_xkb_list_components_sizeof, 
//GO(xcb_xkb_list_components_symbols_iterator, 
//GO(xcb_xkb_list_components_symbols_length, 
//GO(xcb_xkb_list_components_types_iterator, 
//GO(xcb_xkb_list_components_types_length, 
//GO(xcb_xkb_list_components_unchecked, 
//GO(xcb_xkb_listing_end, 
//GO(xcb_xkb_listing_next, 
//GO(xcb_xkb_listing_sizeof, 
//GO(xcb_xkb_listing_string, 
//GO(xcb_xkb_listing_string_end, 
//GO(xcb_xkb_listing_string_length, 
//GO(xcb_xkb_lock_behavior_end, 
//GO(xcb_xkb_lock_behavior_next, 
//GO(xcb_xkb_mod_def_end, 
//GO(xcb_xkb_mod_def_next, 
//GO(xcb_xkb_outline_end, 
//GO(xcb_xkb_outline_next, 
//GO(xcb_xkb_outline_points, 
//GO(xcb_xkb_outline_points_iterator, 
//GO(xcb_xkb_outline_points_length, 
//GO(xcb_xkb_outline_sizeof, 
//GO(xcb_xkb_overlay_behavior_end, 
//GO(xcb_xkb_overlay_behavior_next, 
//GO(xcb_xkb_overlay_end, 
//GO(xcb_xkb_overlay_key_end, 
//GO(xcb_xkb_overlay_key_next, 
//GO(xcb_xkb_overlay_next, 
//GO(xcb_xkb_overlay_row_end, 
//GO(xcb_xkb_overlay_row_keys, 
//GO(xcb_xkb_overlay_row_keys_iterator, 
//GO(xcb_xkb_overlay_row_keys_length, 
//GO(xcb_xkb_overlay_row_next, 
//GO(xcb_xkb_overlay_rows_iterator, 
//GO(xcb_xkb_overlay_row_sizeof, 
//GO(xcb_xkb_overlay_rows_length, 
//GO(xcb_xkb_overlay_sizeof, 
//GO(xcb_xkb_per_client_flags, 
//GO(xcb_xkb_per_client_flags_reply, 
//GO(xcb_xkb_per_client_flags_unchecked, 
//GO(xcb_xkb_permament_lock_behavior_end, 
//GO(xcb_xkb_permament_lock_behavior_next, 
//GO(xcb_xkb_permament_overlay_behavior_end, 
//GO(xcb_xkb_permament_overlay_behavior_next, 
//GO(xcb_xkb_permament_radio_group_behavior_end, 
//GO(xcb_xkb_permament_radio_group_behavior_next, 
//GO(xcb_xkb_radio_group_behavior_end, 
//GO(xcb_xkb_radio_group_behavior_next, 
//GO(xcb_xkb_row_end, 
//GO(xcb_xkb_row_keys, 
//GO(xcb_xkb_row_keys_iterator, 
//GO(xcb_xkb_row_keys_length, 
//GO(xcb_xkb_row_next, 
//GO(xcb_xkb_row_sizeof, 
//GO(xcb_xkb_sa_action_message_end, 
//GO(xcb_xkb_sa_action_message_next, 
//GO(xcb_xkb_sa_device_btn_end, 
//GO(xcb_xkb_sa_device_btn_next, 
//GO(xcb_xkb_sa_device_valuator_end, 
//GO(xcb_xkb_sa_device_valuator_next, 
//GO(xcb_xkb_sa_iso_lock_end, 
//GO(xcb_xkb_sa_iso_lock_next, 
//GO(xcb_xkb_sa_latch_group_end, 
//GO(xcb_xkb_sa_latch_group_next, 
//GO(xcb_xkb_sa_latch_mods_end, 
//GO(xcb_xkb_sa_latch_mods_next, 
//GO(xcb_xkb_sa_lock_controls_end, 
//GO(xcb_xkb_sa_lock_controls_next, 
//GO(xcb_xkb_sa_lock_device_btn_end, 
//GO(xcb_xkb_sa_lock_device_btn_next, 
//GO(xcb_xkb_sa_lock_group_end, 
//GO(xcb_xkb_sa_lock_group_next, 
//GO(xcb_xkb_sa_lock_mods_end, 
//GO(xcb_xkb_sa_lock_mods_next, 
//GO(xcb_xkb_sa_lock_ptr_btn_end, 
//GO(xcb_xkb_sa_lock_ptr_btn_next, 
//GO(xcb_xkb_sa_move_ptr_end, 
//GO(xcb_xkb_sa_move_ptr_next, 
//GO(xcb_xkb_sa_no_action_end, 
//GO(xcb_xkb_sa_no_action_next, 
//GO(xcb_xkb_sa_ptr_btn_end, 
//GO(xcb_xkb_sa_ptr_btn_next, 
//GO(xcb_xkb_sa_redirect_key_end, 
//GO(xcb_xkb_sa_redirect_key_next, 
//GO(xcb_xkb_sa_set_controls_end, 
//GO(xcb_xkb_sa_set_controls_next, 
//GO(xcb_xkb_sa_set_group_end, 
//GO(xcb_xkb_sa_set_group_next, 
//GO(xcb_xkb_sa_set_mods_end, 
//GO(xcb_xkb_sa_set_mods_next, 
//GO(xcb_xkb_sa_set_ptr_dflt_end, 
//GO(xcb_xkb_sa_set_ptr_dflt_next, 
//GO(xcb_xkb_sa_switch_screen_end, 
//GO(xcb_xkb_sa_switch_screen_next, 
//GO(xcb_xkb_sa_terminate_end, 
//GO(xcb_xkb_sa_terminate_next, 
GO(xcb_xkb_select_events, uFpWWWWWWp)
//GO(xcb_xkb_select_events_aux, 
//GO(xcb_xkb_select_events_aux_checked, 
GO(xcb_xkb_select_events_checked, uFpWWWWWWp)
//GO(xcb_xkb_select_events_details, 
//GO(xcb_xkb_select_events_details_serialize, 
//GO(xcb_xkb_select_events_details_sizeof, 
//GO(xcb_xkb_select_events_details_unpack, 
//GO(xcb_xkb_select_events_sizeof, 
//GO(xcb_xkb_set_behavior_end, 
//GO(xcb_xkb_set_behavior_next, 
//GO(xcb_xkb_set_compat_map, 
//GO(xcb_xkb_set_compat_map_checked, 
//GO(xcb_xkb_set_compat_map_group_maps, 
//GO(xcb_xkb_set_compat_map_group_maps_iterator, 
//GO(xcb_xkb_set_compat_map_group_maps_length, 
//GO(xcb_xkb_set_compat_map_si, 
//GO(xcb_xkb_set_compat_map_si_iterator, 
//GO(xcb_xkb_set_compat_map_si_length, 
//GO(xcb_xkb_set_compat_map_sizeof, 
//GO(xcb_xkb_set_controls, 
//GO(xcb_xkb_set_controls_checked, 
//GO(xcb_xkb_set_debugging_flags, 
//GO(xcb_xkb_set_debugging_flags_reply, 
//GO(xcb_xkb_set_debugging_flags_sizeof, 
//GO(xcb_xkb_set_debugging_flags_unchecked, 
//GO(xcb_xkb_set_device_info, 
//GO(xcb_xkb_set_device_info_btn_actions, 
//GO(xcb_xkb_set_device_info_btn_actions_iterator, 
//GO(xcb_xkb_set_device_info_btn_actions_length, 
//GO(xcb_xkb_set_device_info_checked, 
//GO(xcb_xkb_set_device_info_leds_iterator, 
//GO(xcb_xkb_set_device_info_leds_length, 
//GO(xcb_xkb_set_device_info_sizeof, 
//GO(xcb_xkb_set_explicit_end, 
//GO(xcb_xkb_set_explicit_next, 
//GO(xcb_xkb_set_indicator_map, 
//GO(xcb_xkb_set_indicator_map_checked, 
//GO(xcb_xkb_set_indicator_map_maps, 
//GO(xcb_xkb_set_indicator_map_maps_iterator, 
//GO(xcb_xkb_set_indicator_map_maps_length, 
//GO(xcb_xkb_set_indicator_map_sizeof, 
//GO(xcb_xkb_set_key_type_end, 
//GO(xcb_xkb_set_key_type_entries, 
//GO(xcb_xkb_set_key_type_entries_iterator, 
//GO(xcb_xkb_set_key_type_entries_length, 
//GO(xcb_xkb_set_key_type_next, 
//GO(xcb_xkb_set_key_type_preserve_entries, 
//GO(xcb_xkb_set_key_type_preserve_entries_iterator, 
//GO(xcb_xkb_set_key_type_preserve_entries_length, 
//GO(xcb_xkb_set_key_type_sizeof, 
//GO(xcb_xkb_set_map, 
//GO(xcb_xkb_set_map_aux, 
//GO(xcb_xkb_set_map_aux_checked, 
//GO(xcb_xkb_set_map_checked, 
//GO(xcb_xkb_set_map_sizeof, 
//GO(xcb_xkb_set_map_values, 
//GO(xcb_xkb_set_map_values_actions, 
//GO(xcb_xkb_set_map_values_actions_count, 
//GO(xcb_xkb_set_map_values_actions_count_end, 
//GO(xcb_xkb_set_map_values_actions_count_length, 
//GO(xcb_xkb_set_map_values_actions_iterator, 
//GO(xcb_xkb_set_map_values_actions_length, 
//GO(xcb_xkb_set_map_values_behaviors, 
//GO(xcb_xkb_set_map_values_behaviors_iterator, 
//GO(xcb_xkb_set_map_values_behaviors_length, 
//GO(xcb_xkb_set_map_values_explicit, 
//GO(xcb_xkb_set_map_values_explicit_iterator, 
//GO(xcb_xkb_set_map_values_explicit_length, 
//GO(xcb_xkb_set_map_values_modmap, 
//GO(xcb_xkb_set_map_values_modmap_iterator, 
//GO(xcb_xkb_set_map_values_modmap_length, 
//GO(xcb_xkb_set_map_values_serialize, 
//GO(xcb_xkb_set_map_values_sizeof, 
//GO(xcb_xkb_set_map_values_syms_iterator, 
//GO(xcb_xkb_set_map_values_syms_length, 
//GO(xcb_xkb_set_map_values_types_iterator, 
//GO(xcb_xkb_set_map_values_types_length, 
//GO(xcb_xkb_set_map_values_unpack, 
//GO(xcb_xkb_set_map_values_vmodmap, 
//GO(xcb_xkb_set_map_values_vmodmap_iterator, 
//GO(xcb_xkb_set_map_values_vmodmap_length, 
//GO(xcb_xkb_set_map_values_vmods, 
//GO(xcb_xkb_set_map_values_vmods_end, 
//GO(xcb_xkb_set_map_values_vmods_length, 
//GO(xcb_xkb_set_named_indicator, 
//GO(xcb_xkb_set_named_indicator_checked, 
//GO(xcb_xkb_set_names, 
//GO(xcb_xkb_set_names_aux, 
//GO(xcb_xkb_set_names_aux_checked, 
//GO(xcb_xkb_set_names_checked, 
//GO(xcb_xkb_set_names_sizeof, 
//GO(xcb_xkb_set_names_values, 
//GO(xcb_xkb_set_names_values_groups, 
//GO(xcb_xkb_set_names_values_groups_end, 
//GO(xcb_xkb_set_names_values_groups_length, 
//GO(xcb_xkb_set_names_values_indicator_names, 
//GO(xcb_xkb_set_names_values_indicator_names_end, 
//GO(xcb_xkb_set_names_values_indicator_names_length, 
//GO(xcb_xkb_set_names_values_key_aliases, 
//GO(xcb_xkb_set_names_values_key_aliases_iterator, 
//GO(xcb_xkb_set_names_values_key_aliases_length, 
//GO(xcb_xkb_set_names_values_key_names, 
//GO(xcb_xkb_set_names_values_key_names_iterator, 
//GO(xcb_xkb_set_names_values_key_names_length, 
//GO(xcb_xkb_set_names_values_kt_level_names, 
//GO(xcb_xkb_set_names_values_kt_level_names_end, 
//GO(xcb_xkb_set_names_values_kt_level_names_length, 
//GO(xcb_xkb_set_names_values_n_levels_per_type, 
//GO(xcb_xkb_set_names_values_n_levels_per_type_end, 
//GO(xcb_xkb_set_names_values_n_levels_per_type_length, 
//GO(xcb_xkb_set_names_values_radio_group_names, 
//GO(xcb_xkb_set_names_values_radio_group_names_end, 
//GO(xcb_xkb_set_names_values_radio_group_names_length, 
//GO(xcb_xkb_set_names_values_serialize, 
//GO(xcb_xkb_set_names_values_sizeof, 
//GO(xcb_xkb_set_names_values_type_names, 
//GO(xcb_xkb_set_names_values_type_names_end, 
//GO(xcb_xkb_set_names_values_type_names_length, 
//GO(xcb_xkb_set_names_values_unpack, 
//GO(xcb_xkb_set_names_values_virtual_mod_names, 
//GO(xcb_xkb_set_names_values_virtual_mod_names_end, 
//GO(xcb_xkb_set_names_values_virtual_mod_names_length, 
//GO(xcb_xkb_shape_end, 
//GO(xcb_xkb_shape_next, 
//GO(xcb_xkb_shape_outlines_iterator, 
//GO(xcb_xkb_shape_outlines_length, 
//GO(xcb_xkb_shape_sizeof, 
//GO(xcb_xkb_si_action_end, 
//GO(xcb_xkb_si_action_next, 
//GO(xcb_xkb_string8_end, 
//GO(xcb_xkb_string8_next, 
//GO(xcb_xkb_sym_interpret_end, 
//GO(xcb_xkb_sym_interpret_next, 
GO(xcb_xkb_use_extension, uFpWW)
GO(xcb_xkb_use_extension_reply, pFpup)
GO(xcb_xkb_use_extension_unchecked, uFpWW)

