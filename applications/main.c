/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-02-23     RT-Thread    first version
 */

#include <rtthread.h>

#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>

#include <rtdevice.h>
#include "drv_common.h"

#define LED_PIN GET_PIN(C, 0)

int main(void)
{
    int count = 1;

    rt_pin_mode(LED_PIN, PIN_MODE_OUTPUT);

    while (count++)
    {
        LOG_D("Hello RT-Thread!");
        rt_thread_mdelay(900);
        rt_pin_write(LED_PIN, PIN_LOW);
        rt_thread_mdelay(100);
        rt_pin_write(LED_PIN, PIN_HIGH);
    }

    return RT_EOK;
}
