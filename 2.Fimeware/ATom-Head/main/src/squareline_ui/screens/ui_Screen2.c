// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Sysabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Sysabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Sysabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Sysabel, 25);
    lv_obj_set_y(ui_Sysabel, 2);
    lv_label_set_text(ui_Sysabel, "Sys: ");
    lv_obj_set_style_text_color(ui_Sysabel, lv_color_hex(0xA0E4FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Sysabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Sysabel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Sysabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Systext = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Systext, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Systext, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Systext, 65);
    lv_obj_set_y(ui_Systext, 2);
    lv_label_set_text(ui_Systext, "00000000000000000");
    lv_obj_set_style_text_color(ui_Systext, lv_color_hex(0x98E5FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Systext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Systext, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Systext, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OSlabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_OSlabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_OSlabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_OSlabel, 25);
    lv_obj_set_y(ui_OSlabel, 20);
    lv_label_set_text(ui_OSlabel, "OS: ");
    lv_obj_set_style_text_color(ui_OSlabel, lv_color_hex(0xA0E4FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_OSlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_OSlabel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_OSlabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OStext = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_OStext, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_OStext, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_OStext, 65);
    lv_obj_set_y(ui_OStext, 20);
    lv_label_set_text(ui_OStext, "1.0.0.000");
    lv_obj_set_style_text_color(ui_OStext, lv_color_hex(0xA0E4FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_OStext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_OStext, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_OStext, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SSIDlabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_SSIDlabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SSIDlabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SSIDlabel, 25);
    lv_obj_set_y(ui_SSIDlabel, 38);
    lv_label_set_text(ui_SSIDlabel, "SSID: ");
    lv_obj_set_style_text_color(ui_SSIDlabel, lv_color_hex(0xA0E4FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SSIDlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_SSIDlabel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SSIDlabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SSIDtext = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_SSIDtext, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SSIDtext, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SSIDtext, 65);
    lv_obj_set_y(ui_SSIDtext, 37);
    lv_label_set_text(ui_SSIDtext, "ATom-Bot");
    lv_obj_set_style_text_color(ui_SSIDtext, lv_color_hex(0xA0E4FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SSIDtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_SSIDtext, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SSIDtext, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IPlabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_IPlabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IPlabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IPlabel, 25);
    lv_obj_set_y(ui_IPlabel, 56);
    lv_label_set_text(ui_IPlabel, "IP: ");
    lv_obj_set_style_text_color(ui_IPlabel, lv_color_hex(0xA0E4FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IPlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_IPlabel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_IPlabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IPtext = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_IPtext, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IPtext, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IPtext, 65);
    lv_obj_set_y(ui_IPtext, 56);
    lv_label_set_text(ui_IPtext, "No IP address obtained");
    lv_obj_set_style_text_color(ui_IPtext, lv_color_hex(0x00FE4F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IPtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_IPtext, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_IPtext, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MAClabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_MAClabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MAClabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MAClabel, 25);
    lv_obj_set_y(ui_MAClabel, 74);
    lv_label_set_text(ui_MAClabel, "MAC:");
    lv_obj_set_style_text_color(ui_MAClabel, lv_color_hex(0xA0E4FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MAClabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_MAClabel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MAClabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MACtext = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_MACtext, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MACtext, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MACtext, 65);
    lv_obj_set_y(ui_MACtext, 74);
    lv_label_set_text(ui_MACtext, "00:00:00:00:00:00");
    lv_obj_set_style_text_color(ui_MACtext, lv_color_hex(0xA0E4FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MACtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_MACtext, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MACtext, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DISTlabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_DISTlabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DISTlabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DISTlabel, 25);
    lv_obj_set_y(ui_DISTlabel, 92);
    lv_label_set_text(ui_DISTlabel, "DIST:");
    lv_obj_set_style_text_color(ui_DISTlabel, lv_color_hex(0xA0E4FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DISTlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_DISTlabel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_DISTlabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DISTtext = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_DISTtext, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DISTtext, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DISTtext, 65);
    lv_obj_set_y(ui_DISTtext, 92);
    lv_label_set_text(ui_DISTtext, "xxmm");
    lv_obj_set_style_text_color(ui_DISTtext, lv_color_hex(0xA0E4FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DISTtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_DISTtext, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_DISTtext, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BAITlabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_BAITlabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BAITlabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BAITlabel, 25);
    lv_obj_set_y(ui_BAITlabel, 110);
    lv_label_set_text(ui_BAITlabel, "BAIT:");
    lv_obj_set_style_text_color(ui_BAITlabel, lv_color_hex(0xA0E4FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BAITlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_BAITlabel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BAITlabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BAITtext = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_BAITtext, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BAITtext, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BAITtext, 65);
    lv_obj_set_y(ui_BAITtext, 110);
    lv_label_set_text(ui_BAITtext, "5.00V");
    lv_obj_set_style_text_color(ui_BAITtext, lv_color_hex(0xA0E4FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BAITtext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_BAITtext, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BAITtext, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

}
