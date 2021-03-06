/* linux/arch/arm/plat-s3c/dev-hsmmc2.c
 *
<<<<<<< HEAD
 * Copyright (c) 2009 Samsung Electronics
=======
 * Copyright (c) 2009 Maurus Cuelenaere
 *
 * Based on arch/arm/plat-s3c/dev-hsmmc1.c
 * original file Copyright (c) 2008 Simtec Electronics
>>>>>>> 08c4549... UPSTREAM: ARM: S3C64XX: add HSMMC2 support
 *
 * S3C series device definition for hsmmc device 2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#include <linux/kernel.h>
#include <linux/platform_device.h>
#include <linux/mmc/host.h>

#include <mach/map.h>
#include <plat/sdhci.h>
#include <plat/devs.h>
<<<<<<< HEAD
=======
#include <plat/cpu.h>
>>>>>>> 08c4549... UPSTREAM: ARM: S3C64XX: add HSMMC2 support

#define S3C_SZ_HSMMC	(0x1000)

static struct resource s3c_hsmmc2_resource[] = {
	[0] = {
		.start = S3C_PA_HSMMC2,
		.end   = S3C_PA_HSMMC2 + S3C_SZ_HSMMC - 1,
		.flags = IORESOURCE_MEM,
	},
	[1] = {
		.start = IRQ_HSMMC2,
		.end   = IRQ_HSMMC2,
		.flags = IORESOURCE_IRQ,
	}
};

static u64 s3c_device_hsmmc2_dmamask = 0xffffffffUL;

struct s3c_sdhci_platdata s3c_hsmmc2_def_platdata = {
	.max_width	= 4,
	.host_caps	= (MMC_CAP_4_BIT_DATA |
			   MMC_CAP_MMC_HIGHSPEED | MMC_CAP_SD_HIGHSPEED),
};

struct platform_device s3c_device_hsmmc2 = {
	.name		= "s3c-sdhci",
	.id		= 2,
	.num_resources	= ARRAY_SIZE(s3c_hsmmc2_resource),
	.resource	= s3c_hsmmc2_resource,
	.dev		= {
		.dma_mask		= &s3c_device_hsmmc2_dmamask,
		.coherent_dma_mask	= 0xffffffffUL,
		.platform_data		= &s3c_hsmmc2_def_platdata,
	},
};

void s3c_sdhci2_set_platdata(struct s3c_sdhci_platdata *pd)
{
	struct s3c_sdhci_platdata *set = &s3c_hsmmc2_def_platdata;

	set->max_width = pd->max_width;

	if (pd->cfg_gpio)
		set->cfg_gpio = pd->cfg_gpio;
	if (pd->cfg_card)
		set->cfg_card = pd->cfg_card;
}
