// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

void wifi_status_icon_in_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
void ui_event_Screen1(lv_event_t * e);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Spinner1;
extern lv_obj_t * ui_wifistalabel;
extern lv_obj_t * ui_imgconnSta;
// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
extern lv_obj_t * ui_Screen2;
extern lv_obj_t * ui_Sysabel;
extern lv_obj_t * ui_Systext;
extern lv_obj_t * ui_OSlabel;
extern lv_obj_t * ui_OStext;
extern lv_obj_t * ui_SSIDlabel;
extern lv_obj_t * ui_SSIDtext;
extern lv_obj_t * ui_IPlabel;
extern lv_obj_t * ui_IPtext;
extern lv_obj_t * ui_MAClabel;
extern lv_obj_t * ui_MACtext;
extern lv_obj_t * ui_DISTlabel;
extern lv_obj_t * ui_DISTtext;
extern lv_obj_t * ui_BAITlabel;
extern lv_obj_t * ui_BAITtext;
// SCREEN: ui_Screen3
void ui_Screen3_screen_init(void);
extern lv_obj_t * ui_Screen3;
extern lv_obj_t * ui_HeadArc;
extern lv_obj_t * ui_ArmSlider;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_connected_png);    // assets/connected.png
LV_IMG_DECLARE(ui_img_connect_fail_png);    // assets/connect_fail.png






void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
