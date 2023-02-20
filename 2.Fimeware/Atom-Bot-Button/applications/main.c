/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-11-06     SummerGift   first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>

#include "bsp_motor.h"
#include "bsp_encoder.h"

int main(void)
{
    rt_kprintf("Hello Atom-Bot!!\n");

    rt_kprintf("SCL:%d,SDA:%d\n", GET_PIN(B, 10), GET_PIN(B, 11));

    rt_kprintf("LEFT_ENCODER_PIN:%d  RIGHT_ENCODER_PIN:%d\n", GET_PIN(A, 0), GET_PIN(A, 1));
    rt_kprintf("LEFT_ENCODER_PIN:%d  RIGHT_ENCODER_PIN:%d\n", GET_PIN(A, 6), GET_PIN(A, 7));

    MX_TIM4_Init();
    MX_TIM2_Init();
    MX_TIM3_Init();

	Motor_Init();
	Encoder_Init();

    return 0;
}

/**
  * @brief This function handles TIM2 global interrupt.
  */
void TIM2_IRQHandler(void)
{
    /* USER CODE BEGIN TIM2_IRQn 0 */
    int level = rt_hw_interrupt_disable();
    /* USER CODE END TIM2_IRQn 0 */
    HAL_TIM_IRQHandler(&htim2);
    /* USER CODE BEGIN TIM2_IRQn 1 */
    rt_hw_interrupt_enable(level);
    /* USER CODE END TIM2_IRQn 1 */
}

/**
  * @brief This function handles TIM3 global interrupt.
  */
void TIM3_IRQHandler(void)
{
    /* USER CODE BEGIN TIM3_IRQn 0 */
    int level = rt_hw_interrupt_disable();
    /* USER CODE END TIM3_IRQn 0 */
    HAL_TIM_IRQHandler(&htim3);
    /* USER CODE BEGIN TIM3_IRQn 1 */
    rt_hw_interrupt_enable(level);
    /* USER CODE END TIM3_IRQn 1 */
}

/**
  * @brief This function handles TIM4 global interrupt.
  */
void TIM4_IRQHandler(void)
{
    /* USER CODE BEGIN TIM4_IRQn 0 */
    int level = rt_hw_interrupt_disable();
    /* USER CODE END TIM4_IRQn 0 */
    HAL_TIM_IRQHandler(&htim4);
    /* USER CODE BEGIN TIM4_IRQn 1 */
    rt_hw_interrupt_enable(level);
    /* USER CODE END TIM4_IRQn 1 */
}
