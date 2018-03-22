/*
 * Copyright 2017 NXP
 */

#include <stdint.h>

const uint8_t config_param[318] = {
	0x01/*DQS Config : enable config*/,
	0x00/*DQS Config*/,
	0x00/*DQS Config*/,
	0x00/*DQS Config*/,
	0x00/*Hold Delay : Data aligned with 2x serial flash half clock*/,
	0x00/*Half Speed Phase Selection*/,
	0x00/*Half Speed Delay Selection*/,
	0x00/*Reserved*/,
	0x07/*Serial Clock Configuration*/,
	0x00/*Serial Clock Configuration*/,
	0x00/*Serial Clock Configuration*/,
	0x00/*Serial Clock Configuration*/,
	0x7f/*SoC Configuration*/,
	0x00/*SoC Configuration*/,
	0x7f/*SoC Configuration*/,
	0x00/*SoC Configuration*/,
	0x00/*Reserved*/,
	0x00/*Reserved*/,
	0x00/*Reserved*/,
	0x00/*Reserved*/,
	0x03/*Chip Select hold time*/,
	0x00/*Chip Select hold time*/,
	0x00/*Chip Select hold time*/,
	0x00/*Chip Select hold time*/,
	0x03/*Chip Select setup time*/,
	0x00/*Chip Select setup time*/,
	0x00/*Chip Select setup time*/,
	0x00/*Chip Select setup time*/,
	0x00/*Serial Flash A1 size*/,
	0x00/*Serial Flash A1 size*/,
	0x80/*Serial Flash A1 size*/,
	0x00/*Serial Flash A1 size*/,
	0x00/*Serial Flash A2 size*/,
	0x00/*Serial Flash A2 size*/,
	0x80/*Serial Flash A2 size*/,
	0x00/*Serial Flash A2 size*/,
	0x00/*Serial Flash B1 size- IGNORED in RPC mode*/,
	0x00/*Serial Flash B1 size*/,
	0x80/*Serial Flash B1 size*/,
	0x00/*Serial Flash B1 size*/,
	0x00/*Serial Flash B2 size*/,
	0x00/*Serial Flash B2 size*/,
	0x80/*Serial Flash B2 size*/,
	0x00/*Serial Flash B2 size*/,
	0x02/*Serial Clock Frequency - 80 MHz*/,
	0x00/*Serial Clock Frequency*/,
	0x00/*Serial Clock Frequency*/,
	0x00/*Serial Clock Frequency*/,
	0x00/*Reserved*/,
	0x00/*Reserved*/,
	0x00/*Reserved*/,
	0x00/*Reserved*/,
	0x02/*Mode of operation- IGNORED in RPC mode*/,
	0x00/*Serial Flash Port B Selection- IGNORED in RPC mode*/,
	0x00/*Dual Data Rate mode - Always enabled in RPC mode*/,
	0x01/*Data Strobe Signal - Always enabled in RPC mode*/,
	0x00/*Parallel Mode enable - IGNORED in RPC mode*/,
	0x01/*CS1 on Port A*/,
	0x01/*CS1 on Port B*/,
	0x00/*Full Speed Phase Selection*/,
	0x00/*Full Speed Delay Selection*/,
	0x00/*DDR Sampling Point, No need because DQS enabled*/,
	/*Flash specific LUT */
	0xbb,0x04,0x18,0x09,0x04,0x0D,0x80,0x1D,0x00,0x24,
	/*STOP - 8pads*/0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

