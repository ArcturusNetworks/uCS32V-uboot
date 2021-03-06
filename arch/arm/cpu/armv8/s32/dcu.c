/*
 * (C) Copyright 2017 NXP
 *
 * FSL DCU Framebuffer driver
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#include <asm/arch/clock.h>
#include <common.h>
#include <fsl_dcu_fb.h>
#include "../../../../../board/freescale/common/dcu_sii9022a.h"
#include "div64.h"

DECLARE_GLOBAL_DATA_PTR;

struct fb_videomode fsl_dcu_mode_1920_1080 = {
	.name = "1920x1080-60",
	.refresh = 60,
	.xres = 1920,
	.yres = 1080,
	/* .pixclock    = 56000,  LVDS */
	.pixclock = 148500,	/* HDMI */
	.left_margin = 148,
	.right_margin = 88,
	.upper_margin = 36,
	.lower_margin = 4,
	.hsync_len = 44,
	.vsync_len = 5,
	.sync = 0,
	.vmode = FB_VMODE_NONINTERLACED,
};

unsigned int dcu_set_pixel_clock(unsigned int pixclock)
{
	unsigned long long div;

	div = (unsigned long long)(mxc_get_clock(MXC_DCU_PIX_CLK) / 1000);
	do_div(div, (unsigned long long)pixclock);

	return div;
}

int platform_dcu_init(unsigned int xres, unsigned int yres,
		      const char *port, struct fb_videomode *dcu_fb_videomode)
{
	const char *name;
	unsigned int pixel_format;

	if (strncmp(port, "lcd", 3) == 0) {
		name = "LVDS";
	} else {
		name = "HDMI";
		dcu_set_dvi_encoder(dcu_fb_videomode);
	}

	printf("DCU: Switching to %s monitor @ %ux%u\n", name, xres, yres);

	pixel_format = 32;
	fsl_dcu_init(xres, yres, pixel_format);

	return 0;
}
