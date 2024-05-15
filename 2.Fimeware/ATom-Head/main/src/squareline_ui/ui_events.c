// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include <string.h>
#include <esp_flash.h>
#include <nvs_flash.h>
#include "esp_log.h"
#include "app_joint.h"
#include "app_ui.h"

static const char *TAG = "ui_event";

void lv_setup_system(lv_event_t *e)
{
    // Your code here
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_VALUE_CHANGED)
    {
        bool connected_flag = lv_event_get_param(e);
        if (connected_flag == true)
            ui_set_wifi_icon_status(true);
        else
            ui_set_wifi_icon_status(false);
    }

    // just run once
    static bool init_flg = false;
    if (init_flg)
        return;
    init_flg = true;

    char err_msg[20];
    esp_err_t status;
    uint64_t unique_out_id;
    if ((status = esp_flash_read_unique_chip_id(NULL, &unique_out_id)) != ESP_OK)
        ESP_LOGE(TAG, "esp_flash_read_id error: %s", esp_err_to_name_r(status, err_msg, sizeof(err_msg)));
    else
        ESP_LOGI(TAG, "Chip unique out_id: %" PRId64 "", unique_out_id);

    char uni_base[18];
    sprintf(uni_base, "%lld", unique_out_id);
    lv_label_set_text(ui_Systext, uni_base);

    uint8_t has_conf_flag = 0;
    nvs_handle_t nvs_handle;
    nvs_open("parameter", NVS_READWRITE, &nvs_handle);
    nvs_get_u8(nvs_handle, "test_flag", &has_conf_flag);

    // 需要进入测试模式
    if (has_conf_flag == 0)
    {
        ESP_ERROR_CHECK(nvs_set_u8(nvs_handle, "test_flag", 1));
        ESP_ERROR_CHECK(nvs_commit(nvs_handle));
        _ui_screen_change(&ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 1500, &ui_Screen2_screen_init);
        ESP_ERROR_CHECK(AppJoint_run());
    }
    else
    // 直接进入主界面
    {
        // enter gif screen
        ui_emoji_create();

        start_first_action();
        // delete joint task
        delete_joint_task();

        _ui_screen_delete(&ui_Screen2);
        _ui_screen_delete(&ui_Screen3);
    }

    nvs_close(nvs_handle);
}
