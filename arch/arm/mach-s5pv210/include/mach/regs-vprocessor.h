/* linux/arch/arm/mach-s5pv210/include/mach/regs-vprocessor.h
*
* Copyright (c) 2010 Samsung Electronics Co., Ltd.
*		http://www.samsung.com/
*
* S5PV210 - Video Processor register header file for Samsung TVOut driver
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*/

#include <mach/map.h>

#ifndef __ASM_ARCH_REGS_VPROCESSOR_H
#define __ASM_ARCH_REGS_VPROCESSOR_H __FILE__

#define S5P_VPROCESSOR_BASE(x)		(x)

#define S5P_VP_ENABLE			S5P_VPROCESSOR_BASE(0x0000)
#define S5P_VP_SRESET			S5P_VPROCESSOR_BASE(0x0004)
#define S5P_VP_SHADOW_UPDATE		S5P_VPROCESSOR_BASE(0x0008)
#define S5P_VP_FIELD_ID			S5P_VPROCESSOR_BASE(0x000C)
#define S5P_VP_MODE			S5P_VPROCESSOR_BASE(0x0010)
#define S5P_VP_IMG_SIZE_Y		S5P_VPROCESSOR_BASE(0x0014)
#define S5P_VP_IMG_SIZE_C		S5P_VPROCESSOR_BASE(0x0018)
#define S5P_VP_PER_RATE_CTRL		S5P_VPROCESSOR_BASE(0x001C)
#define S5P_VP_TOP_Y_PTR		S5P_VPROCESSOR_BASE(0x0028)
#define S5P_VP_BOT_Y_PTR		S5P_VPROCESSOR_BASE(0x002C)
#define S5P_VP_TOP_C_PTR		S5P_VPROCESSOR_BASE(0x0030)
#define S5P_VP_BOT_C_PTR		S5P_VPROCESSOR_BASE(0x0034)
#define S5P_VP_ENDIAN_MODE		S5P_VPROCESSOR_BASE(0x03CC)
#define S5P_VP_SRC_H_POSITION		S5P_VPROCESSOR_BASE(0x0044)
#define S5P_VP_SRC_V_POSITION		S5P_VPROCESSOR_BASE(0x0048)
#define S5P_VP_SRC_WIDTH		S5P_VPROCESSOR_BASE(0x004C)
#define S5P_VP_SRC_HEIGHT		S5P_VPROCESSOR_BASE(0x0050)
#define S5P_VP_DST_H_POSITION		S5P_VPROCESSOR_BASE(0x0054)
#define S5P_VP_DST_V_POSITION		S5P_VPROCESSOR_BASE(0x0058)
#define S5P_VP_DST_WIDTH		S5P_VPROCESSOR_BASE(0x005C)
#define S5P_VP_DST_HEIGHT		S5P_VPROCESSOR_BASE(0x0060)
#define S5P_VP_H_RATIO			S5P_VPROCESSOR_BASE(0x0064)
#define S5P_VP_V_RATIO			S5P_VPROCESSOR_BASE(0x0068)
#define S5P_VP_POLY8_Y0_LL		S5P_VPROCESSOR_BASE(0x006C)
#define S5P_VP_POLY8_Y0_LH		S5P_VPROCESSOR_BASE(0x0070)
#define S5P_VP_POLY8_Y0_HL		S5P_VPROCESSOR_BASE(0x0074)
#define S5P_VP_POLY8_Y0_HH		S5P_VPROCESSOR_BASE(0x0078)
#define S5P_VP_POLY8_Y1_LL		S5P_VPROCESSOR_BASE(0x007C)
#define S5P_VP_POLY8_Y1_LH		S5P_VPROCESSOR_BASE(0x0080)
#define S5P_VP_POLY8_Y1_HL		S5P_VPROCESSOR_BASE(0x0084)
#define S5P_VP_POLY8_Y1_HH		S5P_VPROCESSOR_BASE(0x0088)
#define S5P_VP_POLY8_Y2_LL		S5P_VPROCESSOR_BASE(0x008C)
#define S5P_VP_POLY8_Y2_LH		S5P_VPROCESSOR_BASE(0x0090)
#define S5P_VP_POLY8_Y2_HL		S5P_VPROCESSOR_BASE(0x0094)
#define S5P_VP_POLY8_Y2_HH		S5P_VPROCESSOR_BASE(0x0098)
#define S5P_VP_POLY8_Y3_LL		S5P_VPROCESSOR_BASE(0x009C)
#define S5P_VP_POLY8_Y3_LH		S5P_VPROCESSOR_BASE(0x00A0)
#define S5P_VP_POLY8_Y3_HL		S5P_VPROCESSOR_BASE(0x00A4)
#define S5P_VP_POLY8_Y3_HH		S5P_VPROCESSOR_BASE(0x00A8)
#define S5P_VP_POLY4_Y0_LL		S5P_VPROCESSOR_BASE(0x00EC)
#define S5P_VP_POLY4_Y0_LH		S5P_VPROCESSOR_BASE(0x00F0)
#define S5P_VP_POLY4_Y0_HL		S5P_VPROCESSOR_BASE(0x00F4)
#define S5P_VP_POLY4_Y0_HH		S5P_VPROCESSOR_BASE(0x00F8)
#define S5P_VP_POLY4_Y1_LL		S5P_VPROCESSOR_BASE(0x00FC)
#define S5P_VP_POLY4_Y1_LH		S5P_VPROCESSOR_BASE(0x0100)
#define S5P_VP_POLY4_Y1_HL		S5P_VPROCESSOR_BASE(0x0104)
#define S5P_VP_POLY4_Y1_HH		S5P_VPROCESSOR_BASE(0x0108)
#define S5P_VP_POLY4_Y2_LL		S5P_VPROCESSOR_BASE(0x010C)
#define S5P_VP_POLY4_Y2_LH		S5P_VPROCESSOR_BASE(0x0110)
#define S5P_VP_POLY4_Y2_HL		S5P_VPROCESSOR_BASE(0x0114)
#define S5P_VP_POLY4_Y2_HH		S5P_VPROCESSOR_BASE(0x0118)
#define S5P_VP_POLY4_Y3_LL		S5P_VPROCESSOR_BASE(0x011C)
#define S5P_VP_POLY4_Y3_LH		S5P_VPROCESSOR_BASE(0x0120)
#define S5P_VP_POLY4_Y3_HL		S5P_VPROCESSOR_BASE(0x0124)
#define S5P_VP_POLY4_Y3_HH		S5P_VPROCESSOR_BASE(0x0128)
#define S5P_VP_POLY4_C0_LL		S5P_VPROCESSOR_BASE(0x012C)
#define S5P_VP_POLY4_C0_LH		S5P_VPROCESSOR_BASE(0x0130)
#define S5P_VP_POLY4_C0_HL		S5P_VPROCESSOR_BASE(0x0134)
#define S5P_VP_POLY4_C0_HH		S5P_VPROCESSOR_BASE(0x0138)
#define S5P_VP_POLY4_C1_LL		S5P_VPROCESSOR_BASE(0x013C)
#define S5P_VP_POLY4_C1_LH		S5P_VPROCESSOR_BASE(0x0140)
#define S5P_VP_POLY4_C1_HL		S5P_VPROCESSOR_BASE(0x0144)
#define S5P_VP_POLY4_C1_HH		S5P_VPROCESSOR_BASE(0x0148)
#define S5P_PP_CSC_Y2Y_COEF		S5P_VPROCESSOR_BASE(0x01D4)
#define S5P_PP_CSC_CB2Y_COEF		S5P_VPROCESSOR_BASE(0x01D8)
#define S5P_PP_CSC_CR2Y_COEF		S5P_VPROCESSOR_BASE(0x01DC)
#define S5P_PP_CSC_Y2CB_COEF		S5P_VPROCESSOR_BASE(0x01E0)
#define S5P_PP_CSC_CB2CB_COEF		S5P_VPROCESSOR_BASE(0x01E4)
#define S5P_PP_CSC_CR2CB_COEF		S5P_VPROCESSOR_BASE(0x01E8)
#define S5P_PP_CSC_Y2CR_COEF		S5P_VPROCESSOR_BASE(0x01EC)
#define S5P_PP_CSC_CB2CR_COEF		S5P_VPROCESSOR_BASE(0x01F0)
#define S5P_PP_CSC_CR2CR_COEF		S5P_VPROCESSOR_BASE(0x01F4)
#define S5P_PP_BYPASS			S5P_VPROCESSOR_BASE(0x0200)
#define S5P_PP_SATURATION		S5P_VPROCESSOR_BASE(0x020C)
#define S5P_PP_SHARPNESS		S5P_VPROCESSOR_BASE(0x0210)
#define S5P_PP_LINE_EQ0			S5P_VPROCESSOR_BASE(0x0218)
#define S5P_PP_LINE_EQ1			S5P_VPROCESSOR_BASE(0x021C)
#define S5P_PP_LINE_EQ2			S5P_VPROCESSOR_BASE(0x0220)
#define S5P_PP_LINE_EQ3			S5P_VPROCESSOR_BASE(0x0224)
#define S5P_PP_LINE_EQ4			S5P_VPROCESSOR_BASE(0x0228)
#define S5P_PP_LINE_EQ5			S5P_VPROCESSOR_BASE(0x022C)
#define S5P_PP_LINE_EQ6			S5P_VPROCESSOR_BASE(0x0230)
#define S5P_PP_LINE_EQ7			S5P_VPROCESSOR_BASE(0x0234)
#define S5P_PP_BRIGHT_OFFSET		S5P_VPROCESSOR_BASE(0x0238)
#define S5P_PP_CSC_EN			S5P_VPROCESSOR_BASE(0x023C)
#define S5P_VP_VERSION_INFO		S5P_VPROCESSOR_BASE(0x03FC)

#define S5P_VP_FIELD_ID_S		S5P_VPROCESSOR_BASE(0x016C)
#define S5P_VP_MODE_S			S5P_VPROCESSOR_BASE(0x0170)
#define S5P_VP_IMG_SIZE_Y_S		S5P_VPROCESSOR_BASE(0x0174)
#define S5P_VP_IMG_SIZE_C_S		S5P_VPROCESSOR_BASE(0x0178)
#define S5P_VP_TOP_Y_PTR_S		S5P_VPROCESSOR_BASE(0x0190)
#define S5P_VP_BOT_Y_PTR_S		S5P_VPROCESSOR_BASE(0x0194)
#define S5P_VP_TOP_C_PTR_S		S5P_VPROCESSOR_BASE(0x0198)
#define S5P_VP_BOT_C_PTR_S		S5P_VPROCESSOR_BASE(0x019C)
#define S5P_VP_ENDIAN_MODE_S		S5P_VPROCESSOR_BASE(0x03EC)
#define S5P_VP_SRC_H_POSITION_S		S5P_VPROCESSOR_BASE(0x01AC)
#define S5P_VP_SRC_V_POSITION_S		S5P_VPROCESSOR_BASE(0x01B0)
#define S5P_VP_SRC_WIDTH_S		S5P_VPROCESSOR_BASE(0x01B4)
#define S5P_VP_SRC_HEIGHT_S		S5P_VPROCESSOR_BASE(0x01B8)
#define S5P_VP_DST_H_POSITION_S		S5P_VPROCESSOR_BASE(0x01BC)
#define S5P_VP_DST_V_POSITION_S		S5P_VPROCESSOR_BASE(0x01C0)
#define S5P_VP_DST_WIDTH_S		S5P_VPROCESSOR_BASE(0x01C4)
#define S5P_VP_DST_HEIGHT_S		S5P_VPROCESSOR_BASE(0x01C8)
#define S5P_VP_H_RATIO_S		S5P_VPROCESSOR_BASE(0x01CC)
#define S5P_VP_V_RATIO_S		S5P_VPROCESSOR_BASE(0x01D0)
#define S5P_PP_BYPASS_S			S5P_VPROCESSOR_BASE(0x0258)
#define S5P_PP_SATURATION_S		S5P_VPROCESSOR_BASE(0x025C)
#define S5P_PP_SHARPNESS_S		S5P_VPROCESSOR_BASE(0x0260)
#define S5P_PP_LINE_EQ0_S		S5P_VPROCESSOR_BASE(0x0268)
#define S5P_PP_LINE_EQ1_S		S5P_VPROCESSOR_BASE(0x026C)
#define S5P_PP_LINE_EQ2_S		S5P_VPROCESSOR_BASE(0x0270)
#define S5P_PP_LINE_EQ3_S		S5P_VPROCESSOR_BASE(0x0274)
#define S5P_PP_LINE_EQ4_S		S5P_VPROCESSOR_BASE(0x0278)
#define S5P_PP_LINE_EQ5_S		S5P_VPROCESSOR_BASE(0x027C)
#define S5P_PP_LINE_EQ6_S		S5P_VPROCESSOR_BASE(0x0280)
#define S5P_PP_LINE_EQ7_S		S5P_VPROCESSOR_BASE(0x0284)
#define S5P_PP_BRIGHT_OFFSET_S		S5P_VPROCESSOR_BASE(0x0288)
#define S5P_PP_CSC_EN_S			S5P_VPROCESSOR_BASE(0x028C)
#define S5P_PP_CSC_Y2Y_COEF_S		S5P_VPROCESSOR_BASE(0x0290)
#define S5P_PP_CSC_CB2Y_COEF_S		S5P_VPROCESSOR_BASE(0x0294)
#define S5P_PP_CSC_CR2Y_COEF_S		S5P_VPROCESSOR_BASE(0x0298)
#define S5P_PP_CSC_Y2CB_COEF_S		S5P_VPROCESSOR_BASE(0x029C)
#define S5P_PP_CSC_CB2CB_COEF_S		S5P_VPROCESSOR_BASE(0x02A0)
#define S5P_PP_CSC_CR2CB_COEF_S		S5P_VPROCESSOR_BASE(0x02A4)
#define S5P_PP_CSC_Y2CR_COEF_S		S5P_VPROCESSOR_BASE(0x02A8)
#define S5P_PP_CSC_CB2CR_COEF_S		S5P_VPROCESSOR_BASE(0x02AC)
#define S5P_PP_CSC_CR2CR_COEF_S		S5P_VPROCESSOR_BASE(0x02B0)

#define S5P_VP_ENABLE_ON		(1<<0)
#define S5P_VP_ENABLE_ON_S		(1<<2)

#define S5P_VP_SRESET_LAST_COMPLETE	(0<<0)
#define S5P_VP_SRESET_PROCESSING	(1<<0)

#define S5P_VP_SHADOW_UPDATE_DISABLE	(0<<0)
#define S5P_VP_SHADOW_UPDATE_ENABLE	(1<<0)

#define S5P_VP_FIELD_ID_TOP		(0<<0)
#define S5P_VP_FIELD_ID_BOTTOM		(1<<0)

#define S5P_VP_MODE_2D_IPC_ENABLE			(1<<1)
#define S5P_VP_MODE_2D_IPC_DISABLE			(0<<1)
#define S5P_VP_MODE_FIELD_ID_MAN_TOGGLING		(0<<2)
#define S5P_VP_MODE_FIELD_ID_AUTO_TOGGLING		(1<<2)
#define S5P_VP_MODE_CROMA_EXPANSION_C_TOP_PTR		(0<<3)
#define S5P_VP_MODE_CROMA_EXPANSION_C_TOPBOTTOM_PTR	(1<<3)
#define S5P_VP_MODE_MEM_MODE_LINEAR			(0<<4)
#define S5P_VP_MODE_MEM_MODE_2D_TILE			(1<<4)
#define S5P_VP_MODE_LINE_SKIP_OFF			(0<<5)
#define S5P_VP_MODE_LINE_SKIP_ON			(1<<5)

#define S5P_VP_ENDIAN_MODE_BIG		(0<<0)
#define S5P_VP_ENDIAN_MODE_LITTLE	(1<<0)

#define VP_ON_SW_RESET			(1<<2)
#define VP_POWER_DOWN_RDY		(1<<1)
#define VP_ON_ENABLE			(1<<0)
#define VP_ON_DISABLE			(0<<0)

#define VP_SOFT_RESET			(1<<0)

#define VP_SHADOW_UPDATE_ENABLE		(1<<0)
#define VP_SHADOW_UPDATE_DISABLE	(0<<0)

#define VP_FIELD_ID_BOTTOM		(1<<0)
#define VP_FIELD_ID_TOP			(0<<0)

#define VP_LINE_SKIP_ON			(1<<5)
#define VP_LINE_SKIP_OFF		(0<<5)
#define VP_MEM_2D_MODE			(1<<4)
#define VP_MEM_LINEAR_MODE		(0<<4)
#define VP_CHROMA_USE_TOP_BOTTOM	(1<<3)
#define VP_CHROMA_USE_TOP		(0<<3)
#define VP_FIELD_ID_TOGGLE_VSYNC	(1<<2)
#define VP_FIELD_ID_TOGGLE_USER		(0<<2)
#define VP_2D_IPC_ON			(1<<1)
#define VP_2D_IPC_OFF			(0<<1)

#define VP_IMG_HSIZE(x)			((0x3fff&x)<<16)
#define VP_IMG_VSIZE(x)			((0x3fff&x)<<0)
#define VP_IMG_SIZE_ILLEGAL(x)		(0x7&x)

#define VP_PEL_RATE_CTRL(x)		((0x3&x)<<0)

#define VP_PTR_ILLEGAL(x)		(0x7&x)

#define VP_LITTLE_ENDIAN_MODE		(1<<0)
#define VP_BIG_ENDIAN_MODE		(0<<0)

#define VP_SRC_H_POSITION(x)		((0x7ff&x)<<4)
#define VP_SRC_X_FRACT_STEP(x)		(0xf&x)

#define VP_SRC_V_POSITION(x)		(0x7ff&x)

#define VP_SRC_WIDTH(x)			(0x7ff&x)
#define VP_SRC_HEIGHT(x)		(0x7ff&x)
#define VP_DST_H_POSITION(x)		(0x7ff&x)
#define VP_DST_V_POSITION(x)		(0x7ff&x)
#define VP_DST_WIDTH(x)			(0x7ff&x)
#define VP_DST_HEIGHT(x)		(0x7ff&x)
#define VP_H_RATIO(x)			(0x7ffff&x)
#define VP_V_RATIO(x)			(0x7ffff&x)

#define VP_POLY8_Y0_x0(x)		((0x7&x)<<24)
#define VP_POLY8_Y0_x1(x)		((0x7&x)<<16)
#define VP_POLY8_Y0_x2(x)		((0x7&x)<<8)
#define VP_POLY8_Y0_x3(x)		((0x7&x)<<0)

#define VP_POLY8_Y1_x0(x)		((0x1f&x)<<24)
#define VP_POLY8_Y1_x1(x)		((0x1f&x)<<16)
#define VP_POLY8_Y1_x2(x)		((0x1f&x)<<8)
#define VP_POLY8_Y1_x3(x)		((0x1f&x)<<0)

#define VP_POLY8_Y2_x0(x)		((0x7f&x)<<24)
#define VP_POLY8_Y2_x1(x)		((0x7f&x)<<16)
#define VP_POLY8_Y2_x2(x)		((0x7f&x)<<8)
#define VP_POLY8_Y2_x3(x)		((0x7f&x)<<0)

#define VP_POLY8_Y3_x0(x)		((0x7f&x)<<24)
#define VP_POLY8_Y3_x1(x)		((0x7f&x)<<16)
#define VP_POLY8_Y3_x2(x)		((0x7f&x)<<8)
#define VP_POLY8_Y3_x3(x)		((0x7f&x)<<0)

#define VP_POLY4_Y0_x0(x)		((0x3f&x)<<24)
#define VP_POLY4_Y0_x1(x)		((0x3f&x)<<16)
#define VP_POLY4_Y0_x2(x)		((0x3f&x)<<8)
#define VP_POLY4_Y0_x3(x)		((0x3f&x)<<0)

#define VP_POLY4_Y1_x0(x)		((0x7f&x)<<24)
#define VP_POLY4_Y1_x1(x)		((0x7f&x)<<16)
#define VP_POLY4_Y1_x2(x)		((0x7f&x)<<8)
#define VP_POLY4_Y1_x3(x)		((0x7f&x)<<0)

#define VP_POLY4_Y2_x0(x)		((0x7f&x)<<24)
#define VP_POLY4_Y2_x1(x)		((0x7f&x)<<16)
#define VP_POLY4_Y2_x2(x)		((0x7f&x)<<8)
#define VP_POLY4_Y2_x3(x)		((0x7f&x)<<0)

#define VP_POLY4_Y3_x0(x)		((0x3f&x)<<24)
#define VP_POLY4_Y3_x1(x)		((0x3f&x)<<16)
#define VP_POLY4_Y3_x2(x)		((0x3f&x)<<8)
#define VP_POLY4_Y3_x3(x)		((0x3f&x)<<0)

#define VP_POLY4_C0_PH0(x)		((0x7f&x)<<24)
#define VP_POLY4_C0_PH1(x)		((0x7f&x)<<16)
#define VP_POLY4_C0_PH2(x)		((0x7f&x)<<8)
#define VP_POLY4_C0_PH3(x)		((0x7f&x)<<0)

#define VP_POLY4_C0_PH4(x)		((0x3f&x)<<24)
#define VP_POLY4_C0_PH5(x)		((0x3f&x)<<16)
#define VP_POLY4_C0_PH6(x)		((0x3f&x)<<8)
#define VP_POLY4_C0_PH7(x)		((0x3f&x)<<0)

#define VP_POLY4_C0_PH8(x)		((0x3f&x)<<24)
#define VP_POLY4_C0_PH9(x)		((0x3f&x)<<16)
#define VP_POLY4_C0_PH10(x)		((0x3f&x)<<8)
#define VP_POLY4_C0_PH11(x)		((0x3f&x)<<0)

#define VP_POLY4_C0_PH12(x)		((0x1f&x)<<24)
#define VP_POLY4_C0_PH13(x)		((0x1f&x)<<16)
#define VP_POLY4_C0_PH14(x)		((0x1f&x)<<8)
#define VP_POLY4_C0_PH15(x)		((0x1f&x)<<0)

#define VP_POLY4_C1_PH0(x)		((0xff&x)<<24)
#define VP_POLY4_C1_PH1(x)		((0xff&x)<<16)
#define VP_POLY4_C1_PH2(x)		((0xff&x)<<8)
#define VP_POLY4_C1_PH3(x)		((0xff&x)<<0)

#define VP_POLY4_C1_PH4(x)		((0xff&x)<<24)
#define VP_POLY4_C1_PH5(x)		((0xff&x)<<16)
#define VP_POLY4_C1_PH6(x)		((0xff&x)<<8)
#define VP_POLY4_C1_PH7(x)		((0xff&x)<<0)

#define VP_POLY4_C1_PH8(x)		((0xff&x)<<24)
#define VP_POLY4_C1_PH9(x)		((0xff&x)<<16)
#define VP_POLY4_C1_PH10(x)		((0xff&x)<<8)
#define VP_POLY4_C1_PH11(x)		((0xff&x)<<0)

#define VP_POLY4_C1_PH12(x)		((0x7f&x)<<24)
#define VP_POLY4_C1_PH13(x)		((0x7f&x)<<16)
#define VP_POLY4_C1_PH14(x)		((0x7f&x)<<8)
#define VP_POLY4_C1_PH15(x)		((0x7f&x)<<0)

#define VP_CSC_COEF(x)			(0xfff&x)

#define VP_BY_PASS_ENABLE		(0)
#define VP_BY_PASS_DISABLE		(1)

#define VP_SATURATION(x)		(0xff&x)

#define VP_TH_HNOISE(x)			((0xf&x)<<8)
#define VP_SHARPNESS(x)			(0x3&x)

#define VP_LINE_INTC(x)			((0xffff&x)<<8)
#define VP_LINE_SLOPE(x)		(0xff&x)
#define VP_LINE_INTC_CLEAR(x)		(~(0xffff<<8)&x)
#define VP_LINE_SLOPE_CLEAR(x)		(~0xff&x)

#define VP_BRIGHT_OFFSET(x)		(0x1ff&x)

#define VP_SUB_Y_OFFSET_ENABLE		(1<<1)
#define VP_SUB_Y_OFFSET_DISABLE		(0<<1)
#define VP_CSC_ENABLE			(1)
#define VP_CSC_DISABLE			(0)

static unsigned int g_vp_contrast_brightness;

/*
* Ref. to VP manual p37-39
* [11] : sign bit, [10] : integer bit, [9:0] : fraction bit
* CSC from BT.601(SD) to BT.709(HD)
*/
#define Y2Y_COEF_601_TO_709		0x400 /* 1.0 */
#define CB2Y_COEF_601_TO_709		0x879 /* about -0.118188 */
#define CR2Y_COEF_601_TO_709		0x8d9 /* about -0.212685 */

#define Y2CB_COEF_601_TO_709		0x0 /* 0 */
#define CB2CB_COEF_601_TO_709		0x413 /* about 1.018640 */
#define CR2CB_COEF_601_TO_709		0x875 /* about -0.114618 */

#define Y2CR_COEF_601_TO_709		0x0
#define CB2CR_COEF_601_TO_709		0x04d /* about 0.075049 */
#define CR2CR_COEF_601_TO_709		0x41a /* about 1.025327 */

#define Y2Y_COEF_709_TO_601		0x400
#define CB2Y_COEF_709_TO_601		0x068 /* about 0.101579 */
#define CR2Y_COEF_709_TO_601		0x0c9 /* about 0.196076 */

#define Y2CB_COEF_709_TO_601		0x0
#define CB2CB_COEF_709_TO_601		0x3f6 /* about 0.989854 */
#define CR2CB_COEF_709_TO_601		0x871 /* about -0.110653 */

#define Y2CR_COEF_709_TO_601		0x0
#define CB2CR_COEF_709_TO_601		0x84a /* about -0.072453 */
#define CR2CR_COEF_709_TO_601		0xbef /* about -0.983398 */

#define TILE_WIDTH			0x40
#define MAX_NUM_OF_FRM			34 /* according to MFC */

#endif /* __ASM_ARCH_REGS_VPROCESSOR_H */
