/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.3 at Mon Aug 12 12:03:43 2019. */

#include "Controller.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t Version_fields[6] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, Version, major, major, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, Version, minor, major, 0),
    PB_FIELD(  3, UINT32  , REQUIRED, STATIC  , OTHER, Version, build_num, minor, 0),
    PB_FIELD(  4, STRING  , REQUIRED, STATIC  , OTHER, Version, date, build_num, 0),
    PB_FIELD(  5, STRING  , REQUIRED, STATIC  , OTHER, Version, time, date, 0),
    PB_LAST_FIELD
};

const pb_field_t Event_fields[5] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, Event, unix_time, unix_time, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, Event, sub_seconds, unix_time, 0),
    PB_FIELD(  3, UENUM   , REQUIRED, STATIC  , OTHER, Event, type, sub_seconds, 0),
    PB_FIELD(  4, UINT32  , REQUIRED, STATIC  , OTHER, Event, event_id, type, 0),
    PB_LAST_FIELD
};

const pb_field_t DrinkStatus_fields[2] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, DrinkStatus, extraction_time_ms, extraction_time_ms, 0),
    PB_LAST_FIELD
};

const pb_field_t GroupMotorStatus_fields[6] = {
    PB_FIELD(  1, FLOAT   , REQUIRED, STATIC  , FIRST, GroupMotorStatus, upper_piston_ma, upper_piston_ma, 0),
    PB_FIELD(  2, FLOAT   , REQUIRED, STATIC  , OTHER, GroupMotorStatus, upper_piston_position, upper_piston_ma, 0),
    PB_FIELD(  3, FLOAT   , REQUIRED, STATIC  , OTHER, GroupMotorStatus, lower_piston_ma, upper_piston_position, 0),
    PB_FIELD(  4, FLOAT   , REQUIRED, STATIC  , OTHER, GroupMotorStatus, lower_piston_position, lower_piston_ma, 0),
    PB_FIELD(  5, FLOAT   , REQUIRED, STATIC  , OTHER, GroupMotorStatus, temperature, lower_piston_position, 0),
    PB_LAST_FIELD
};

const pb_field_t PumpStatus_fields[6] = {
    PB_FIELD(  1, FLOAT   , REQUIRED, STATIC  , FIRST, PumpStatus, pre_pressure_psi, pre_pressure_psi, 0),
    PB_FIELD(  2, FLOAT   , REQUIRED, STATIC  , OTHER, PumpStatus, nozzle_pressure_psi, pre_pressure_psi, 0),
    PB_FIELD(  3, FLOAT   , REQUIRED, STATIC  , OTHER, PumpStatus, nitro_water_ml, nozzle_pressure_psi, 0),
    PB_FIELD(  4, FLOAT   , REQUIRED, STATIC  , OTHER, PumpStatus, tank_temp_c, nitro_water_ml, 0),
    PB_FIELD(  5, FLOAT   , REQUIRED, STATIC  , OTHER, PumpStatus, post_pressure_psi, tank_temp_c, 0),
    PB_LAST_FIELD
};

const pb_field_t GrinderStatus_fields[2] = {
    PB_FIELD(  8, UINT32  , REQUIRED, STATIC  , FIRST, GrinderStatus, grind_encoder_count, grind_encoder_count, 0),
    PB_LAST_FIELD
};

const pb_field_t ValvesState_fields[6] = {
    PB_FIELD(  1, BOOL    , REQUIRED, STATIC  , FIRST, ValvesState, clean_open, clean_open, 0),
    PB_FIELD(  2, BOOL    , REQUIRED, STATIC  , OTHER, ValvesState, dispense_open, clean_open, 0),
    PB_FIELD(  3, BOOL    , REQUIRED, STATIC  , OTHER, ValvesState, unused_open, dispense_open, 0),
    PB_FIELD(  4, BOOL    , REQUIRED, STATIC  , OTHER, ValvesState, hot_water_open, unused_open, 0),
    PB_FIELD(  5, BOOL    , REQUIRED, STATIC  , OTHER, ValvesState, cold_water_open, hot_water_open, 0),
    PB_LAST_FIELD
};

const pb_field_t SwitchStatus_fields[4] = {
    PB_FIELD(  1, BOOL    , REQUIRED, STATIC  , FIRST, SwitchStatus, front_panel_open, front_panel_open, 0),
    PB_FIELD(  2, BOOL    , REQUIRED, STATIC  , OTHER, SwitchStatus, service_mode, front_panel_open, 0),
    PB_FIELD(  3, BOOL    , REQUIRED, STATIC  , OTHER, SwitchStatus, ground_bin_out, service_mode, 0),
    PB_LAST_FIELD
};

const pb_field_t ControllerPCB_fields[6] = {
    PB_FIELD(  1, FLOAT   , REQUIRED, STATIC  , FIRST, ControllerPCB, node_3_3, node_3_3, 0),
    PB_FIELD(  2, FLOAT   , REQUIRED, STATIC  , OTHER, ControllerPCB, node_5, node_3_3, 0),
    PB_FIELD(  3, FLOAT   , REQUIRED, STATIC  , OTHER, ControllerPCB, node_24, node_5, 0),
    PB_FIELD(  4, FLOAT   , REQUIRED, STATIC  , OTHER, ControllerPCB, pcb_temp, node_24, 0),
    PB_FIELD(  5, FLOAT   , OPTIONAL, STATIC  , OTHER, ControllerPCB, input_vac, pcb_temp, 0),
    PB_LAST_FIELD
};

const pb_field_t BuiltInTests_fields[50] = {
    PB_FIELD(  1, BOOL    , REQUIRED, STATIC  , FIRST, BuiltInTests, invalid_recipe_file, invalid_recipe_file, 0),
    PB_FIELD(  2, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, node_3_3_voltage_fault, invalid_recipe_file, 0),
    PB_FIELD(  3, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, invalid_update, node_3_3_voltage_fault, 0),
    PB_FIELD(  4, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, internal_flash_fault, invalid_update, 0),
    PB_FIELD(  5, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, eeprom_fault, internal_flash_fault, 0),
    PB_FIELD(  6, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, valve_feedback_fault, eeprom_fault, 0),
    PB_FIELD(  7, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, invalid_recipe_id, valve_feedback_fault, 0),
    PB_FIELD(  8, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, node_5_voltage_fault, invalid_recipe_id, 0),
    PB_FIELD(  9, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, node_24_voltage_fault, node_5_voltage_fault, 0),
    PB_FIELD( 40, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, water_level_low, node_24_voltage_fault, 0),
    PB_FIELD( 41, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, water_temp_fault, water_level_low, 0),
    PB_FIELD( 42, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, pump_overcurrent_fault, water_temp_fault, 0),
    PB_FIELD( 43, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, brew_feedback_fault, pump_overcurrent_fault, 0),
    PB_FIELD( 44, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, clean_feedback_fault, brew_feedback_fault, 0),
    PB_FIELD( 45, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, hot_feedback_fault, clean_feedback_fault, 0),
    PB_FIELD( 46, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, drain_feedback_fault, hot_feedback_fault, 0),
    PB_FIELD( 47, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, dispense_feedback_fault, drain_feedback_fault, 0),
    PB_FIELD( 48, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, water_pressure_low, dispense_feedback_fault, 0),
    PB_FIELD( 49, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, low_hot_flow, water_pressure_low, 0),
    PB_FIELD( 50, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, low_cold_flow, low_hot_flow, 0),
    PB_FIELD( 51, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, tank_fill_timeout, low_cold_flow, 0),
    PB_FIELD( 52, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, tank_warm_timeout, tank_fill_timeout, 0),
    PB_FIELD( 80, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, grinder_0_low_beans, tank_warm_timeout, 0),
    PB_FIELD( 81, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, grinder_1_low_beans, grinder_0_low_beans, 0),
    PB_FIELD( 82, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, grinder_2_low_beans, grinder_1_low_beans, 0),
    PB_FIELD( 83, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, grinder_3_low_beans, grinder_2_low_beans, 0),
    PB_FIELD( 84, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, grinder_0_low_speed, grinder_3_low_beans, 0),
    PB_FIELD( 85, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, grinder_1_low_speed, grinder_0_low_speed, 0),
    PB_FIELD( 86, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, grinder_2_low_speed, grinder_1_low_speed, 0),
    PB_FIELD( 87, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, grinder_3_low_speed, grinder_2_low_speed, 0),
    PB_FIELD(120, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, upper_piston_ic_fault, grinder_3_low_speed, 0),
    PB_FIELD(121, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, lower_piston_ic_fault, upper_piston_ic_fault, 0),
    PB_FIELD(122, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, upper_piston_overcurrent, lower_piston_ic_fault, 0),
    PB_FIELD(123, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, lower_piston_overcurrent, upper_piston_overcurrent, 0),
    PB_FIELD(124, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, lower_uncalibrated, lower_piston_overcurrent, 0),
    PB_FIELD(125, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, sweep_uncalibrated, lower_uncalibrated, 0),
    PB_FIELD(126, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, sweep_ic_fault, sweep_uncalibrated, 0),
    PB_FIELD(127, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, group_temp_fault, sweep_ic_fault, 0),
    PB_FIELD(128, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, upper_uncalibrated, group_temp_fault, 0),
    PB_FIELD(129, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, lower_drive_timeout, upper_uncalibrated, 0),
    PB_FIELD(130, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, upper_drive_timeout, lower_drive_timeout, 0),
    PB_FIELD(131, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, upper_drive_failed, upper_drive_timeout, 0),
    PB_FIELD(132, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, lower_drive_failed, upper_drive_failed, 0),
    PB_FIELD(133, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, group_warm_timeout, lower_drive_failed, 0),
    PB_FIELD(160, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, hw_inhibited, group_warm_timeout, 0),
    PB_FIELD(161, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, sw_inhibited, hw_inhibited, 0),
    PB_FIELD(200, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, recipe_failed, sw_inhibited, 0),
    PB_FIELD(201, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, update_failed, recipe_failed, 0),
    PB_FIELD(202, BOOL    , REQUIRED, STATIC  , OTHER, BuiltInTests, recipe_cancelled, update_failed, 0),
    PB_LAST_FIELD
};


















/* @@protoc_insertion_point(eof) */
