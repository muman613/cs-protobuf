/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.3 at Mon Aug 12 12:04:02 2019. */

#ifndef PB_XPRESSHW_PB_H_INCLUDED
#define PB_XPRESSHW_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _XpressPumpStatus {
    float milk_front_pump_ma;
    float milk_rear_pump_ma;
    float syrup_pump_1_ma;
    float syrup_pump_2_ma;
    float syrup_pump_3_ma;
    float syrup_pump_4_ma;
    float syrup_pump_5_ma;
    float syrup_pump_6_ma;
    float syrup_pump_7_ma;
/* @@protoc_insertion_point(struct:XpressPumpStatus) */
} XpressPumpStatus;

typedef struct _XpressSwitchStatus {
    bool switch_left_panel_open;
    bool switch_upper_steam_wet;
    bool switch_lower_steam_wet;
    bool switch_steam_temp_high_limit;
/* @@protoc_insertion_point(struct:XpressSwitchStatus) */
} XpressSwitchStatus;

typedef struct _XpressTempStatus {
    float steam_tank_temp_c;
    float steam_wand_temp_c;
    float refer_inside_temp_c;
    float refer_cold_sink_temp_c;
    float refer_hot_sink_temp_c;
/* @@protoc_insertion_point(struct:XpressTempStatus) */
} XpressTempStatus;

typedef struct _XpressValveStatus {
    bool valve_center_steam_open;
    bool valve_left_steam_open;
    bool valve_right_steam_open;
    bool valve_steam_fill_open;
    bool valve_steam_purge_open;
    bool valve_milk_open;
    bool valve_alt_milk_open;
    bool valve_latte_air_open;
    bool valve_latte_cap_open;
/* @@protoc_insertion_point(struct:XpressValveStatus) */
} XpressValveStatus;

typedef struct _XpressHWStatus {
    XpressValveStatus valve;
    XpressSwitchStatus switches;
    XpressTempStatus temp;
    XpressPumpStatus pump;
    uint32_t unix_time;
/* @@protoc_insertion_point(struct:XpressHWStatus) */
} XpressHWStatus;

/* Default values for struct fields */

/* Initializer values for message structs */
#define XpressHWStatus_init_default              {XpressValveStatus_init_default, XpressSwitchStatus_init_default, XpressTempStatus_init_default, XpressPumpStatus_init_default, 0}
#define XpressValveStatus_init_default           {0, 0, 0, 0, 0, 0, 0, 0, 0}
#define XpressSwitchStatus_init_default          {0, 0, 0, 0}
#define XpressTempStatus_init_default            {0, 0, 0, 0, 0}
#define XpressPumpStatus_init_default            {0, 0, 0, 0, 0, 0, 0, 0, 0}
#define XpressHWStatus_init_zero                 {XpressValveStatus_init_zero, XpressSwitchStatus_init_zero, XpressTempStatus_init_zero, XpressPumpStatus_init_zero, 0}
#define XpressValveStatus_init_zero              {0, 0, 0, 0, 0, 0, 0, 0, 0}
#define XpressSwitchStatus_init_zero             {0, 0, 0, 0}
#define XpressTempStatus_init_zero               {0, 0, 0, 0, 0}
#define XpressPumpStatus_init_zero               {0, 0, 0, 0, 0, 0, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define XpressPumpStatus_milk_front_pump_ma_tag  1
#define XpressPumpStatus_milk_rear_pump_ma_tag   2
#define XpressPumpStatus_syrup_pump_1_ma_tag     3
#define XpressPumpStatus_syrup_pump_2_ma_tag     4
#define XpressPumpStatus_syrup_pump_3_ma_tag     5
#define XpressPumpStatus_syrup_pump_4_ma_tag     6
#define XpressPumpStatus_syrup_pump_5_ma_tag     7
#define XpressPumpStatus_syrup_pump_6_ma_tag     8
#define XpressPumpStatus_syrup_pump_7_ma_tag     9
#define XpressSwitchStatus_switch_left_panel_open_tag 1
#define XpressSwitchStatus_switch_upper_steam_wet_tag 2
#define XpressSwitchStatus_switch_lower_steam_wet_tag 3
#define XpressSwitchStatus_switch_steam_temp_high_limit_tag 4
#define XpressTempStatus_steam_tank_temp_c_tag   1
#define XpressTempStatus_steam_wand_temp_c_tag   2
#define XpressTempStatus_refer_inside_temp_c_tag 3
#define XpressTempStatus_refer_cold_sink_temp_c_tag 4
#define XpressTempStatus_refer_hot_sink_temp_c_tag 5
#define XpressValveStatus_valve_center_steam_open_tag 1
#define XpressValveStatus_valve_left_steam_open_tag 2
#define XpressValveStatus_valve_right_steam_open_tag 3
#define XpressValveStatus_valve_steam_fill_open_tag 4
#define XpressValveStatus_valve_steam_purge_open_tag 5
#define XpressValveStatus_valve_milk_open_tag    6
#define XpressValveStatus_valve_alt_milk_open_tag 7
#define XpressValveStatus_valve_latte_air_open_tag 8
#define XpressValveStatus_valve_latte_cap_open_tag 9
#define XpressHWStatus_valve_tag                 1
#define XpressHWStatus_switches_tag              2
#define XpressHWStatus_temp_tag                  3
#define XpressHWStatus_pump_tag                  4
#define XpressHWStatus_unix_time_tag             5

/* Struct field encoding specification for nanopb */
extern const pb_field_t XpressHWStatus_fields[6];
extern const pb_field_t XpressValveStatus_fields[10];
extern const pb_field_t XpressSwitchStatus_fields[5];
extern const pb_field_t XpressTempStatus_fields[6];
extern const pb_field_t XpressPumpStatus_fields[10];

/* Maximum encoded size of messages (where known) */
#define XpressHWStatus_size                      110
#define XpressValveStatus_size                   18
#define XpressSwitchStatus_size                  8
#define XpressTempStatus_size                    25
#define XpressPumpStatus_size                    45

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define XPRESSHW_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
