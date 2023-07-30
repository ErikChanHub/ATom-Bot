/*
 * Copyright (c) 2006-2023, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author        Notes
 * 2023-02-26     Rbb66         First version
 */
#ifndef DMP_PORT_RTT_H
#define DMP_PORT_RTT_H

#include <rtthread.h>

#define DEFAULT_MPU_HZ  (50)    //输出频率100Hz
#define q30   1073741824.0f     //q30格式,long转float时的除数.

#define MPU6050_SELF_TESTX_REG      0X0D    //自检寄存器X
#define MPU6050_SELF_TESTY_REG      0X0E    //自检寄存器Y
#define MPU6050_SELF_TESTZ_REG      0X0F    //自检寄存器Z
#define MPU6050_SELF_TESTA_REG      0X10    //自检寄存器A
#define MPU6050_SAMPLE_RATE_REG     0X19    //采样频率分频器
#define MPU6050_CFG_REG             0X1A    //配置寄存器
#define MPU6050_GYRO_CFG_REG        0X1B    //陀螺仪配置寄存器
#define MPU6050_ACCEL_CFG_REG       0X1C    //加速度计配置寄存器
#define MPU6050_MOTION_DET_REG      0X1F    //运动检测阀值设置寄存器
#define MPU6050_FIFO_EN_REG         0X23    //FIFO使能寄存器
#define MPU6050_I2CMST_CTRL_REG     0X24    //IIC主机控制寄存器
#define MPU6050_I2CSLV0_ADDR_REG    0X25    //IIC从机0器件地址寄存器
#define MPU6050_I2CSLV0_REG         0X26    //IIC从机0数据地址寄存器
#define MPU6050_I2CSLV0_CTRL_REG    0X27    //IIC从机0控制寄存器
#define MPU6050_I2CSLV1_ADDR_REG    0X28    //IIC从机1器件地址寄存器
#define MPU6050_I2CSLV1_REG         0X29    //IIC从机1数据地址寄存器
#define MPU6050_I2CSLV1_CTRL_REG    0X2A    //IIC从机1控制寄存器
#define MPU6050_I2CSLV2_ADDR_REG    0X2B    //IIC从机2器件地址寄存器
#define MPU6050_I2CSLV2_REG         0X2C    //IIC从机2数据地址寄存器
#define MPU6050_I2CSLV2_CTRL_REG    0X2D    //IIC从机2控制寄存器
#define MPU6050_I2CSLV3_ADDR_REG    0X2E    //IIC从机3器件地址寄存器
#define MPU6050_I2CSLV3_REG         0X2F    //IIC从机3数据地址寄存器
#define MPU6050_I2CSLV3_CTRL_REG    0X30    //IIC从机3控制寄存器
#define MPU6050_I2CSLV4_ADDR_REG    0X31    //IIC从机4器件地址寄存器
#define MPU6050_I2CSLV4_REG         0X32    //IIC从机4数据地址寄存器
#define MPU6050_I2CSLV4_DO_REG      0X33    //IIC从机4写数据寄存器
#define MPU6050_I2CSLV4_CTRL_REG    0X34    //IIC从机4控制寄存器
#define MPU6050_I2CSLV4_DI_REG      0X35    //IIC从机4读数据寄存器

#define MPU6050_ACCEL_XOUTH_REG     0X3B    //加速度值,X轴高8位寄存器
#define MPU6050_ACCEL_XOUTL_REG     0X3C    //加速度值,X轴低8位寄存器
#define MPU6050_ACCEL_YOUTH_REG     0X3D    //加速度值,Y轴高8位寄存器
#define MPU6050_ACCEL_YOUTL_REG     0X3E    //加速度值,Y轴低8位寄存器
#define MPU6050_ACCEL_ZOUTH_REG     0X3F    //加速度值,Z轴高8位寄存器
#define MPU6050_ACCEL_ZOUTL_REG     0X40    //加速度值,Z轴低8位寄存器

#define MPU6050_TEMP_OUTH_REG       0X41    //温度值高八位寄存器
#define MPU6050_TEMP_OUTL_REG       0X42    //温度值低8位寄存器

//陀螺仪量程
#define  GYRO_RANGE_250  0  //250度/秒
#define  GYRO_RANGE_500  1  //500度/秒
#define  GYRO_RANGE_1000 2  //1000度/秒
#define  GYRO_RANGE_2000 3  //2000度/秒

//带宽
#define  DLPF_ACC184_GYRO188 1 //加速度带宽184Hz 陀螺仪带宽188Hz
#define  DLPF_ACC94_GYRO98   2 //加速度带宽94Hz 陀螺仪带宽98Hz
#define  DLPF_ACC44_GYRO42   3 //加速度带宽44Hz 陀螺仪带宽42Hz
#define  DLPF_ACC21_GYRO20   4 //加速度带宽21Hz 陀螺仪带宽20Hz
#define  DLPF_ACC10_GYRO10   5 //加速度带宽10Hz 陀螺仪带宽10Hz
#define  DLPF_ACC5_GYRO5     6 //加速度带宽5Hz 陀螺仪带宽5Hz

struct xyz_data
{
    int16_t x;
    int16_t y;
    int16_t z;
};

struct imu_data
{
    struct xyz_data gyro;
    struct xyz_data accel;

    float pitch;
    float roll;
    float yaw;
};

extern struct imu_data robot_imu_dmp_data;

uint8_t MPU_Write_Len(uint8_t addr, uint8_t reg, uint8_t len, uint8_t *databuf);
uint8_t MPU_Read_Len(uint8_t addr, uint8_t reg, uint8_t len, uint8_t *buf);

#endif
