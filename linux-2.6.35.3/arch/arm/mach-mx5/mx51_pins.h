/*
 * Copyright (C) 2008-2010 Freescale Semiconductor, Inc. All Rights Reserved.
 */

/*
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 or later at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */
#ifndef __ASM_ARCH_MXC_MX51_PINS_H__
#define __ASM_ARCH_MXC_MX51_PINS_H__
#include "iomux.h"

/*!
 * @file arch-mxc/mx51_pins.h
 *
 * @brief MX51 I/O Pin List
 *
 * @ingroup GPIO_MX51
 */

#ifndef __ASSEMBLY__

#define PAD_I_START_MX51		0x3F0
#define INPUT_CTL_START_MX51		0x8C4
#define INPUT_CTL_START_MX51_TO1	0x928

#define MUX_I_END_MX51		(PAD_I_START_MX51 - 4)

#define _MXC_BUILD_PIN_MX51(gp, gi, ga, mi, pi) \
	(((gp) << MUX_IO_P) | ((gi) << MUX_IO_I) | \
	((mi) << MUX_I) | \
	((pi - PAD_I_START_MX51) << PAD_I) | \
	((ga) << GPIO_I))

#define _MXC_BUILD_GPIO_PIN_MX51(gp, gi, ga, mi, pi) \
    _MXC_BUILD_PIN_MX51(gp, gi, ga, mi, pi)

#define _MXC_BUILD_NON_GPIO_PIN_MX51(mi, pi) \
    _MXC_BUILD_PIN_MX51(NON_GPIO_PORT, 0, 0, mi, pi)
/*!
 * This enumeration is constructed based on the Section
 * "sw_pad_ctl & sw_mux_ctl details" of the MX51 IC Spec. Each enumerated
 * value is constructed based on the rules described above.
 */
enum iomux_pins_mx51 {
	MX51_PIN_EIM_DA0 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x1C, 0x7A8),
	MX51_PIN_EIM_DA1 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x20, 0x7A8),
	MX51_PIN_EIM_DA2 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x24, 0x7A8),
	MX51_PIN_EIM_DA3 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x28, 0x7A8),
	MX51_PIN_EIM_DA4 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2C, 0x7AC),
	MX51_PIN_EIM_DA5 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x30, 0x7AC),
	MX51_PIN_EIM_DA6 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x34, 0x7AC),
	MX51_PIN_EIM_DA7 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x38, 0x7AC),
	MX51_PIN_EIM_DA8 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x3C, 0x7B0),
	MX51_PIN_EIM_DA9 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x40, 0x7B0),
	MX51_PIN_EIM_DA10 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x44, 0x7B0),
	MX51_PIN_EIM_DA11 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x48, 0x7B0),
	MX51_PIN_EIM_DA12 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x4C, 0x7BC),
	MX51_PIN_EIM_DA13 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x50, 0x7BC),
	MX51_PIN_EIM_DA14 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x54, 0x7BC),
	MX51_PIN_EIM_DA15 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x58, 0x7BC),
	MX51_PIN_EIM_D16 = _MXC_BUILD_GPIO_PIN_MX51(1, 0, 1, 0x5C, 0x3F0),
	MX51_PIN_EIM_D17 = _MXC_BUILD_GPIO_PIN_MX51(1, 1, 1, 0x60, 0x3F4),
	MX51_PIN_EIM_D18 = _MXC_BUILD_GPIO_PIN_MX51(1, 2, 1, 0x64, 0x3F8),
	MX51_PIN_EIM_D19 = _MXC_BUILD_GPIO_PIN_MX51(1, 3, 1, 0x68, 0x3FC),
	MX51_PIN_EIM_D20 = _MXC_BUILD_GPIO_PIN_MX51(1, 4, 1, 0x6C, 0x400),
	MX51_PIN_EIM_D21 = _MXC_BUILD_GPIO_PIN_MX51(1, 5, 1, 0x70, 0x404),
	MX51_PIN_EIM_D22 = _MXC_BUILD_GPIO_PIN_MX51(1, 6, 1, 0x74, 0x408),
	MX51_PIN_EIM_D23 = _MXC_BUILD_GPIO_PIN_MX51(1, 7, 1, 0x78, 0x40C),
	MX51_PIN_EIM_D24 = _MXC_BUILD_GPIO_PIN_MX51(1, 8, 1, 0x7C, 0x410),
	MX51_PIN_EIM_D25 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x80, 0x414),
	MX51_PIN_EIM_D26 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x84, 0x418),
	MX51_PIN_EIM_D27 = _MXC_BUILD_GPIO_PIN_MX51(1, 9, 1, 0x88, 0x41C),
	MX51_PIN_EIM_D28 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x8C, 0x420),
	MX51_PIN_EIM_D29 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x90, 0x424),
	MX51_PIN_EIM_D30 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x94, 0x428),
	MX51_PIN_EIM_D31 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x98, 0x42C),
	MX51_PIN_EIM_A16 = _MXC_BUILD_GPIO_PIN_MX51(1, 10, 1, 0x9C, 0x430),
	MX51_PIN_EIM_A17 = _MXC_BUILD_GPIO_PIN_MX51(1, 11, 1, 0xA0, 0x434),
	MX51_PIN_EIM_A18 = _MXC_BUILD_GPIO_PIN_MX51(1, 12, 1, 0xA4, 0x438),
	MX51_PIN_EIM_A19 = _MXC_BUILD_GPIO_PIN_MX51(1, 13, 1, 0xA8, 0x43C),
	MX51_PIN_EIM_A20 = _MXC_BUILD_GPIO_PIN_MX51(1, 14, 1, 0xAC, 0x440),
	MX51_PIN_EIM_A21 = _MXC_BUILD_GPIO_PIN_MX51(1, 15, 1, 0xB0, 0x444),
	MX51_PIN_EIM_A22 = _MXC_BUILD_GPIO_PIN_MX51(1, 16, 1, 0xB4, 0x448),
	MX51_PIN_EIM_A23 = _MXC_BUILD_GPIO_PIN_MX51(1, 17, 1, 0xB8, 0x44C),
	MX51_PIN_EIM_A24 = _MXC_BUILD_GPIO_PIN_MX51(1, 18, 1, 0xBC, 0x450),
	MX51_PIN_EIM_A25 = _MXC_BUILD_GPIO_PIN_MX51(1, 19, 1, 0xC0, 0x454),
	MX51_PIN_EIM_A26 = _MXC_BUILD_GPIO_PIN_MX51(1, 20, 1, 0xC4, 0x458),
	MX51_PIN_EIM_A27 = _MXC_BUILD_GPIO_PIN_MX51(1, 21, 1, 0xC8, 0x45C),
	MX51_PIN_EIM_EB0 = _MXC_BUILD_NON_GPIO_PIN_MX51(0xCC, 0x460),
	MX51_PIN_EIM_EB1 = _MXC_BUILD_NON_GPIO_PIN_MX51(0xD0, 0x464),
	MX51_PIN_EIM_EB2 = _MXC_BUILD_GPIO_PIN_MX51(1, 22, 1, 0xD4, 0x468),
	MX51_PIN_EIM_EB3 = _MXC_BUILD_GPIO_PIN_MX51(1, 23, 1, 0xD8, 0x46C),
	MX51_PIN_EIM_OE = _MXC_BUILD_GPIO_PIN_MX51(1, 24, 1, 0xDC, 0x470),
	MX51_PIN_EIM_CS0 = _MXC_BUILD_GPIO_PIN_MX51(1, 25, 1, 0xE0, 0x474),
	MX51_PIN_EIM_CS1 = _MXC_BUILD_GPIO_PIN_MX51(1, 26, 1, 0xE4, 0x478),
	MX51_PIN_EIM_CS2 = _MXC_BUILD_GPIO_PIN_MX51(1, 27, 1, 0xE8, 0x47C),
	MX51_PIN_EIM_CS3 = _MXC_BUILD_GPIO_PIN_MX51(1, 28, 1, 0xEC, 0x480),
	MX51_PIN_EIM_CS4 = _MXC_BUILD_GPIO_PIN_MX51(1, 29, 1, 0xF0, 0x484),
	MX51_PIN_EIM_CS5 = _MXC_BUILD_GPIO_PIN_MX51(1, 30, 1, 0xF4, 0x488),
	MX51_PIN_EIM_DTACK = _MXC_BUILD_GPIO_PIN_MX51(1, 31, 1, 0xF8, 0x48C),
	MX51_PIN_EIM_LBA = _MXC_BUILD_GPIO_PIN_MX51(2, 1, 1, 0xFC, 0x494),
	MX51_PIN_EIM_CRE = _MXC_BUILD_GPIO_PIN_MX51(2, 2, 1, 0x100, 0x4A0),
	MX51_PIN_DRAM_CS1 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x104, 0x4D0),
	MX51_PIN_NANDF_WE_B = _MXC_BUILD_GPIO_PIN_MX51(2, 3, 3, 0x108, 0x4E4),
	MX51_PIN_NANDF_RE_B = _MXC_BUILD_GPIO_PIN_MX51(2, 4, 3, 0x10C, 0x4E8),
	MX51_PIN_NANDF_ALE = _MXC_BUILD_GPIO_PIN_MX51(2, 5, 3, 0x110, 0x4EC),
	MX51_PIN_NANDF_CLE = _MXC_BUILD_GPIO_PIN_MX51(2, 6, 3, 0x114, 0x4F0),
	MX51_PIN_NANDF_WP_B = _MXC_BUILD_GPIO_PIN_MX51(2, 7, 3, 0x118, 0x4F4),
	MX51_PIN_NANDF_RB0 = _MXC_BUILD_GPIO_PIN_MX51(2, 8, 3, 0x11C, 0x4F8),
	MX51_PIN_NANDF_RB1 = _MXC_BUILD_GPIO_PIN_MX51(2, 9, 3, 0x120, 0x4FC),
	MX51_PIN_NANDF_RB2 = _MXC_BUILD_GPIO_PIN_MX51(2, 10, 3, 0x124, 0x500),
	MX51_PIN_NANDF_RB3 = _MXC_BUILD_GPIO_PIN_MX51(2, 11, 3, 0x128, 0x504),
	MX51_PIN_GPIO_NAND = _MXC_BUILD_GPIO_PIN_MX51(2, 12, 3, 0x12C, 0x514),
	MX51_PIN_NANDF_RB4 = MX51_PIN_GPIO_NAND,
	MX51_PIN_NANDF_RB5 = _MXC_BUILD_GPIO_PIN_MX51(2, 13, 3, 0x130, 0x5D8),
	MX51_PIN_NANDF_RB6 = _MXC_BUILD_GPIO_PIN_MX51(2, 14, 3, 0x134, 0x5DC),
	MX51_PIN_NANDF_RB7 = _MXC_BUILD_GPIO_PIN_MX51(2, 15, 3, 0x138, 0x5E0),
	MX51_PIN_NANDF_CS0 = _MXC_BUILD_GPIO_PIN_MX51(2, 16, 3, 0x130, 0x518),
	MX51_PIN_NANDF_CS1 = _MXC_BUILD_GPIO_PIN_MX51(2, 17, 3, 0x134, 0x51C),
	MX51_PIN_NANDF_CS2 = _MXC_BUILD_GPIO_PIN_MX51(2, 18, 3, 0x138, 0x520),
	MX51_PIN_NANDF_CS3 = _MXC_BUILD_GPIO_PIN_MX51(2, 19, 3, 0x13C, 0x524),
	MX51_PIN_NANDF_CS4 = _MXC_BUILD_GPIO_PIN_MX51(2, 20, 3, 0x140, 0x528),
	MX51_PIN_NANDF_CS5 = _MXC_BUILD_GPIO_PIN_MX51(2, 21, 3, 0x144, 0x52C),
	MX51_PIN_NANDF_CS6 = _MXC_BUILD_GPIO_PIN_MX51(2, 22, 3, 0x148, 0x530),
	MX51_PIN_NANDF_CS7 = _MXC_BUILD_GPIO_PIN_MX51(2, 23, 3, 0x14C, 0x534),
	MX51_PIN_NANDF_RDY_INT = _MXC_BUILD_GPIO_PIN_MX51(2, 24, 3, 0x150, 0x538),
	MX51_PIN_NANDF_D15 = _MXC_BUILD_GPIO_PIN_MX51(2, 25, 3, 0x154, 0x53C),
	MX51_PIN_NANDF_D14 = _MXC_BUILD_GPIO_PIN_MX51(2, 26, 3, 0x158, 0x540),
	MX51_PIN_NANDF_D13 = _MXC_BUILD_GPIO_PIN_MX51(2, 27, 3, 0x15C, 0x544),
	MX51_PIN_NANDF_D12 = _MXC_BUILD_GPIO_PIN_MX51(2, 28, 3, 0x160, 0x548),
	MX51_PIN_NANDF_D11 = _MXC_BUILD_GPIO_PIN_MX51(2, 29, 3, 0x164, 0x54C),
	MX51_PIN_NANDF_D10 = _MXC_BUILD_GPIO_PIN_MX51(2, 30, 3, 0x168, 0x550),
	MX51_PIN_NANDF_D9 = _MXC_BUILD_GPIO_PIN_MX51(2, 31, 3, 0x16C, 0x554),
	MX51_PIN_NANDF_D8 = _MXC_BUILD_GPIO_PIN_MX51(3, 0, 3, 0x170, 0x558),
	MX51_PIN_NANDF_D7 = _MXC_BUILD_GPIO_PIN_MX51(3, 1, 3, 0x174, 0x55C),
	MX51_PIN_NANDF_D6 = _MXC_BUILD_GPIO_PIN_MX51(3, 2, 3, 0x178, 0x560),
	MX51_PIN_NANDF_D5 = _MXC_BUILD_GPIO_PIN_MX51(3, 3, 3, 0x17C, 0x564),
	MX51_PIN_NANDF_D4 = _MXC_BUILD_GPIO_PIN_MX51(3, 4, 3, 0x180, 0x568),
	MX51_PIN_NANDF_D3 = _MXC_BUILD_GPIO_PIN_MX51(3, 5, 3, 0x184, 0x56C),
	MX51_PIN_NANDF_D2 = _MXC_BUILD_GPIO_PIN_MX51(3, 6, 3, 0x188, 0x570),
	MX51_PIN_NANDF_D1 = _MXC_BUILD_GPIO_PIN_MX51(3, 7, 3, 0x18C, 0x574),
	MX51_PIN_NANDF_D0 = _MXC_BUILD_GPIO_PIN_MX51(3, 8, 3, 0x190, 0x578),
	MX51_PIN_CSI1_D8 = _MXC_BUILD_GPIO_PIN_MX51(2, 12, 3, 0x194, 0x57C),
	MX51_PIN_CSI1_D9 = _MXC_BUILD_GPIO_PIN_MX51(2, 13, 3, 0x198, 0x580),
	MX51_PIN_CSI1_D10 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x19C, 0x584),
	MX51_PIN_CSI1_D11 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x1A0, 0x588),
	MX51_PIN_CSI1_D12 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x1A4, 0x58C),
	MX51_PIN_CSI1_D13 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x1A8, 0x590),
	MX51_PIN_CSI1_D14 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x1AC, 0x594),
	MX51_PIN_CSI1_D15 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x1B0, 0x598),
	MX51_PIN_CSI1_D16 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x1B4, 0x59C),
	MX51_PIN_CSI1_D17 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x1B8, 0x5A0),
	MX51_PIN_CSI1_D18 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x1BC, 0x5A4),
	MX51_PIN_CSI1_D19 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x1C0, 0x5A8),
	MX51_PIN_CSI1_VSYNC = _MXC_BUILD_GPIO_PIN_MX51(2, 14, 3, 0x1C4, 0x5AC),
	MX51_PIN_CSI1_HSYNC = _MXC_BUILD_GPIO_PIN_MX51(2, 15, 3, 0x1C8, 0x5B0),
	MX51_PIN_CSI1_PIXCLK = _MXC_BUILD_NON_GPIO_PIN_MX51(NON_MUX_I, 0x5B4),
	MX51_PIN_CSI1_MCLK = _MXC_BUILD_NON_GPIO_PIN_MX51(NON_MUX_I, 0x5B8),
	MX51_PIN_CSI1_PKE0 = _MXC_BUILD_NON_GPIO_PIN_MX51(NON_MUX_I, 0x860),
	MX51_PIN_CSI2_D12 = _MXC_BUILD_GPIO_PIN_MX51(3, 9, 3, 0x1CC, 0x5BC),
	MX51_PIN_CSI2_D13 = _MXC_BUILD_GPIO_PIN_MX51(3, 10, 3, 0x1D0, 0x5C0),
	MX51_PIN_CSI2_D14 = _MXC_BUILD_GPIO_PIN_MX51(3, 11, 3, 0x1D4, 0x5C4),
	MX51_PIN_CSI2_D15 = _MXC_BUILD_GPIO_PIN_MX51(3, 12, 3, 0x1D8, 0x5C8),
	MX51_PIN_CSI2_D16 = _MXC_BUILD_GPIO_PIN_MX51(3, 11, 3, 0x1DC, 0x5CC),
	MX51_PIN_CSI2_D17 = _MXC_BUILD_GPIO_PIN_MX51(3, 12, 3, 0x1E0, 0x5D0),
	MX51_PIN_CSI2_D18 = _MXC_BUILD_GPIO_PIN_MX51(3, 11, 3, 0x1E4, 0x5D4),
	MX51_PIN_CSI2_D19 = _MXC_BUILD_GPIO_PIN_MX51(3, 12, 3, 0x1E8, 0x5D8),
	MX51_PIN_CSI2_VSYNC = _MXC_BUILD_GPIO_PIN_MX51(3, 13, 3, 0x1EC, 0x5DC),
	MX51_PIN_CSI2_HSYNC = _MXC_BUILD_GPIO_PIN_MX51(3, 14, 3, 0x1F0, 0x5E0),
	MX51_PIN_CSI2_PIXCLK = _MXC_BUILD_GPIO_PIN_MX51(3, 15, 3, 0x1F4, 0x5E4),
	MX51_PIN_CSI2_PKE0 = _MXC_BUILD_NON_GPIO_PIN_MX51(NON_MUX_I, 0x81C),
	MX51_PIN_I2C1_CLK = _MXC_BUILD_GPIO_PIN_MX51(3, 16, 3, 0x1F8, 0x5E8),
	MX51_PIN_I2C1_DAT = _MXC_BUILD_GPIO_PIN_MX51(3, 17, 3, 0x1FC, 0x5EC),
	MX51_PIN_AUD3_BB_TXD = _MXC_BUILD_GPIO_PIN_MX51(3, 18, 3, 0x200, 0x5F0),
	MX51_PIN_AUD3_BB_RXD = _MXC_BUILD_GPIO_PIN_MX51(3, 19, 3, 0x204, 0x5F4),
	MX51_PIN_AUD3_BB_CK = _MXC_BUILD_GPIO_PIN_MX51(3, 20, 3, 0x208, 0x5F8),
	MX51_PIN_AUD3_BB_FS = _MXC_BUILD_GPIO_PIN_MX51(3, 21, 3, 0x20C, 0x5FC),
	MX51_PIN_CSPI1_MOSI = _MXC_BUILD_GPIO_PIN_MX51(3, 22, 3, 0x210, 0x600),
	MX51_PIN_CSPI1_MISO = _MXC_BUILD_GPIO_PIN_MX51(3, 23, 3, 0x214, 0x604),
	MX51_PIN_CSPI1_SS0 = _MXC_BUILD_GPIO_PIN_MX51(3, 24, 3, 0x218, 0x608),
	MX51_PIN_CSPI1_SS1 = _MXC_BUILD_GPIO_PIN_MX51(3, 25, 3, 0x21C, 0x60C),
	MX51_PIN_CSPI1_RDY = _MXC_BUILD_GPIO_PIN_MX51(3, 26, 3, 0x220, 0x610),
	MX51_PIN_CSPI1_SCLK = _MXC_BUILD_GPIO_PIN_MX51(3, 27, 3, 0x224, 0x614),
	MX51_PIN_UART1_RXD = _MXC_BUILD_GPIO_PIN_MX51(3, 28, 3, 0x228, 0x618),
	MX51_PIN_UART1_TXD = _MXC_BUILD_GPIO_PIN_MX51(3, 29, 3, 0x22C, 0x61C),
	MX51_PIN_UART1_RTS = _MXC_BUILD_GPIO_PIN_MX51(3, 30, 3, 0x230, 0x620),
	MX51_PIN_UART1_CTS = _MXC_BUILD_GPIO_PIN_MX51(3, 31, 3, 0x234, 0x624),
	MX51_PIN_UART2_RXD = _MXC_BUILD_GPIO_PIN_MX51(0, 20, 3, 0x238, 0x628),
	MX51_PIN_UART2_TXD = _MXC_BUILD_GPIO_PIN_MX51(0, 21, 3, 0x23C, 0x62C),
	MX51_PIN_UART3_RXD = _MXC_BUILD_GPIO_PIN_MX51(0, 22, 3, 0x240, 0x630),
	MX51_PIN_UART3_TXD = _MXC_BUILD_GPIO_PIN_MX51(0, 23, 3, 0x244, 0x634),
	MX51_PIN_OWIRE_LINE = _MXC_BUILD_GPIO_PIN_MX51(0, 24, 3, 0x248, 0x638),
	MX51_PIN_KEY_ROW0 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x24C, 0x63C),
	MX51_PIN_KEY_ROW1 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x250, 0x640),
	MX51_PIN_KEY_ROW2 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x254, 0x644),
	MX51_PIN_KEY_ROW3 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x258, 0x648),
	MX51_PIN_KEY_COL0 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x25C, 0x64C),
	MX51_PIN_KEY_COL1 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x260, 0x650),
	MX51_PIN_KEY_COL2 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x264, 0x654),
	MX51_PIN_KEY_COL3 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x268, 0x658),
	MX51_PIN_KEY_COL4 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x26C, 0x65C),
	MX51_PIN_KEY_COL5 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x270, 0x660),
	MX51_PIN_USBH1_CLK = _MXC_BUILD_GPIO_PIN_MX51(0, 25, 2, 0x278, 0x678),
	MX51_PIN_USBH1_DIR = _MXC_BUILD_GPIO_PIN_MX51(0, 26, 2, 0x27C, 0x67C),
	MX51_PIN_USBH1_STP = _MXC_BUILD_GPIO_PIN_MX51(0, 27, 2, 0x280, 0x680),
	MX51_PIN_USBH1_NXT = _MXC_BUILD_GPIO_PIN_MX51(0, 28, 2, 0x284, 0x684),
	MX51_PIN_USBH1_DATA0 = _MXC_BUILD_GPIO_PIN_MX51(0, 11, 2, 0x288, 0x688),
	MX51_PIN_USBH1_DATA1 = _MXC_BUILD_GPIO_PIN_MX51(0, 12, 2, 0x28C, 0x68C),
	MX51_PIN_USBH1_DATA2 = _MXC_BUILD_GPIO_PIN_MX51(0, 13, 2, 0x290, 0x690),
	MX51_PIN_USBH1_DATA3 = _MXC_BUILD_GPIO_PIN_MX51(0, 14, 2, 0x294, 0x694),
	MX51_PIN_USBH1_DATA4 = _MXC_BUILD_GPIO_PIN_MX51(0, 15, 2, 0x298, 0x698),
	MX51_PIN_USBH1_DATA5 = _MXC_BUILD_GPIO_PIN_MX51(0, 16, 2, 0x29C, 0x69C),
	MX51_PIN_USBH1_DATA6 = _MXC_BUILD_GPIO_PIN_MX51(0, 17, 2, 0x2A0, 0x6A0),
	MX51_PIN_USBH1_DATA7 = _MXC_BUILD_GPIO_PIN_MX51(0, 18, 2, 0x2A4, 0x6A4),
	MX51_PIN_DI1_PIN11 = _MXC_BUILD_GPIO_PIN_MX51(2, 0, 4, 0x2A8, 0x6A8),
	MX51_PIN_DI1_PIN12 = _MXC_BUILD_GPIO_PIN_MX51(2, 1, 4, 0x2AC, 0x6AC),
	MX51_PIN_DI1_PIN13 = _MXC_BUILD_GPIO_PIN_MX51(2, 2, 4, 0x2B0, 0x6B0),
	MX51_PIN_DI1_D0_CS = _MXC_BUILD_GPIO_PIN_MX51(2, 3, 4, 0x2B4, 0x6B4),
	MX51_PIN_DI1_D1_CS = _MXC_BUILD_GPIO_PIN_MX51(2, 4, 4, 0x2B8, 0x6B8),
	MX51_PIN_DISPB2_SER_DIN = _MXC_BUILD_GPIO_PIN_MX51(2, 5, 4, 0x2BC, 0x6BC),
	MX51_PIN_DISPB2_SER_DIO = _MXC_BUILD_GPIO_PIN_MX51(2, 6, 4, 0x2C0, 0x6C0),
	MX51_PIN_DISPB2_SER_CLK = _MXC_BUILD_GPIO_PIN_MX51(2, 7, 4, 0x2C4, 0x6C4),
	MX51_PIN_DISPB2_SER_RS = _MXC_BUILD_GPIO_PIN_MX51(2, 8, 4, 0x2C8, 0x6C8),
	MX51_PIN_DISP1_DAT0 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2CC, 0x6CC),
	MX51_PIN_DISP1_DAT1 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2D0, 0x6D0),
	MX51_PIN_DISP1_DAT2 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2D4, 0x6D4),
	MX51_PIN_DISP1_DAT3 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2D8, 0x6D8),
	MX51_PIN_DISP1_DAT4 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2DC, 0x6DC),
	MX51_PIN_DISP1_DAT5 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2E0, 0x6E0),
	MX51_PIN_DISP1_DAT6 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2E4, 0x6E4),
	MX51_PIN_DISP1_DAT7 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2E8, 0x6E8),
	MX51_PIN_DISP1_DAT8 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2EC, 0x6EC),
	MX51_PIN_DISP1_DAT9 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2F0, 0x6F0),
	MX51_PIN_DISP1_DAT10 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2F4, 0x6F4),
	MX51_PIN_DISP1_DAT11 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2F8, 0x6F8),
	MX51_PIN_DISP1_DAT12 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x2FC, 0x6FC),
	MX51_PIN_DISP1_DAT13 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x300, 0x700),
	MX51_PIN_DISP1_DAT14 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x304, 0x704),
	MX51_PIN_DISP1_DAT15 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x308, 0x708),
	MX51_PIN_DISP1_DAT16 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x30C, 0x70C),
	MX51_PIN_DISP1_DAT17 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x310, 0x710),
	MX51_PIN_DISP1_DAT18 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x314, 0x714),
	MX51_PIN_DISP1_DAT19 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x318, 0x718),
	MX51_PIN_DISP1_DAT20 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x31C, 0x71C),
	MX51_PIN_DISP1_DAT21 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x320, 0x720),
	MX51_PIN_DISP1_DAT22 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x324, 0x724),
	MX51_PIN_DISP1_DAT23 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x328, 0x728),
	MX51_PIN_DI1_PIN3 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x32C, 0x72C),
	MX51_PIN_DI1_PIN2 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x330, 0x734),
	MX51_PIN_DI_GP1 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x334, 0x73C),
	MX51_PIN_DI_GP2 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x338, 0x740),
	MX51_PIN_DI_GP3 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x33C, 0x744),
	MX51_PIN_DI2_PIN4 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x340, 0x748),
	MX51_PIN_DI2_PIN2 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x344, 0x74C),
	MX51_PIN_DI2_PIN3 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x348, 0x750),
	MX51_PIN_DI2_DISP_CLK = _MXC_BUILD_NON_GPIO_PIN_MX51(0x34C, 0x754),
	MX51_PIN_DI_GP4 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x350, 0x758),
	MX51_PIN_DISP2_DAT0 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x354, 0x75C),
	MX51_PIN_DISP2_DAT1 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x358, 0x760),
	MX51_PIN_DISP2_DAT2 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x35C, 0x764),
	MX51_PIN_DISP2_DAT3 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x360, 0x768),
	MX51_PIN_DISP2_DAT4 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x364, 0x76C),
	MX51_PIN_DISP2_DAT5 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x368, 0x770),
	MX51_PIN_DISP2_DAT6 = _MXC_BUILD_GPIO_PIN_MX51(0, 19, 5, 0x36C, 0x774),
	MX51_PIN_DISP2_DAT7 = _MXC_BUILD_GPIO_PIN_MX51(0, 29, 5, 0x370, 0x778),
	MX51_PIN_DISP2_DAT8 = _MXC_BUILD_GPIO_PIN_MX51(0, 30, 5, 0x374, 0x77C),
	MX51_PIN_DISP2_DAT9 = _MXC_BUILD_GPIO_PIN_MX51(0, 31, 5, 0x378, 0x780),
	MX51_PIN_DISP2_DAT10 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x37C, 0x784),
	MX51_PIN_DISP2_DAT11 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x380, 0x788),
	MX51_PIN_DISP2_DAT12 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x384, 0x78C),
	MX51_PIN_DISP2_DAT13 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x388, 0x790),
	MX51_PIN_DISP2_DAT14 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x38C, 0x794),
	MX51_PIN_DISP2_DAT15 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x390, 0x798),
	MX51_PIN_SD1_CMD = _MXC_BUILD_NON_GPIO_PIN_MX51(0x394, 0x79C),
	MX51_PIN_SD1_CLK = _MXC_BUILD_NON_GPIO_PIN_MX51(0x398, 0x7A0),
	MX51_PIN_SD1_DATA0 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x39C, 0x7A4),
	MX51_PIN_SD1_DATA1 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x3A0, 0x7A8),
	MX51_PIN_SD1_DATA2 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x3A4, 0x7AC),
	MX51_PIN_SD1_DATA3 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x3A8, 0x7B0),
	MX51_PIN_GPIO1_0 = _MXC_BUILD_GPIO_PIN_MX51(0, 0, 1, 0x3AC, 0x7B4),
	MX51_PIN_GPIO1_1 = _MXC_BUILD_GPIO_PIN_MX51(0, 1, 1, 0x3B0, 0x7B8),
	MX51_PIN_SD2_CMD = _MXC_BUILD_NON_GPIO_PIN_MX51(0x3B4, 0x7BC),
	MX51_PIN_SD2_CLK = _MXC_BUILD_NON_GPIO_PIN_MX51(0x3B8, 0x7C0),
	MX51_PIN_SD2_DATA0 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x3BC, 0x7C4),
	MX51_PIN_SD2_DATA1 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x3C0, 0x7C8),
	MX51_PIN_SD2_DATA2 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x3C4, 0x7CC),
	MX51_PIN_SD2_DATA3 = _MXC_BUILD_NON_GPIO_PIN_MX51(0x3C8, 0x7D0),
	MX51_PIN_GPIO1_2 = _MXC_BUILD_GPIO_PIN_MX51(0, 2, 0, 0x3CC, 0x7D4),
	MX51_PIN_GPIO1_3 = _MXC_BUILD_GPIO_PIN_MX51(0, 3, 0, 0x3D0, 0x7D8),
	MX51_PIN_PMIC_INT_REQ = _MXC_BUILD_NON_GPIO_PIN_MX51(0x3D4, 0x7FC),
	MX51_PIN_GPIO1_4 = _MXC_BUILD_GPIO_PIN_MX51(0, 4, 0, 0x3D8, 0x804),
	MX51_PIN_GPIO1_5 = _MXC_BUILD_GPIO_PIN_MX51(0, 5, 0, 0x3DC, 0x808),
	MX51_PIN_GPIO1_6 = _MXC_BUILD_GPIO_PIN_MX51(0, 6, 0, 0x3E0, 0x80C),
	MX51_PIN_GPIO1_7 = _MXC_BUILD_GPIO_PIN_MX51(0, 7, 0, 0x3E4, 0x810),
	MX51_PIN_GPIO1_8 = _MXC_BUILD_GPIO_PIN_MX51(0, 8, 0, 0x3E8, 0x814),
	MX51_PIN_GPIO1_9 = _MXC_BUILD_GPIO_PIN_MX51(0, 9, 0, 0x3EC, 0x818),
};

/*!
 * various IOMUX input select register index
 */
enum iomux_input_select_mx51 {
	MUX_IN_AUDMUX_P4_INPUT_DA_AMX_SELECT_I = 0,
	MUX_IN_AUDMUX_P4_INPUT_DB_AMX_SELECT_I,
	MUX_IN_AUDMUX_P4_INPUT_TXCLK_AMX_SELECT_INPUT,
	MUX_IN_AUDMUX_P4_INPUT_TXFS_AMX_SELECT_INPUT,
	MUX_IN_AUDMUX_P5_INPUT_DA_AMX_SELECT_INPUT,
	MUX_IN_AUDMUX_P5_INPUT_DB_AMX_SELECT_INPUT,
	MUX_IN_AUDMUX_P5_INPUT_RXCLK_AMX_SELECT_INPUT,
	MUX_IN_AUDMUX_P5_INPUT_RXFS_AMX_SELECT,
	MUX_IN_AUDMUX_P5_INPUT_TXCLK_AMX_SELECT_INPUT,
	MUX_IN_AUDMUX_P5_INPUT_TXFS_AMX_SELECT_INPUT,
	MUX_IN_AUDMUX_P6_INPUT_DA_AMX_SELECT_INPUT,
	MUX_IN_AUDMUX_P6_INPUT_DB_AMX_SELECT_INPUT,
	MUX_IN_AUDMUX_P6_INPUT_RXCLK_AMX_SELECT_INPUT,
	MUX_IN_AUDMUX_P6_INPUT_RXFS_AMX_SELECT_INPUT,
	MUX_IN_AUDMUX_P6_INPUT_TXCLK_AMX_SELECT_INPUT,
	MUX_IN_AUDMUX_P6_INPUT_TXFS_AMX_SELECT_INPUT,
	MUX_IN_CCM_IPP_DI_CLK_SELECT_INPUT,
	/* TO2 */
	MUX_IN_CCM_IPP_DI1_CLK_SELECT_INPUT,
	MUX_IN_CCM_PLL1_BYPASS_CLK_SELECT_INPUT,
	MUX_IN_CCM_PLL2_BYPASS_CLK_SELECT_INPUT,
	MUX_IN_CSPI_IPP_CSPI_CLK_IN_SELECT_INPUT,
	MUX_IN_CSPI_IPP_IND_MISO_SELECT_INPUT,
	MUX_IN_CSPI_IPP_IND_MOSI_SELECT_INPUT,
	MUX_IN_CSPI_IPP_IND_SS_B_1_SELECT_INPUT,
	MUX_IN_CSPI_IPP_IND_SS_B_2_SELECT_INPUT,
	MUX_IN_CSPI_IPP_IND_SS_B_3_SELECT_INPUT,
	MUX_IN_DPLLIP1_L1T_TOG_EN_SELECT_INPUT,
	/* TO2 */
	MUX_IN_ECSPI2_IPP_IND_SS_B_1_SELECT_INPUT,
	MUX_IN_ECSPI2_IPP_IND_SS_B_3_SELECT_INPUT,
	MUX_IN_EMI_IPP_IND_RDY_INT_SELECT_INPUT,
	MUX_IN_ESDHC3_IPP_DAT0_IN_SELECT_INPUT,
	MUX_IN_ESDHC3_IPP_DAT1_IN_SELECT_INPUT,
	MUX_IN_ESDHC3_IPP_DAT2_IN_SELECT_INPUT,
	MUX_IN_ESDHC3_IPP_DAT3_IN_SELECT_INPUT,
	MUX_IN_FEC_FEC_COL_SELECT_INPUT,
	MUX_IN_FEC_FEC_CRS_SELECT_INPUT,
	MUX_IN_FEC_FEC_MDI_SELECT_INPUT,
	MUX_IN_FEC_FEC_RDATA_0_SELECT_INPUT,
	MUX_IN_FEC_FEC_RDATA_1_SELECT_INPUT,
	MUX_IN_FEC_FEC_RDATA_2_SELECT_INPUT,
	MUX_IN_FEC_FEC_RDATA_3_SELECT_INPUT,
	MUX_IN_FEC_FEC_RX_CLK_SELECT_INPUT,
	MUX_IN_FEC_FEC_RX_DV_SELECT_INPUT,
	MUX_IN_FEC_FEC_RX_ER_SELECT_INPUT,
	MUX_IN_FEC_FEC_TX_CLK_SELECT_INPUT,
	MUX_IN_GPIO3_IPP_IND_G_IN_1_SELECT_INPUT,
	MUX_IN_GPIO3_IPP_IND_G_IN_2_SELECT_INPUT,
	MUX_IN_GPIO3_IPP_IND_G_IN_3_SELECT_INPUT,
	MUX_IN_GPIO3_IPP_IND_G_IN_4_SELECT_INPUT,
	MUX_IN_GPIO3_IPP_IND_G_IN_5_SELECT_INPUT,
	MUX_IN_GPIO3_IPP_IND_G_IN_6_SELECT_INPUT,
	MUX_IN_GPIO3_IPP_IND_G_IN_7_SELECT_INPUT,
	MUX_IN_GPIO3_IPP_IND_G_IN_8_SELECT_INPUT,
	/* TO2 */
	MUX_IN_GPIO3_IPP_IND_G_IN_12_SELECT_INPUT,
	MUX_IN_HSC_MIPI_MIX_IPP_IND_SENS1_DATA_EN_SELECT_INPUT,
	MUX_IN_HSC_MIPI_MIX_IPP_IND_SENS2_DATA_EN_SELECT_INPUT,
	/* TO2 */
	MUX_IN_HSC_MIPI_MIX_PAR_VSYNC_SELECT_INPUT,
	/* TO2 */
	MUX_IN_HSC_MIPI_MIX_PAR_DI_WAIT_SELECT_INPUT,
	MUX_IN_HSC_MIPI_MIX_PAR_SISG_TRIG_SELECT_INPUT,
	MUX_IN_I2C1_IPP_SCL_IN_SELECT_INPUT,
	MUX_IN_I2C1_IPP_SDA_IN_SELECT_INPUT,
	MUX_IN_I2C2_IPP_SCL_IN_SELECT_INPUT,
	MUX_IN_I2C2_IPP_SDA_IN_SELECT_INPUT,

	MUX_IN_IPU_IPP_DI_0_IND_DISPB_SD_D_SELECT_INPUT,

	MUX_IN_IPU_IPP_DI_1_IND_DISPB_SD_D_SELECT_INPUT,

	MUX_IN_KPP_IPP_IND_COL_6_SELECT_INPUT,
	MUX_IN_KPP_IPP_IND_COL_7_SELECT_INPUT,
	MUX_IN_KPP_IPP_IND_ROW_4_SELECT_INPUT,
	MUX_IN_KPP_IPP_IND_ROW_5_SELECT_INPUT,
	MUX_IN_KPP_IPP_IND_ROW_6_SELECT_INPUT,
	MUX_IN_KPP_IPP_IND_ROW_7_SELECT_INPUT,
	MUX_IN_UART1_IPP_UART_RTS_B_SELECT_INPUT,
	MUX_IN_UART1_IPP_UART_RXD_MUX_SELECT_INPUT,
	MUX_IN_UART2_IPP_UART_RTS_B_SELECT_INPUT,
	MUX_IN_UART2_IPP_UART_RXD_MUX_SELECT_INPUT,
	MUX_IN_UART3_IPP_UART_RTS_B_SELECT_INPUT,
	MUX_IN_UART3_IPP_UART_RXD_MUX_SELECT_INPUT,
	MUX_IN_USBOH3_IPP_IND_UH3_CLK_SELECT_INPUT,
	MUX_IN_USBOH3_IPP_IND_UH3_DATA_0_SELECT_INPUT,
	MUX_IN_USBOH3_IPP_IND_UH3_DATA_1_SELECT_INPUT,
	MUX_IN_USBOH3_IPP_IND_UH3_DATA_2_SELECT_INPUT,
	MUX_IN_USBOH3_IPP_IND_UH3_DATA_3_SELECT_INPUT,
	MUX_IN_USBOH3_IPP_IND_UH3_DATA_4_SELECT_INPUT,
	MUX_IN_USBOH3_IPP_IND_UH3_DATA_5_SELECT_INPUT,
	MUX_IN_USBOH3_IPP_IND_UH3_DATA_6_SELECT_INPUT,
	MUX_IN_USBOH3_IPP_IND_UH3_DATA_7_SELECT_INPUT,
	MUX_IN_USBOH3_IPP_IND_UH3_DIR_SELECT_INPUT,
	MUX_IN_USBOH3_IPP_IND_UH3_NXT_SELECT_INPUT,
	MUX_IN_USBOH3_IPP_IND_UH3_STP_SELECT_INPUT,
	MUX_INPUT_NUM_MUX,
};

#endif				/* __ASSEMBLY__ */
#endif				/* __ASM_ARCH_MXC_MX51_PINS_H__ */
