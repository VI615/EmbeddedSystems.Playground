#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice.h>
#include <cydevice_trm.h>

/* LED_Brightness_DMA */
#define LED_Brightness_DMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define LED_Brightness_DMA__DRQ_NUMBER 0
#define LED_Brightness_DMA__NUMBEROF_TDS 0
#define LED_Brightness_DMA__PRIORITY 2
#define LED_Brightness_DMA__TERMIN_EN 0
#define LED_Brightness_DMA__TERMIN_SEL 0
#define LED_Brightness_DMA__TERMOUT0_EN 0
#define LED_Brightness_DMA__TERMOUT0_SEL 0
#define LED_Brightness_DMA__TERMOUT1_EN 0
#define LED_Brightness_DMA__TERMOUT1_SEL 0

/* LED_COM_PWM_PWMUDB */
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB02_03_CTL
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB02_03_CTL
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB02_03_CTL
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB02_03_CTL
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG CYREG_B0_UDB02_03_MSK
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB02_03_MSK
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB02_03_MSK
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB02_03_MSK
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK 0x80u
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS 7
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG CYREG_B0_UDB02_CTL
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG CYREG_B0_UDB02_ST_CTL
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG CYREG_B0_UDB02_CTL
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG CYREG_B0_UDB02_ST_CTL
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__MASK 0x80u
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG CYREG_B0_UDB02_MSK
#define LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG CYREG_B0_UDB02_03_A0
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG CYREG_B0_UDB02_03_A1
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG CYREG_B0_UDB02_03_D0
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG CYREG_B0_UDB02_03_D1
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG CYREG_B0_UDB02_03_F0
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG CYREG_B0_UDB02_03_F1
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__A0_A1_REG CYREG_B0_UDB02_A0_A1
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__A0_REG CYREG_B0_UDB02_A0
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__A1_REG CYREG_B0_UDB02_A1
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__D0_D1_REG CYREG_B0_UDB02_D0_D1
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__D0_REG CYREG_B0_UDB02_D0
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__D1_REG CYREG_B0_UDB02_D1
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__F0_F1_REG CYREG_B0_UDB02_F0_F1
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__F0_REG CYREG_B0_UDB02_F0
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__F1_REG CYREG_B0_UDB02_F1
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__0__MASK 0x01u
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__0__POS 0
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__16BIT_STATUS_REG CYREG_B0_UDB02_03_ST
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__2__MASK 0x04u
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__2__POS 2
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__3__MASK 0x08u
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__3__POS 3
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__5__MASK 0x20u
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__5__POS 5
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__MASK 0x2Du
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__MASK_REG CYREG_B0_UDB02_MSK
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__MASK_ST_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__PER_ST_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_CNT_REG CYREG_B0_UDB02_ST_CTL
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_CONTROL_REG CYREG_B0_UDB02_ST_CTL
#define LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_REG CYREG_B0_UDB02_ST

/* LED_Refresh_Clock */
#define LED_Refresh_Clock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define LED_Refresh_Clock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define LED_Refresh_Clock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define LED_Refresh_Clock__CFG2_SRC_SEL_MASK 0x07u
#define LED_Refresh_Clock__INDEX 0x01u
#define LED_Refresh_Clock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define LED_Refresh_Clock__PM_ACT_MSK 0x02u
#define LED_Refresh_Clock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define LED_Refresh_Clock__PM_STBY_MSK 0x02u

/* LED_Segment_DMA */
#define LED_Segment_DMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define LED_Segment_DMA__DRQ_NUMBER 2
#define LED_Segment_DMA__NUMBEROF_TDS 0
#define LED_Segment_DMA__PRIORITY 2
#define LED_Segment_DMA__TERMIN_EN 0
#define LED_Segment_DMA__TERMIN_SEL 0
#define LED_Segment_DMA__TERMOUT0_EN 0
#define LED_Segment_DMA__TERMOUT0_SEL 0
#define LED_Segment_DMA__TERMOUT1_EN 0
#define LED_Segment_DMA__TERMOUT1_SEL 0

/* LED_Common_DMA */
#define LED_Common_DMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define LED_Common_DMA__DRQ_NUMBER 1
#define LED_Common_DMA__NUMBEROF_TDS 0
#define LED_Common_DMA__PRIORITY 2
#define LED_Common_DMA__TERMIN_EN 0
#define LED_Common_DMA__TERMIN_SEL 0
#define LED_Common_DMA__TERMOUT0_EN 0
#define LED_Common_DMA__TERMOUT0_SEL 0
#define LED_Common_DMA__TERMOUT1_EN 0
#define LED_Common_DMA__TERMOUT1_SEL 0

/* LED_PWM_Clock */
#define LED_PWM_Clock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define LED_PWM_Clock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define LED_PWM_Clock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define LED_PWM_Clock__CFG2_SRC_SEL_MASK 0x07u
#define LED_PWM_Clock__INDEX 0x00u
#define LED_PWM_Clock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define LED_PWM_Clock__PM_ACT_MSK 0x01u
#define LED_PWM_Clock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define LED_PWM_Clock__PM_STBY_MSK 0x01u

/* LED_RAM_1 */
#define LED_RAM_1_ctrl_reg__0__MASK 0x01u
#define LED_RAM_1_ctrl_reg__0__POS 0
#define LED_RAM_1_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define LED_RAM_1_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB07_08_CTL
#define LED_RAM_1_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB07_08_CTL
#define LED_RAM_1_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB07_08_CTL
#define LED_RAM_1_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_B1_UDB07_08_CTL
#define LED_RAM_1_ctrl_reg__16BIT_MASK_MASK_REG CYREG_B1_UDB07_08_MSK
#define LED_RAM_1_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_B1_UDB07_08_MSK
#define LED_RAM_1_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_B1_UDB07_08_MSK
#define LED_RAM_1_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB07_08_MSK
#define LED_RAM_1_ctrl_reg__1__MASK 0x02u
#define LED_RAM_1_ctrl_reg__1__POS 1
#define LED_RAM_1_ctrl_reg__2__MASK 0x04u
#define LED_RAM_1_ctrl_reg__2__POS 2
#define LED_RAM_1_ctrl_reg__3__MASK 0x08u
#define LED_RAM_1_ctrl_reg__3__POS 3
#define LED_RAM_1_ctrl_reg__4__MASK 0x10u
#define LED_RAM_1_ctrl_reg__4__POS 4
#define LED_RAM_1_ctrl_reg__5__MASK 0x20u
#define LED_RAM_1_ctrl_reg__5__POS 5
#define LED_RAM_1_ctrl_reg__6__MASK 0x40u
#define LED_RAM_1_ctrl_reg__6__POS 6
#define LED_RAM_1_ctrl_reg__7__MASK 0x80u
#define LED_RAM_1_ctrl_reg__7__POS 7
#define LED_RAM_1_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define LED_RAM_1_ctrl_reg__CONTROL_REG CYREG_B1_UDB07_CTL
#define LED_RAM_1_ctrl_reg__CONTROL_ST_REG CYREG_B1_UDB07_ST_CTL
#define LED_RAM_1_ctrl_reg__COUNT_REG CYREG_B1_UDB07_CTL
#define LED_RAM_1_ctrl_reg__COUNT_ST_REG CYREG_B1_UDB07_ST_CTL
#define LED_RAM_1_ctrl_reg__MASK 0xFFu
#define LED_RAM_1_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB07_MSK_ACTL
#define LED_RAM_1_ctrl_reg__PERIOD_REG CYREG_B1_UDB07_MSK
#define LED_RAM_1_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B1_UDB07_MSK_ACTL

/* LED_RAM_2 */
#define LED_RAM_2_ctrl_reg__0__MASK 0x01u
#define LED_RAM_2_ctrl_reg__0__POS 0
#define LED_RAM_2_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB03_04_ACTL
#define LED_RAM_2_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB03_04_CTL
#define LED_RAM_2_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB03_04_CTL
#define LED_RAM_2_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB03_04_CTL
#define LED_RAM_2_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB03_04_CTL
#define LED_RAM_2_ctrl_reg__16BIT_MASK_MASK_REG CYREG_B0_UDB03_04_MSK
#define LED_RAM_2_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB03_04_MSK
#define LED_RAM_2_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB03_04_MSK
#define LED_RAM_2_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB03_04_MSK
#define LED_RAM_2_ctrl_reg__1__MASK 0x02u
#define LED_RAM_2_ctrl_reg__1__POS 1
#define LED_RAM_2_ctrl_reg__2__MASK 0x04u
#define LED_RAM_2_ctrl_reg__2__POS 2
#define LED_RAM_2_ctrl_reg__3__MASK 0x08u
#define LED_RAM_2_ctrl_reg__3__POS 3
#define LED_RAM_2_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B0_UDB03_ACTL
#define LED_RAM_2_ctrl_reg__CONTROL_REG CYREG_B0_UDB03_CTL
#define LED_RAM_2_ctrl_reg__CONTROL_ST_REG CYREG_B0_UDB03_ST_CTL
#define LED_RAM_2_ctrl_reg__COUNT_REG CYREG_B0_UDB03_CTL
#define LED_RAM_2_ctrl_reg__COUNT_ST_REG CYREG_B0_UDB03_ST_CTL
#define LED_RAM_2_ctrl_reg__MASK 0x0Fu
#define LED_RAM_2_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB03_MSK_ACTL
#define LED_RAM_2_ctrl_reg__PERIOD_REG CYREG_B0_UDB03_MSK
#define LED_RAM_2_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB03_MSK_ACTL

/* Segment_0 */
#define Segment_0__0__MASK 0x01u
#define Segment_0__0__PC CYREG_PRT3_PC0
#define Segment_0__0__PORT 3
#define Segment_0__0__SHIFT 0
#define Segment_0__AG CYREG_PRT3_AG
#define Segment_0__AMUX CYREG_PRT3_AMUX
#define Segment_0__BIE CYREG_PRT3_BIE
#define Segment_0__BIT_MASK CYREG_PRT3_BIT_MASK
#define Segment_0__BYP CYREG_PRT3_BYP
#define Segment_0__CTL CYREG_PRT3_CTL
#define Segment_0__DM0 CYREG_PRT3_DM0
#define Segment_0__DM1 CYREG_PRT3_DM1
#define Segment_0__DM2 CYREG_PRT3_DM2
#define Segment_0__DR CYREG_PRT3_DR
#define Segment_0__INP_DIS CYREG_PRT3_INP_DIS
#define Segment_0__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Segment_0__LCD_EN CYREG_PRT3_LCD_EN
#define Segment_0__MASK 0x01u
#define Segment_0__PORT 3
#define Segment_0__PRT CYREG_PRT3_PRT
#define Segment_0__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Segment_0__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Segment_0__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Segment_0__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Segment_0__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Segment_0__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Segment_0__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Segment_0__PS CYREG_PRT3_PS
#define Segment_0__SHIFT 0
#define Segment_0__SLW CYREG_PRT3_SLW

/* Segment_1 */
#define Segment_1__0__MASK 0x02u
#define Segment_1__0__PC CYREG_PRT3_PC1
#define Segment_1__0__PORT 3
#define Segment_1__0__SHIFT 1
#define Segment_1__AG CYREG_PRT3_AG
#define Segment_1__AMUX CYREG_PRT3_AMUX
#define Segment_1__BIE CYREG_PRT3_BIE
#define Segment_1__BIT_MASK CYREG_PRT3_BIT_MASK
#define Segment_1__BYP CYREG_PRT3_BYP
#define Segment_1__CTL CYREG_PRT3_CTL
#define Segment_1__DM0 CYREG_PRT3_DM0
#define Segment_1__DM1 CYREG_PRT3_DM1
#define Segment_1__DM2 CYREG_PRT3_DM2
#define Segment_1__DR CYREG_PRT3_DR
#define Segment_1__INP_DIS CYREG_PRT3_INP_DIS
#define Segment_1__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Segment_1__LCD_EN CYREG_PRT3_LCD_EN
#define Segment_1__MASK 0x02u
#define Segment_1__PORT 3
#define Segment_1__PRT CYREG_PRT3_PRT
#define Segment_1__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Segment_1__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Segment_1__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Segment_1__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Segment_1__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Segment_1__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Segment_1__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Segment_1__PS CYREG_PRT3_PS
#define Segment_1__SHIFT 1
#define Segment_1__SLW CYREG_PRT3_SLW

/* Segment_2 */
#define Segment_2__0__MASK 0x04u
#define Segment_2__0__PC CYREG_PRT3_PC2
#define Segment_2__0__PORT 3
#define Segment_2__0__SHIFT 2
#define Segment_2__AG CYREG_PRT3_AG
#define Segment_2__AMUX CYREG_PRT3_AMUX
#define Segment_2__BIE CYREG_PRT3_BIE
#define Segment_2__BIT_MASK CYREG_PRT3_BIT_MASK
#define Segment_2__BYP CYREG_PRT3_BYP
#define Segment_2__CTL CYREG_PRT3_CTL
#define Segment_2__DM0 CYREG_PRT3_DM0
#define Segment_2__DM1 CYREG_PRT3_DM1
#define Segment_2__DM2 CYREG_PRT3_DM2
#define Segment_2__DR CYREG_PRT3_DR
#define Segment_2__INP_DIS CYREG_PRT3_INP_DIS
#define Segment_2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Segment_2__LCD_EN CYREG_PRT3_LCD_EN
#define Segment_2__MASK 0x04u
#define Segment_2__PORT 3
#define Segment_2__PRT CYREG_PRT3_PRT
#define Segment_2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Segment_2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Segment_2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Segment_2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Segment_2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Segment_2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Segment_2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Segment_2__PS CYREG_PRT3_PS
#define Segment_2__SHIFT 2
#define Segment_2__SLW CYREG_PRT3_SLW

/* Segment_3 */
#define Segment_3__0__MASK 0x08u
#define Segment_3__0__PC CYREG_PRT3_PC3
#define Segment_3__0__PORT 3
#define Segment_3__0__SHIFT 3
#define Segment_3__AG CYREG_PRT3_AG
#define Segment_3__AMUX CYREG_PRT3_AMUX
#define Segment_3__BIE CYREG_PRT3_BIE
#define Segment_3__BIT_MASK CYREG_PRT3_BIT_MASK
#define Segment_3__BYP CYREG_PRT3_BYP
#define Segment_3__CTL CYREG_PRT3_CTL
#define Segment_3__DM0 CYREG_PRT3_DM0
#define Segment_3__DM1 CYREG_PRT3_DM1
#define Segment_3__DM2 CYREG_PRT3_DM2
#define Segment_3__DR CYREG_PRT3_DR
#define Segment_3__INP_DIS CYREG_PRT3_INP_DIS
#define Segment_3__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Segment_3__LCD_EN CYREG_PRT3_LCD_EN
#define Segment_3__MASK 0x08u
#define Segment_3__PORT 3
#define Segment_3__PRT CYREG_PRT3_PRT
#define Segment_3__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Segment_3__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Segment_3__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Segment_3__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Segment_3__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Segment_3__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Segment_3__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Segment_3__PS CYREG_PRT3_PS
#define Segment_3__SHIFT 3
#define Segment_3__SLW CYREG_PRT3_SLW

/* Segment_4 */
#define Segment_4__0__MASK 0x10u
#define Segment_4__0__PC CYREG_PRT3_PC4
#define Segment_4__0__PORT 3
#define Segment_4__0__SHIFT 4
#define Segment_4__AG CYREG_PRT3_AG
#define Segment_4__AMUX CYREG_PRT3_AMUX
#define Segment_4__BIE CYREG_PRT3_BIE
#define Segment_4__BIT_MASK CYREG_PRT3_BIT_MASK
#define Segment_4__BYP CYREG_PRT3_BYP
#define Segment_4__CTL CYREG_PRT3_CTL
#define Segment_4__DM0 CYREG_PRT3_DM0
#define Segment_4__DM1 CYREG_PRT3_DM1
#define Segment_4__DM2 CYREG_PRT3_DM2
#define Segment_4__DR CYREG_PRT3_DR
#define Segment_4__INP_DIS CYREG_PRT3_INP_DIS
#define Segment_4__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Segment_4__LCD_EN CYREG_PRT3_LCD_EN
#define Segment_4__MASK 0x10u
#define Segment_4__PORT 3
#define Segment_4__PRT CYREG_PRT3_PRT
#define Segment_4__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Segment_4__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Segment_4__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Segment_4__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Segment_4__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Segment_4__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Segment_4__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Segment_4__PS CYREG_PRT3_PS
#define Segment_4__SHIFT 4
#define Segment_4__SLW CYREG_PRT3_SLW

/* Segment_5 */
#define Segment_5__0__MASK 0x20u
#define Segment_5__0__PC CYREG_PRT3_PC5
#define Segment_5__0__PORT 3
#define Segment_5__0__SHIFT 5
#define Segment_5__AG CYREG_PRT3_AG
#define Segment_5__AMUX CYREG_PRT3_AMUX
#define Segment_5__BIE CYREG_PRT3_BIE
#define Segment_5__BIT_MASK CYREG_PRT3_BIT_MASK
#define Segment_5__BYP CYREG_PRT3_BYP
#define Segment_5__CTL CYREG_PRT3_CTL
#define Segment_5__DM0 CYREG_PRT3_DM0
#define Segment_5__DM1 CYREG_PRT3_DM1
#define Segment_5__DM2 CYREG_PRT3_DM2
#define Segment_5__DR CYREG_PRT3_DR
#define Segment_5__INP_DIS CYREG_PRT3_INP_DIS
#define Segment_5__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Segment_5__LCD_EN CYREG_PRT3_LCD_EN
#define Segment_5__MASK 0x20u
#define Segment_5__PORT 3
#define Segment_5__PRT CYREG_PRT3_PRT
#define Segment_5__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Segment_5__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Segment_5__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Segment_5__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Segment_5__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Segment_5__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Segment_5__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Segment_5__PS CYREG_PRT3_PS
#define Segment_5__SHIFT 5
#define Segment_5__SLW CYREG_PRT3_SLW

/* Segment_6 */
#define Segment_6__0__MASK 0x40u
#define Segment_6__0__PC CYREG_PRT3_PC6
#define Segment_6__0__PORT 3
#define Segment_6__0__SHIFT 6
#define Segment_6__AG CYREG_PRT3_AG
#define Segment_6__AMUX CYREG_PRT3_AMUX
#define Segment_6__BIE CYREG_PRT3_BIE
#define Segment_6__BIT_MASK CYREG_PRT3_BIT_MASK
#define Segment_6__BYP CYREG_PRT3_BYP
#define Segment_6__CTL CYREG_PRT3_CTL
#define Segment_6__DM0 CYREG_PRT3_DM0
#define Segment_6__DM1 CYREG_PRT3_DM1
#define Segment_6__DM2 CYREG_PRT3_DM2
#define Segment_6__DR CYREG_PRT3_DR
#define Segment_6__INP_DIS CYREG_PRT3_INP_DIS
#define Segment_6__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Segment_6__LCD_EN CYREG_PRT3_LCD_EN
#define Segment_6__MASK 0x40u
#define Segment_6__PORT 3
#define Segment_6__PRT CYREG_PRT3_PRT
#define Segment_6__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Segment_6__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Segment_6__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Segment_6__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Segment_6__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Segment_6__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Segment_6__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Segment_6__PS CYREG_PRT3_PS
#define Segment_6__SHIFT 6
#define Segment_6__SLW CYREG_PRT3_SLW

/* Segment_7 */
#define Segment_7__0__MASK 0x80u
#define Segment_7__0__PC CYREG_PRT3_PC7
#define Segment_7__0__PORT 3
#define Segment_7__0__SHIFT 7
#define Segment_7__AG CYREG_PRT3_AG
#define Segment_7__AMUX CYREG_PRT3_AMUX
#define Segment_7__BIE CYREG_PRT3_BIE
#define Segment_7__BIT_MASK CYREG_PRT3_BIT_MASK
#define Segment_7__BYP CYREG_PRT3_BYP
#define Segment_7__CTL CYREG_PRT3_CTL
#define Segment_7__DM0 CYREG_PRT3_DM0
#define Segment_7__DM1 CYREG_PRT3_DM1
#define Segment_7__DM2 CYREG_PRT3_DM2
#define Segment_7__DR CYREG_PRT3_DR
#define Segment_7__INP_DIS CYREG_PRT3_INP_DIS
#define Segment_7__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Segment_7__LCD_EN CYREG_PRT3_LCD_EN
#define Segment_7__MASK 0x80u
#define Segment_7__PORT 3
#define Segment_7__PRT CYREG_PRT3_PRT
#define Segment_7__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Segment_7__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Segment_7__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Segment_7__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Segment_7__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Segment_7__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Segment_7__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Segment_7__PS CYREG_PRT3_PS
#define Segment_7__SHIFT 7
#define Segment_7__SLW CYREG_PRT3_SLW

/* Common_0 */
#define Common_0__0__MASK 0x01u
#define Common_0__0__PC CYREG_PRT0_PC0
#define Common_0__0__PORT 0
#define Common_0__0__SHIFT 0
#define Common_0__AG CYREG_PRT0_AG
#define Common_0__AMUX CYREG_PRT0_AMUX
#define Common_0__BIE CYREG_PRT0_BIE
#define Common_0__BIT_MASK CYREG_PRT0_BIT_MASK
#define Common_0__BYP CYREG_PRT0_BYP
#define Common_0__CTL CYREG_PRT0_CTL
#define Common_0__DM0 CYREG_PRT0_DM0
#define Common_0__DM1 CYREG_PRT0_DM1
#define Common_0__DM2 CYREG_PRT0_DM2
#define Common_0__DR CYREG_PRT0_DR
#define Common_0__INP_DIS CYREG_PRT0_INP_DIS
#define Common_0__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Common_0__LCD_EN CYREG_PRT0_LCD_EN
#define Common_0__MASK 0x01u
#define Common_0__PORT 0
#define Common_0__PRT CYREG_PRT0_PRT
#define Common_0__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Common_0__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Common_0__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Common_0__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Common_0__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Common_0__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Common_0__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Common_0__PS CYREG_PRT0_PS
#define Common_0__SHIFT 0
#define Common_0__SLW CYREG_PRT0_SLW

/* Common_1 */
#define Common_1__0__MASK 0x02u
#define Common_1__0__PC CYREG_PRT0_PC1
#define Common_1__0__PORT 0
#define Common_1__0__SHIFT 1
#define Common_1__AG CYREG_PRT0_AG
#define Common_1__AMUX CYREG_PRT0_AMUX
#define Common_1__BIE CYREG_PRT0_BIE
#define Common_1__BIT_MASK CYREG_PRT0_BIT_MASK
#define Common_1__BYP CYREG_PRT0_BYP
#define Common_1__CTL CYREG_PRT0_CTL
#define Common_1__DM0 CYREG_PRT0_DM0
#define Common_1__DM1 CYREG_PRT0_DM1
#define Common_1__DM2 CYREG_PRT0_DM2
#define Common_1__DR CYREG_PRT0_DR
#define Common_1__INP_DIS CYREG_PRT0_INP_DIS
#define Common_1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Common_1__LCD_EN CYREG_PRT0_LCD_EN
#define Common_1__MASK 0x02u
#define Common_1__PORT 0
#define Common_1__PRT CYREG_PRT0_PRT
#define Common_1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Common_1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Common_1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Common_1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Common_1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Common_1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Common_1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Common_1__PS CYREG_PRT0_PS
#define Common_1__SHIFT 1
#define Common_1__SLW CYREG_PRT0_SLW

/* Common_2 */
#define Common_2__0__MASK 0x04u
#define Common_2__0__PC CYREG_PRT0_PC2
#define Common_2__0__PORT 0
#define Common_2__0__SHIFT 2
#define Common_2__AG CYREG_PRT0_AG
#define Common_2__AMUX CYREG_PRT0_AMUX
#define Common_2__BIE CYREG_PRT0_BIE
#define Common_2__BIT_MASK CYREG_PRT0_BIT_MASK
#define Common_2__BYP CYREG_PRT0_BYP
#define Common_2__CTL CYREG_PRT0_CTL
#define Common_2__DM0 CYREG_PRT0_DM0
#define Common_2__DM1 CYREG_PRT0_DM1
#define Common_2__DM2 CYREG_PRT0_DM2
#define Common_2__DR CYREG_PRT0_DR
#define Common_2__INP_DIS CYREG_PRT0_INP_DIS
#define Common_2__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Common_2__LCD_EN CYREG_PRT0_LCD_EN
#define Common_2__MASK 0x04u
#define Common_2__PORT 0
#define Common_2__PRT CYREG_PRT0_PRT
#define Common_2__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Common_2__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Common_2__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Common_2__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Common_2__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Common_2__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Common_2__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Common_2__PS CYREG_PRT0_PS
#define Common_2__SHIFT 2
#define Common_2__SLW CYREG_PRT0_SLW

/* Common_3 */
#define Common_3__0__MASK 0x08u
#define Common_3__0__PC CYREG_PRT0_PC3
#define Common_3__0__PORT 0
#define Common_3__0__SHIFT 3
#define Common_3__AG CYREG_PRT0_AG
#define Common_3__AMUX CYREG_PRT0_AMUX
#define Common_3__BIE CYREG_PRT0_BIE
#define Common_3__BIT_MASK CYREG_PRT0_BIT_MASK
#define Common_3__BYP CYREG_PRT0_BYP
#define Common_3__CTL CYREG_PRT0_CTL
#define Common_3__DM0 CYREG_PRT0_DM0
#define Common_3__DM1 CYREG_PRT0_DM1
#define Common_3__DM2 CYREG_PRT0_DM2
#define Common_3__DR CYREG_PRT0_DR
#define Common_3__INP_DIS CYREG_PRT0_INP_DIS
#define Common_3__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Common_3__LCD_EN CYREG_PRT0_LCD_EN
#define Common_3__MASK 0x08u
#define Common_3__PORT 0
#define Common_3__PRT CYREG_PRT0_PRT
#define Common_3__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Common_3__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Common_3__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Common_3__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Common_3__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Common_3__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Common_3__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Common_3__PS CYREG_PRT0_PS
#define Common_3__SHIFT 3
#define Common_3__SLW CYREG_PRT0_SLW

/* Button */
#define Button__0__MASK 0x02u
#define Button__0__PC CYREG_PRT6_PC1
#define Button__0__PORT 6
#define Button__0__SHIFT 1
#define Button__AG CYREG_PRT6_AG
#define Button__AMUX CYREG_PRT6_AMUX
#define Button__BIE CYREG_PRT6_BIE
#define Button__BIT_MASK CYREG_PRT6_BIT_MASK
#define Button__BYP CYREG_PRT6_BYP
#define Button__CTL CYREG_PRT6_CTL
#define Button__DM0 CYREG_PRT6_DM0
#define Button__DM1 CYREG_PRT6_DM1
#define Button__DM2 CYREG_PRT6_DM2
#define Button__DR CYREG_PRT6_DR
#define Button__INP_DIS CYREG_PRT6_INP_DIS
#define Button__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define Button__LCD_EN CYREG_PRT6_LCD_EN
#define Button__MASK 0x02u
#define Button__PORT 6
#define Button__PRT CYREG_PRT6_PRT
#define Button__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define Button__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define Button__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define Button__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define Button__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define Button__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define Button__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define Button__PS CYREG_PRT6_PS
#define Button__SHIFT 1
#define Button__SLW CYREG_PRT6_SLW

/* Miscellaneous */
/* -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release */
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
#define CYDEV_CHIP_MEMBER_3A 1
#define CYDEV_CHIP_FAMILY_PSOC3 1
#define CYDEV_CHIP_DIE_LEOPARD 1
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_DIE_LEOPARD
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_DIE_PANTHER 2
#define CYDEV_CHIP_DIE_PSOC5LP 3
#define CYDEV_CHIP_DIE_UNKNOWN 0
#define CYDEV_CHIP_FAMILY_PSOC4 2
#define CYDEV_CHIP_FAMILY_PSOC5 3
#define CYDEV_CHIP_FAMILY_UNKNOWN 0
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC3
#define CYDEV_CHIP_JTAG_ID 0x1E028069
#define CYDEV_CHIP_MEMBER_5A 2
#define CYDEV_CHIP_MEMBER_5B 3
#define CYDEV_CHIP_MEMBER_UNKNOWN 0
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_3A
#define CYDEV_CHIP_REVISION_3A_ES1 0
#define CYDEV_CHIP_REVISION_3A_ES2 1
#define CYDEV_CHIP_REVISION_3A_ES3 3
#define CYDEV_CHIP_REVISION_5A_ES0 0
#define CYDEV_CHIP_REVISION_5A_ES1 1
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
#define CYDEV_CHIP_REVISION_5B_ES 0
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_3A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REV_LEOPARD_PRODUCTION
#define CYDEV_CHIP_REV_LEOPARD_ES1 0
#define CYDEV_CHIP_REV_LEOPARD_ES2 1
#define CYDEV_CHIP_REV_LEOPARD_ES3 3
#define CYDEV_CHIP_REV_PANTHER_ES0 0
#define CYDEV_CHIP_REV_PANTHER_ES1 1
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1
#define CYDEV_CHIP_REV_PSOC5LP_ES 0
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
#define CYDEV_CONFIGURATION_CLEAR_SRAM 1
#define CYDEV_CONFIGURATION_COMPRESSED 0
#define CYDEV_CONFIGURATION_DMA 1
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_DMA
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_CONFIG_FORCE_ROUTE 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_REQXRES 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DEBUG_ENABLE_MASK 0x01
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DMA_CHANNELS_AVAILABLE 24
#define CYDEV_ECC_ENABLE 0
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5
#define CYDEV_VIO3_MV 5000
#define DMA_CHANNELS_USED__MASK0 0x00000007u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
