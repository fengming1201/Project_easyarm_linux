/*
 * Copyright (C) 2010 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */
#ifndef __MX28_EVK_H
#define __MX28_EVK_H

#include <asm/arch/mx28.h>

/*
 * SoC configurations
 */
#define CONFIG_MX28				/* i.MX28 SoC */
#define CONFIG_MX28_TO1_2
#define CONFIG_SYS_HZ		1000		/* Ticks per second */
/* ROM loads UBOOT into DRAM */
#define CONFIG_SKIP_RELOCATE_UBOOT

/*
 * Memory configurations
 */
#define CONFIG_NR_DRAM_BANKS	1		/* 1 bank of DRAM */
#define PHYS_SDRAM_1		0x40000000	/* Base address */
#define PHYS_SDRAM_1_SIZE	0x08000000	/* 128 MB */
#define CONFIG_STACKSIZE	0x00020000	/* 128 KB stack */
#define CONFIG_SYS_MALLOC_LEN	0x00400000	/* 4 MB for malloc */
#define CONFIG_SYS_GBL_DATA_SIZE 128		/* Reserved for initial data */
#define CONFIG_SYS_MEMTEST_START 0x40000000	/* Memtest start address */
#define CONFIG_SYS_MEMTEST_END	 0x40400000	/* 4 MB RAM test */

/*
 * U-Boot general configurations
 */
#define CONFIG_SYS_LONGHELP
#define CONFIG_SYS_PROMPT	"MX28 U-Boot > "
#define CONFIG_SYS_CBSIZE	1024		/* Console I/O buffer size */
#define CONFIG_SYS_PBSIZE \
	(CONFIG_SYS_CBSIZE + sizeof(CONFIG_SYS_PROMPT) + 16)	/* Print buffer size */
#define CONFIG_SYS_MAXARGS	16					/* Max number of command args */
#define CONFIG_SYS_BARGSIZE	CONFIG_SYS_CBSIZE	/* Boot argument buffer size */
#define CONFIG_VERSION_VARIABLE			/* U-BOOT version */
#define CONFIG_AUTO_COMPLETE			/* Command auto complete */
#define CONFIG_CMDLINE_EDITING			/* Command history etc */

#define CONFIG_SYS_64BIT_VSPRINTF

#define CONFIG_HW_WATCHDOG              /* watchdog */
#define BOARD_LATE_INIT                  1
/*
 * Boot Linux
 */
#define CONFIG_CMDLINE_TAG
#define CONFIG_SETUP_MEMORY_TAGS
#define CONFIG_BOOTDELAY    1	
#define CONFIG_BOOTFILE		"uImage"
//#define CONFIG_BOOTARGS		"console=ttyAM0,115200n8 "	/* modefy by zhuguojun		*/
#define CONFIG_BOOTCOMMAND	"run nand_boot"
#define CONFIG_LOADADDR		0x42000000
#define CONFIG_SYS_LOAD_ADDR	CONFIG_LOADADDR

#define UBOOT_IMAGE_SIZE        0x80000  				/* 设置u-boot的大小		*/
#define MTDIDS_DEFAULT "nand0=nandflash0"
#define MTDPARTS_DEFAULT "mtdparts=nandflash0:12m(boot),"\
                                                "512k(env),"\
                                                "512k(reserve),"\
                                                "2m(bmp),"\
                                                "512k(reserve),"\
                                                "64m(rootfs),"\
                                                "-(opt)"

#if 1
#define CONFIG_MTD_DEVICE       1 
#define CONFIG_MTD_PARTITIONS   1 
#define CONFIG_CMD_MTDPARTS 
#define CONFIG_CMD_UBIFS
#define CONFIG_CMD_UBI
#define CONFIG_LZO              1
#define CONFIG_RBTREE           1 
#endif

//#define CONFIG_DS2460                        // DS2460's switch, move this define when M283 don't have ds2460
//#define CONFIG_WINCE_FORMART                 // this define just used to forauto format nandflash
//#define CONFIG_FACTORY_DS2460                // move this define don't enter factory mode.
//#define CONFIG_TEST_OCOTP                    // test ocotp's code.
#define CONFIG_BOOT_BITMAP                     // uboot show picture.
/*
#define CONFIG_FSL_I2C
#define CONFIG_CMD_I2C
#define CONFIG_SYS_I2C_SPEED
#define CONFIG_SYS_I2C_SPEED        100000   //100 kHz
//#define CONFIG_SYS_I2C_SLAVE        0x7F
#define CONFIG_HARD_I2C
#define CONFIG_SYS_IMMR 1
#define CONFIG_SYS_I2C_OFFSET 1
*/


/*
 1 Extra Environments
 */
#define	CONFIG_EXTRA_ENV_SETTINGS \
	    "kernel=uImage\0"													\
        "kernelsize=0x400000\0"												\
        "rootfs=rootfs.ubifs\0"												\
        "showbitmap=0\0"													\
        "kerneladdr="       "0x00200000\0"									\
        "kerneladdr2="      "0x00780000\0"									\
        "gatewayip="		"192.168.1.1\0"									\
    "ds2460_mac=00:04:00:00:00:00\0"										\
	"nfsroot=/nfsroot/rootfs\0" 											\
	"bootargs=gpmi=g console=ttyAM0,115200n8 ubi.mtd=5 root=ubi0:rootfs rootfstype=ubifs ro\0" 										\
	"bootargs_nfs=setenv bootargs gpmi=g root=/dev/nfs rw console=ttyAM0,115200n8 nfsroot=$(serverip):$(nfsroot) ip=$(ipaddr):$(serverip):$(gatewayip):$(netmask):epc.zlgmcu.com:eth0:down\0"	\
	"bootcmd_net=run bootargs_nfs;\0" 				\
	"bootcmd_mmc=run bootargs_mmc; " 				\
		"mmc read 0 ${loadaddr} 100 3000; bootm\0" 	\
	"bootargs_nand=setenv bootargs gpmi=g console=ttyAM0,115200n8 ubi.mtd=5 root=ubi0:rootfs rootfstype=ubifs ro\0"					\
	"bootargs_mmc=gpmi=g console=ttyAM0,115200n8 console=tty0 root=/dev/mmcblk0p3 rw\0"												\
		"upuboot=tftp $(loadaddr) $(serverip):imx28_ivt_uboot.sb;nand erase 0x0 0x100000; nand write $(loadaddr) 0x0 0x100000\0"	\
		"upkernel="			"tftp $(loadaddr) $(serverip):$(kernel);"                          		\
                            "nand erase  $(kerneladdr) $(kernelsize);"                     			\
                            "nand write $(loadaddr) $(kerneladdr) $(filesize);\0"       			\
        "upkernel2="        "nand erase $(kerneladdr2) $(kernelsize);"								\
                            "nand write $(loadaddr) $(kerneladdr2) $(filesize)\0"					\
        "uprootfs="         "mtdparts default;"														\
                                "nand erase rootfs;"												\
                                "ubi part rootfs;"													\
                                "ubi create  rootfs;"												\
                                "tftp $(loadaddr) $(rootfs);"										\
                                "ubi write $(loadaddr) rootfs $(filesize)\0"						\
        "sd_upkernel="      "mmc read 0 0x42000000 1 1; fatload mmc 0:1 42000000 uImage;"			\
                            "nand erase  $(kerneladdr) $(kernelsize);"								\
                            "nand write $(loadaddr) $(kerneladdr) $(filesize);\0"					\
        "sd_upkernel2="     "nand erase $(kerneladdr2) $(kernelsize);"								\
                            "nand write $(loadaddr) $(kerneladdr2) $(filesize)\0"                 	\
        "sd_uprootfs="			"mtdparts default;"                                                	\
                                "nand erase rootfs;"                                            	\
                                "ubi part rootfs;"                                              	\
                                "ubi create  rootfs;"                                           	\
                                "mmc read 0 0x42000000 1 1; fatload mmc 0:1 42000000 rootfs.ubifs;"	\
                                "ubi write $(loadaddr) rootfs $(filesize)\0"            			\
        "tftp_boot=tftp $(loadaddr) $(serverip):uImage; bootm;\0"                               	\
        "nand_boot=nand read.jffs2 $(loadaddr) $(kerneladdr) $(kernelsize);"                    	\
                  "bootm $(loadaddr);"                                                              \
                  "nand read.jffs2 $(loadaddr) $(kerneladdr2) $(kernelsize);"                       \
                                                                "bootm $(loadaddr)\0"           	\
        "setnandboot=setenv bootcmd 'run  nand_boot';saveenv \0"                                	\
        "settftpboot=setenv bootcmd 'run  tftp_boot';saveenv \0"                                	\
        "upsystem=run upkernel;run upkernel2;run uprootfs;reset \0"                                 \ 
        "sd_upsystem=run sd_upkernel;run sd_upkernel2;run sd_uprootfs;reset \0"


/*
 * U-Boot Commands
 */
#define CONFIG_SYS_NO_FLASH
#include <config_cmd_default.h>
#define CONFIG_ARCH_CPU_INIT
#define CONFIG_DISPLAY_CPUINFO

#define CONFIG_CMD_MENU 

/*
 * Serial Driver
 */
#define CONFIG_UARTDBG_CLK		24000000
#define CONFIG_BAUDRATE			115200		/* Default baud rate */
#define CONFIG_SYS_BAUDRATE_TABLE	{ 9600, 19200, 38400, 57600, 115200 }


#define EPC_280 1
/*
 * FEC Driver
 */
#define CONFIG_MXC_FEC
#define CONFIG_GET_FEC_MAC_ADDR_FROM_IIM
#define CONFIG_FEC0_IOBASE		REGS_ENET_BASE
#define CONFIG_FEC0_PHY_ADDR		5	
#define CONFIG_NET_MULTI
#define CONFIG_ETH_PRIME
#define CONFIG_RMII
#define CONFIG_CMD_MII
#define CONFIG_CMD_DHCP
#define CONFIG_CMD_PING
#define CONFIG_IPADDR			192.168.1.144				//modefy by CHENHAIMAN
#define CONFIG_SERVERIP			192.168.1.145				//modefy by CHENHAIMAN
#define CONFIG_NETMASK			255.255.255.0
/* Add for working with "strict" DHCP server */
#define CONFIG_BOOTP_SUBNETMASK
#define CONFIG_BOOTP_GATEWAY
#define CONFIG_BOOTP_DNS

/*
 * MMC Driver
 */
#define CONFIG_CMD_MMC

#ifdef CONFIG_CMD_MMC
	#define CONFIG_MMC
	#define CONFIG_IMX_SSP_MMC		/* MMC driver based on SSP */
	#define CONFIG_GENERIC_MMC
	#define CONFIG_DYNAMIC_MMC_DEVNO
	#define CONFIG_DOS_PARTITION
	#define CONFIG_CMD_FAT
	#define CONFIG_SYS_SSP_MMC_NUM 2
#endif

/*
 * GPMI Nand Configs
 */
//#ifndef CONFIG_CMD_MMC	/* NAND conflict with MMC */

#define CONFIG_CMD_NAND

#ifdef CONFIG_CMD_NAND
	#define CONFIG_NAND_GPMI
	#define CONFIG_GPMI_NFC_SWAP_BLOCK_MARK
	#define CONFIG_GPMI_NFC_V1

	#define CONFIG_GPMI_REG_BASE	GPMI_BASE_ADDR
	#define CONFIG_BCH_REG_BASE	BCH_BASE_ADDR

	#define NAND_MAX_CHIPS		8
	#define CONFIG_SYS_NAND_BASE		0x40000000
	#define CONFIG_SYS_MAX_NAND_DEVICE	1
#endif

/*
 * APBH DMA Configs
 */
#define CONFIG_APBH_DMA

#ifdef CONFIG_APBH_DMA
	#define CONFIG_APBH_DMA_V1
	#define CONFIG_MXS_DMA_REG_BASE ABPHDMA_BASE_ADDR
#endif


/*
 * Environments
 */
//#define CONFIG_FSL_ENV_IN_MMC
#undef CONFIG_FSL_ENV_IN_MMC
#define CONFIG_FSL_ENV_IN_NAND		//设置环境变量保存在NAND

#define CONFIG_CMD_ENV
#define CONFIG_ENV_OVERWRITE

#if defined(CONFIG_FSL_ENV_IN_NAND)
	#define CONFIG_ENV_IS_IN_NAND 1
	#define CONFIG_ENV_OFFSET	0xc00000 /* Nand env, offset: 12M  modefy by bkq, 2016.04.21 */
	#define CONFIG_ENV_SECT_SIZE    (128 * 1024)
	#define CONFIG_ENV_SIZE         CONFIG_ENV_SECT_SIZE
#elif defined(CONFIG_FSL_ENV_IN_MMC)
	#define CONFIG_ENV_IS_IN_MMC	1
	/* Assoiated with the MMC layout defined in mmcops.c */
	#define CONFIG_ENV_OFFSET               (0x400) /* 1 KB */
	#define CONFIG_ENV_SIZE                 (0x20000 - 0x400) /* 127 KB */
#else
	#define CONFIG_ENV_IS_NOWHERE	1
#endif

/* The global boot mode will be detected by ROM code and
 * a boot mode value will be stored at fixed address:
 * TO1.0 addr 0x0001a7f0
 * TO1.2 addr 0x00019BF0
 */
#ifndef MX28_EVK_TO1_0
 #define GLOBAL_BOOT_MODE_ADDR 0x00019BF0
#else
 #define GLOBAL_BOOT_MODE_ADDR 0x0001a7f0
#endif
#define BOOT_MODE_SD0 0x9
#define BOOT_MODE_SD1 0xa


#define CONFIG_HW_WATCHDOG

#endif /* __MX28_EVK_H */
