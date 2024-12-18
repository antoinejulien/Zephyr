/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <zephyr/kernel.h>
#include <zephyr/linker/linker-defs.h>

int main(void)
{
	printk("Address of ROM : %p\n", (void *)__rom_region_start);
	printk("Address of image RAM : %p\n", (void *)_image_ram_start);
	printk("Hello sysbuild with mcuboot 2! %s\n", CONFIG_BOARD);

	while(1){
		printk("AAAAA this to see change\n");
		k_sleep(K_SECONDS(1));
	}
    
	return 0;
}

