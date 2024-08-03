#pragma once

#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    int angle_r;
    int angle_l;
    int pitch;
    int roll;
    int yaw;
    float voltage;

    int target_yaw;
    int target_thro;
    int target_angle;

} Chassis_data;

extern Chassis_data chassis;

esp_err_t APP_Uart_Init(void);
void data_sendwl_ChassisData(int16_t _a, int16_t _b);
void data_send_al_ChassisData(int16_t _a);

#ifdef __cplusplus
}
#endif
