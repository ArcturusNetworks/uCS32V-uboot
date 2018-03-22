/*
 * (C) Copyright 2015-2016 Freescale Semiconductor, Inc.
 * (C) Copyright 2016-2017 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

/*
 * Configuration settings for all the Freescale S32V234 boards.
 */

#ifndef __S32V234_COMMON_H
#define __S32V234_COMMON_H

#include <configs/s32v.h>
#include <asm/arch/imx-regs.h>

#define CONFIG_S32V234

/* Config DCU */
#ifdef CONFIG_FSL_DCU_FB
#define CONFIG_SYS_DCU_ADDR             0x40028000
#define DCU_LAYER_MAX_NUM               8
#define DCU_CTRL_DESC_LAYER_NUM		10
#define CONFIG_SYS_FSL_DCU_LE
#endif

/* Config GIC */
#define CONFIG_GICV2
#define GICD_BASE		0x7D001000
#define GICC_BASE		0x7D002000

/* Run by default from DDR1 */
#ifdef CONFIG_RUN_FROM_DDR0
#define DDR_BASE_ADDR		0x80000000
#else
#define DDR_BASE_ADDR		0xC0000000
#endif

#define CONFIG_SYS_TEXT_BASE        0x3E820000 /* SDRAM */
#define CONFIG_SYS_TEXT_OFFSET      0x00020000

#define IMX_FEC_BASE            ENET_BASE_ADDR

/* memory mapped external flash */
#define CONFIG_SYS_FSL_FLASH0_BASE      0x20000000
#define CONFIG_SYS_FSL_FLASH0_SIZE      0x10000000
#define CONFIG_SYS_FSL_FLASH1_BASE      0x60000000
#define CONFIG_SYS_FSL_FLASH1_SIZE      0x10000000
#define QSPI_BASE_ADDR		        0x400A6000
#define MMAP_DSPI                       SPI0_BASE_ADDR

/* flash related definitions */
#if defined(CONFIG_SPI_FLASH) && defined(CONFIG_FSL_QSPI)
#define CONFIG_S32V234_USES_FLASH

/* Flash Size and Num need to be updated according to the board's flash type */
#define FSL_QSPI_FLASH_SIZE            SZ_128M
#define FSL_QSPI_FLASH_NUM             2

#define QSPI0_BASE_ADDR                QSPI_BASE_ADDR
#define QSPI0_AMBA_BASE                CONFIG_SYS_FSL_FLASH0_BASE

#else
#define CONFIG_S32V234_FLASH

/* QSPI/hyperflash configs */
#ifdef CONFIG_S32V234_FLASH
#define CONFIG_S32V234_USES_FLASH

/* debug stuff for qspi/hyperflash */
#undef CONFIG_DEBUG_S32V234_QSPI_QSPI

/* flash comand disabled until implemented */
#undef CONFIG_CMD_FLASH

#define FLASH_SECTOR_SIZE 	0x40000 /* 256 KB */
#define FLASH_BASE_ADR2		0x24000000

#endif
#endif


#endif