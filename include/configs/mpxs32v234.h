/*
 * (C) Copyright 2015-2016 Freescale Semiconductor, Inc.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

/*
 * Configuration settings for the MicroSys MPXS32V234 board.
 */

#ifndef __CONFIG_H
#define __CONFIG_H

/* The configurations of this board depend on the definitions in this file and
* the ones in the header included at the end, configs/s32v234_common.h */

#define CONFIG_FSL_USDHC
#define CONFIG_SYS_FSL_ESDHC_ADDR	USDHC_BASE_ADDR

#define CONFIG_CMD_EXT2
#define CONFIG_CMD_EXT4

#define CONFIG_CMD_DATE

/* Config DCU */
#define CONFIG_FSL_DCU_FB

/*
 * RTC configuration
 */
#define CONFIG_SYS_I2C_MXC_I2C2
#define CONFIG_SYS_I2C_MXC_I2C3

#define CONFIG_SYS_RTC_BUS_NUM          2
#define CONFIG_SYS_I2C_RTC_ADDR         0x51

#define CONFIG_RTC_PCF85263

/* Ethernet config */

#define CONFIG_FEC_XCV_TYPE     RGMII
#define CONFIG_PHYLIB

/* CONFIG_PHY_RGMII_DIRECT_CONNECTED should be enabled when
 * BCM switch is configured.
 */
#ifdef CONFIG_PHY_RGMII_DIRECT_CONNECTED
#define CONFIG_BCM_SPEED	SPEED_1000
#else
#define CONFIG_FEC_MXC_PHYADDR  1
#define CONFIG_PHY_MICREL
#define CONFIG_PHY_MICREL_KSZ9031
#endif

#define	FDT_FILE MPXS32V234/mpxs32v234.dtb


#define CONFIG_SYS_INIT_SP_OFFSET \
	(CONFIG_SYS_INIT_RAM_SIZE - GENERATED_GBL_DATA_SIZE - CONFIG_SYS_TEXT_OFFSET)

/* #define CONFIG_CMD_PCI */
#ifdef CONFIG_CMD_PCI
#define CONFIG_GICSUPPORT
#define CONFIG_USE_IRQ
#define CONFIG_CMD_IRQ
#endif
/* we include this file here because it depends on the above definitions */
#include <configs/s32v234_common.h>

#endif
