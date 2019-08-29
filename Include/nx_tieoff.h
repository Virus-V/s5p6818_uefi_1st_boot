/*------------------------------------------------------------------------------
 *
 * Copyright (C) Nexell Co. 2012
 *
 * This confidential and proprietary software may be used only as authorized by
 * a licensing agreement from Nexell Co.
 * The entire notice above must be reproduced on all authorized copies and
 * copies may only be made to the extent permitted by a licensing agreement
 * from Nexell Co.
 *
 * Module	: I2C
 * File		: nx_i2c.c
 * Description	:
 * Author	: Firmware Team
 * History	:
 *----------------------------------------------------------------------------*/
#ifndef __NX_TIEOFF_H__
#define __NX_TIEOFF_H__

#ifdef	__cplusplus
extern "C"
{
#endif

#define numberoftieoffreg 330

struct	nx_tieoff_registerset {
	unsigned int	tieoffreg[numberoftieoffreg];
};


struct nx_tieoff_data {
	unsigned short bit_position;
	unsigned short bit_width;
};


#define TIEOFFINDEX_OF_MMC_8BIT					 ((1<<16) |    5)
#define TIEOFFINDEX_OF_AXISRAM0_i_TIE_ra2w_EMAA			 ((3<<16) |   47)
#define TIEOFFINDEX_OF_AXISRAM0_i_TIE_ra2w_EMAB			 ((3<<16) |   50)
#define TIEOFFINDEX_OF_AXISRAM0_i_TIE_ra2w_EMAWA		 ((2<<16) |   53)
#define TIEOFFINDEX_OF_AXISRAM0_i_TIE_ra2w_EMAWB		 ((2<<16) |   55)
#define TIEOFFINDEX_OF_AXISRAM0_i_nPowerDown			 ((1<<16) |   57)
#define TIEOFFINDEX_OF_AXISRAM0_i_nSleep			 ((1<<16) |   58)
#define TIEOFFINDEX_OF_CAN0_i_TIE_rf1_EMA			 ((3<<16) |   59)
#define TIEOFFINDEX_OF_CAN0_i_TIE_rf1_EMAW			 ((2<<16) |   62)
#define TIEOFFINDEX_OF_CAN0_i_nPowerDown			 ((1<<16) |   64)
#define TIEOFFINDEX_OF_CAN0_i_nSleep				 ((1<<16) |   65)
#define TIEOFFINDEX_OF_CAN1_i_TIE_rf1_EMA			 ((3<<16) |   66)
#define TIEOFFINDEX_OF_CAN1_i_TIE_rf1_EMAW			 ((2<<16) |   69)
#define TIEOFFINDEX_OF_CAN1_i_nPowerDown			 ((1<<16) |   71)
#define TIEOFFINDEX_OF_CAN1_i_nSleep				 ((1<<16) |   72)
#define TIEOFFINDEX_OF_DEINTERLACE0_i_NX_RF1_EMA		 ((3<<16) |   73)
#define TIEOFFINDEX_OF_DEINTERLACE0_i_NX_RF1_EMAW		 ((2<<16) |   76)
#define TIEOFFINDEX_OF_DEINTERLACE0_i_NX_RF2_EMAA		 ((3<<16) |   78)
#define TIEOFFINDEX_OF_DEINTERLACE0_i_NX_RF2_EMAB		 ((3<<16) |   81)
#define TIEOFFINDEX_OF_DEINTERLACE0_i_NX_RF2W_EMAA		 ((3<<16) |   84)
#define TIEOFFINDEX_OF_DEINTERLACE0_i_NX_RF2W_EMAB		 ((3<<16) |   87)
#define TIEOFFINDEX_OF_DISPLAYTOP0_i_ResConv_nPowerDown		 ((1<<16) |   90)
#define TIEOFFINDEX_OF_DISPLAYTOP0_i_ResConv_nSleep		 ((1<<16) |   91)
#define TIEOFFINDEX_OF_DISPLAYTOP0_i_HDMI_nPowerDown		 ((2<<16) |   92)
#define TIEOFFINDEX_OF_DISPLAYTOP0_i_HDMI_nSleep		 ((2<<16) |   94)
#define TIEOFFINDEX_OF_DISPLAYTOP0_i_HDMI_PHY_REFCLK_SEL	 ((1<<16) |   96)
#define TIEOFFINDEX_OF_DISPLAYTOP0_i_TIEOFF_SPSRAM_EMA		 ((3<<16) |   97)
#define TIEOFFINDEX_OF_DISPLAYTOP0_i_TIEOFF_SPSRAM_EMAW		 ((2<<16) |  100)
#define TIEOFFINDEX_OF_DISPLAYTOP0_i_TIEOFF_DPSRAM_1R1W_EMAA	 ((3<<16) |  102)
#define TIEOFFINDEX_OF_DISPLAYTOP0_i_TIEOFF_DPSRAM_1R1W_EMAB	 ((3<<16) |  105)
#define TIEOFFINDEX_OF_DISPLAYTOP0_i_TIEOFF_DPSRAM_EMAA		 ((3<<16) |  108)
#define TIEOFFINDEX_OF_DISPLAYTOP0_i_TIEOFF_DPSRAM_EMAB		 ((3<<16) |  111)
#define TIEOFFINDEX_OF_DISPLAYTOP0_i_TIEOFF_DPSRAM_EMAWA	 ((2<<16) |  114)
#define TIEOFFINDEX_OF_DISPLAYTOP0_i_TIEOFF_DPSRAM_EMAWB	 ((2<<16) |  116)
#define TIEOFFINDEX_OF_MCUSTOP0_i_vrom_EMA			 ((3<<16) |  118)
#define TIEOFFINDEX_OF_DREX0_CKE_INIT				 ((1<<16) |  121)
#define TIEOFFINDEX_OF_DREX0_CA_SWAP				 ((1<<16) |  122)
#define TIEOFFINDEX_OF_DREX0_CSYSREQ				 ((1<<16) |  123)
#define TIEOFFINDEX_OF_DREX0_PAUSE_REQ				 ((1<<16) |  124)
#define TIEOFFINDEX_OF_DREX0_PEREV_TRIGGER			 ((1<<16) |  125)
#define TIEOFFINDEX_OF_DREX0_CTRL_HCKE				 ((1<<16) |  126)
#define TIEOFFINDEX_OF_DREX0_DFI_RESET_N_P0			 ((1<<16) |  127)
#define TIEOFFINDEX_OF_DREX0_DFI_RESET_N_P1			 ((1<<16) |  128)
#define TIEOFFINDEX_OF_MIPI0_NX_DPSRAM_1R1W_EMAA		 ((3<<16) |  129)
#define TIEOFFINDEX_OF_MIPI0_NX_DPSRAM_1R1W_EMAB		 ((3<<16) |  132)
#define TIEOFFINDEX_OF_MIPI0_i_NX_NPOWERDOWN			 ((4<<16) |  135)
#define TIEOFFINDEX_OF_MIPI0_i_NX_NSLEEP			 ((4<<16) |  139)
#define TIEOFFINDEX_OF_SCALER0_i_NX_EMA				 ((3<<16) |  143)
#define TIEOFFINDEX_OF_SCALER0_i_NX_EMAW			 ((2<<16) |  146)
#define TIEOFFINDEX_OF_UART0_USESMC				 ((1<<16) |  148)
#define TIEOFFINDEX_OF_UART0_SMCTXENB				 ((1<<16) |  149)
#define TIEOFFINDEX_OF_UART0_SMCRXENB				 ((1<<16) |  150)
#define TIEOFFINDEX_OF_UART1_USESMC				 ((1<<16) |  151)
#define TIEOFFINDEX_OF_UART1_SMCTXENB				 ((1<<16) |  152)
#define TIEOFFINDEX_OF_UART1_SMCRXENB				 ((1<<16) |  153)
#define TIEOFFINDEX_OF_UART2_USESMC				 ((1<<16) |  154)
#define TIEOFFINDEX_OF_UART2_SMCTXENB				 ((1<<16) |  155)
#define TIEOFFINDEX_OF_UART2_SMCRXENB				 ((1<<16) |  156)
#define TIEOFFINDEX_OF_UART3_USESMC				 ((1<<16) |  157)
#define TIEOFFINDEX_OF_UART3_SMCTXENB				 ((1<<16) |  158)
#define TIEOFFINDEX_OF_UART3_SMCRXENB				 ((1<<16) |  159)
#define TIEOFFINDEX_OF_UART4_USESMC				 ((1<<16) |  160)
#define TIEOFFINDEX_OF_UART4_SMCTXENB				 ((1<<16) |  161)
#define TIEOFFINDEX_OF_UART4_SMCRXENB				 ((1<<16) |  162)
#define TIEOFFINDEX_OF_UART5_USESMC				 ((1<<16) |  163)
#define TIEOFFINDEX_OF_UART5_SMCTXENB				 ((1<<16) |  164)
#define TIEOFFINDEX_OF_UART5_SMCRXENB				 ((1<<16) |  165)
#define TIEOFFINDEX_OF_USB20HOST0_i_nPowerDown			 ((1<<16) |  166)
#define TIEOFFINDEX_OF_USB20HOST0_i_nSleep			 ((1<<16) |  167)
#define TIEOFFINDEX_OF_USB20HOST0_i_NX_RF1_EMA			 ((3<<16) |  168)
#define TIEOFFINDEX_OF_USB20HOST0_i_NX_RF1_EMAW			 ((2<<16) |  171)
#define TIEOFFINDEX_OF_USB20HOST0_sys_interrupt_i		 ((1<<16) |  173)
#define TIEOFFINDEX_OF_USB20HOST0_i_hsic_en			 ((3<<16) |  174)
#if 0
#define TIEOFFINDEX_OF_USB20HOST0_i_nResetSync			 ((1<<16) |  177)
#define TIEOFFINDEX_OF_USB20HOST0_i_nResetSync_ohci		 ((1<<16) |  178)
#define TIEOFFINDEX_OF_USB20HOST0_i_nAuxWellResetSync		 ((1<<16) |  179)
#define TIEOFFINDEX_OF_USB20HOST0_i_nHostPhyResetSync		 ((1<<16) |  180)
#define TIEOFFINDEX_OF_USB20HOST0_i_nHostUtmiResetSync		 ((1<<16) |  181)
#define TIEOFFINDEX_OF_USB20HOST0_i_nHostHsicResetSync		 ((1<<16) |  182)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_FREE_CLOCK_ENB		 ((1<<16) |  183)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_480M_FROM_OTG_PHY	 ((1<<16) |  184)
#endif
#define TIEOFFINDEX_OF_USB20HOST0_ss_word_if_enb_i		 ((1<<16) |  185)
#define TIEOFFINDEX_OF_USB20HOST0_ss_word_if_i			 ((1<<16) |  186)
#define TIEOFFINDEX_OF_USB20HOST0_ss_utmi_backward_enb_i	 ((1<<16) |  187)
#define TIEOFFINDEX_OF_USB20HOST0_ss_resume_utmi_pls_dis_i	 ((1<<16) |  188)
#define TIEOFFINDEX_OF_USB20HOST0_phy_vstatus_0_i		 ((3<<16) |  189)
#define TIEOFFINDEX_OF_USB20HOST0_phy_vstatus_1_i		 ((3<<16) |  192)
#define TIEOFFINDEX_OF_USB20HOST0_phy_vstatus_2_i		 ((3<<16) |  195)
#define TIEOFFINDEX_OF_USB20HOST0_phy_vstatus_3_i		 ((3<<16) |  198)
#define TIEOFFINDEX_OF_USB20HOST0_phy_vstatus_4_i		 ((3<<16) |  201)
#define TIEOFFINDEX_OF_USB20HOST0_phy_vstatus_5_i		 ((3<<16) |  204)
#define TIEOFFINDEX_OF_USB20HOST0_phy_vstatus_6_i		 ((3<<16) |  207)
#define TIEOFFINDEX_OF_USB20HOST0_phy_vstatus_7_i		 ((3<<16) |  210)
#define TIEOFFINDEX_OF_USB20HOST0_ss_power_state_valid_i	 ((1<<16) |  213)
#define TIEOFFINDEX_OF_USB20HOST0_ss_nxt_power_state_valid_i	 ((1<<16) |  214)
#define TIEOFFINDEX_OF_USB20HOST0_ss_power_state_i		 ((2<<16) |  215)
#define TIEOFFINDEX_OF_USB20HOST0_ss_next_power_state_i		 ((2<<16) |  217)
#define TIEOFFINDEX_OF_USB20HOST0_app_prt_ovrcur_i		 ((3<<16) |  219)
#define TIEOFFINDEX_OF_USB20HOST0_ss_simulation_mode_i		 ((1<<16) |  222)
#define TIEOFFINDEX_OF_USB20HOST0_ss_fladj_val_host_i		 ((6<<16) |  224)
#define TIEOFFINDEX_OF_USB20HOST0_ss_fladj_val_5_i		 ((3<<16) |  230)
#define TIEOFFINDEX_OF_USB20HOST0_ss_fladj_val_4_i		 ((3<<16) |  233)
#define TIEOFFINDEX_OF_USB20HOST0_ss_fladj_val_3_i		 ((3<<16) |  236)
#define TIEOFFINDEX_OF_USB20HOST0_ss_fladj_val_2_i		 ((3<<16) |  239)
#define TIEOFFINDEX_OF_USB20HOST0_ss_fladj_val_1_i		 ((3<<16) |  242)
#define TIEOFFINDEX_OF_USB20HOST0_ss_fladj_val_0_i		 ((3<<16) |  245)
#define TIEOFFINDEX_OF_USB20HOST0_ss_autoppd_on_overcur_en_i	 ((1<<16) |  248)
#define TIEOFFINDEX_OF_USB20HOST0_ss_ena_incr16_i		 ((1<<16) |  249)
#define TIEOFFINDEX_OF_USB20HOST0_ss_ena_incr8_i		 ((1<<16) |  250)
#define TIEOFFINDEX_OF_USB20HOST0_ss_ena_incr4_i		 ((1<<16) |  251)
#define TIEOFFINDEX_OF_USB20HOST0_ss_ena_incrx_align_i		 ((1<<16) |  252)
#define TIEOFFINDEX_OF_USB20HOST0_i_ohci_0_cntsel_n		 ((1<<16) |  253)
#define TIEOFFINDEX_OF_USB20HOST0_ohci_0_app_irq1_i		 ((1<<16) |  254)
#define TIEOFFINDEX_OF_USB20HOST0_ohci_0_app_irq12_i		 ((1<<16) |  255)
#define TIEOFFINDEX_OF_USB20HOST0_ohci_0_app_io_hit_i		 ((1<<16) |  256)
#define TIEOFFINDEX_OF_USB20HOST0_ss_hubsetup_min_i		 ((1<<16) |  257)
#define TIEOFFINDEX_OF_USB20HOST0_app_start_clk_i		 ((1<<16) |  258)
#define TIEOFFINDEX_OF_USB20HOST0_ohci_susp_lgcy_i		 ((1<<16) |  259)
#define TIEOFFINDEX_OF_USB20HOST0_i_SIDDQ			 ((1<<16) |  260)
#define TIEOFFINDEX_OF_USB20HOST0_i_VATESTENB			 ((2<<16) |  261)
#define TIEOFFINDEX_OF_USB20HOST0_i_POR_ENB			 ((1<<16) |  263)
#define TIEOFFINDEX_OF_USB20HOST0_i_POR				 ((1<<16) |  264)
#define TIEOFFINDEX_OF_USB20HOST0_i_REFCLKSEL			 ((2<<16) |  265)
#define TIEOFFINDEX_OF_USB20HOST0_i_FSEL			 ((3<<16) |  267)
#define TIEOFFINDEX_OF_USB20HOST0_i_COMMONONN			 ((1<<16) |  270)
#define TIEOFFINDEX_OF_USB20HOST0_i_RESREQIN			 ((1<<16) |  271)
#define TIEOFFINDEX_OF_USB20HOST0_i_PORTRESET			 ((1<<16) |  272)
#define TIEOFFINDEX_OF_USB20HOST0_i_OTGDISABLE			 ((1<<16) |  273)
#define TIEOFFINDEX_OF_USB20HOST0_i_LOOPBACKENB			 ((1<<16) |  274)
#define TIEOFFINDEX_OF_USB20HOST0_i_IDPULLUP			 ((1<<16) |  275)
#define TIEOFFINDEX_OF_USB20HOST0_i_DRVVBUS			 ((1<<16) |  276)
#define TIEOFFINDEX_OF_USB20HOST0_i_ADPCHRG			 ((1<<16) |  277)
#define TIEOFFINDEX_OF_USB20HOST0_i_ADPDISCHRG			 ((1<<16) |  278)
#define TIEOFFINDEX_OF_USB20HOST0_i_ADPPRBENB			 ((1<<16) |  279)
#define TIEOFFINDEX_OF_USB20HOST0_i_VBUSVLDEXT			 ((1<<16) |  280)
#define TIEOFFINDEX_OF_USB20HOST0_i_VBUSVLDEXTSEL		 ((1<<16) |  281)
#define TIEOFFINDEX_OF_USB20HOST0_i_DPPULLDOWN			 ((1<<16) |  282)
#define TIEOFFINDEX_OF_USB20HOST0_i_DMPULLDOWN			 ((1<<16) |  283)
#define TIEOFFINDEX_OF_USB20HOST0_i_SUSPENDM_ENB		 ((1<<16) |  284)
#define TIEOFFINDEX_OF_USB20HOST0_i_SUSPENDM			 ((1<<16) |  285)
#define TIEOFFINDEX_OF_USB20HOST0_i_SLEEPM_ENB			 ((1<<16) |  286)
#define TIEOFFINDEX_OF_USB20HOST0_i_SLEEPM			 ((1<<16) |  287)
#define TIEOFFINDEX_OF_USB20HOST0_i_OPMODE_ENB			 ((1<<16) |  288)
#define TIEOFFINDEX_OF_USB20HOST0_i_OPMODE			 ((2<<16) |  289)
#define TIEOFFINDEX_OF_USB20HOST0_i_TERMSEL_ENB			 ((1<<16) |  291)
#define TIEOFFINDEX_OF_USB20HOST0_i_TERMSEL			 ((1<<16) |  292)
#define TIEOFFINDEX_OF_USB20HOST0_i_XCVRSEL_ENB			 ((1<<16) |  293)
#define TIEOFFINDEX_OF_USB20HOST0_i_XCVRSEL			 ((2<<16) |  294)
#define TIEOFFINDEX_OF_USB20HOST0_i_WORDINTERFACE_ENB		 ((1<<16) |  296)
#define TIEOFFINDEX_OF_USB20HOST0_i_WORDINTERFACE		 ((1<<16) |  297)
#define TIEOFFINDEX_OF_USB20HOST0_i_TXBITSTUFFEN		 ((1<<16) |  298)
#define TIEOFFINDEX_OF_USB20HOST0_i_TXBITSTUFFENH		 ((1<<16) |  299)
#define TIEOFFINDEX_OF_USB20HOST0_i_BYPASSDPDATA		 ((1<<16) |  300)
#define TIEOFFINDEX_OF_USB20HOST0_i_BYPASSDMDATA		 ((1<<16) |  301)
#define TIEOFFINDEX_OF_USB20HOST0_i_BYPASSDPEN			 ((1<<16) |  302)
#define TIEOFFINDEX_OF_USB20HOST0_i_BYPASSDMEN			 ((1<<16) |  303)
#define TIEOFFINDEX_OF_USB20HOST0_i_BYPASSSEL			 ((1<<16) |  304)
#define TIEOFFINDEX_OF_USB20HOST0_i_COMPDISTUNE			 ((3<<16) |  305)
#define TIEOFFINDEX_OF_USB20HOST0_i_SQRXTUNE			 ((3<<16) |  308)
#define TIEOFFINDEX_OF_USB20HOST0_i_OTGTUNE			 ((3<<16) |  311)
#define TIEOFFINDEX_OF_USB20HOST0_i_TXHSXVTUNE			 ((2<<16) |  314)
#define TIEOFFINDEX_OF_USB20HOST0_i_TXFSLSTUNE			 ((4<<16) |  316)
#define TIEOFFINDEX_OF_USB20HOST0_i_TXVREFTUNE			 ((4<<16) |  320)
#define TIEOFFINDEX_OF_USB20HOST0_i_TXRISETUNE			 ((2<<16) |  324)
#define TIEOFFINDEX_OF_USB20HOST0_i_TXRESTUNE			 ((2<<16) |  326)
#define TIEOFFINDEX_OF_USB20HOST0_i_TXPREEMPAMPTUNE		 ((2<<16) |  328)
#define TIEOFFINDEX_OF_USB20HOST0_i_TXPREEMPPULSETUNE		 ((1<<16) |  330)
#define TIEOFFINDEX_OF_USB20HOST0_i_CHRGSEL			 ((1<<16) |  331)
#define TIEOFFINDEX_OF_USB20HOST0_i_VDATDETENB			 ((1<<16) |  332)
#define TIEOFFINDEX_OF_USB20HOST0_i_VDATSRCENB			 ((1<<16) |  333)
#define TIEOFFINDEX_OF_USB20HOST0_i_DCDENB			 ((1<<16) |  334)
#define TIEOFFINDEX_OF_USB20HOST0_i_ACAENB			 ((1<<16) |  335)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_MSTRXCVR		 ((1<<16) |  336)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_SIDDQ			 ((1<<16) |  337)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_POR_ENB		 ((1<<16) |  338)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_POR			 ((1<<16) |  339)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_REFCLKDIV		 ((7<<16) |  340)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_REFCLKSEL		 ((2<<16) |  347)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_COMMONONN		 ((1<<16) |  349)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_PORTRESET		 ((1<<16) |  350)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_LOOPBACKENB		 ((1<<16) |  351)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_DPPULLDOWN		 ((1<<16) |  352)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_DMPULLDOWN		 ((1<<16) |  353)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_SUSPENDM_ENB		 ((1<<16) |  354)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_SUSPENDM		 ((1<<16) |  355)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_SLEEPM_ENB		 ((1<<16) |  356)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_SLEEPM			 ((1<<16) |  357)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_MSTRXOPU		 ((1<<16) |  358)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_OPMODE_ENB		 ((1<<16) |  359)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_OPMODE			 ((2<<16) |  360)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_XCVRSELECT_ENB		 ((1<<16) |  362)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_XCVRSELECT		 ((1<<16) |  363)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_WORDINTERFACE_ENB	 ((1<<16) |  364)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_WORDINTERFACE		 ((1<<16) |  365)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_TXBITSTUFFEN		 ((1<<16) |  366)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_TXBITSTUFFENH		 ((1<<16) |  367)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_TXRPUTUNE		 ((2<<16) |  368)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_TXRPDTUNE		 ((2<<16) |  370)
#define TIEOFFINDEX_OF_USB20HOST0_i_HSIC_TXSRTUNE		 ((4<<16) |  372)
#define TIEOFFINDEX_OF_USB20OTG0_i_nPowerDown			 ((1<<16) |  376)
#define TIEOFFINDEX_OF_USB20OTG0_i_nSleep			 ((1<<16) |  377)
#define TIEOFFINDEX_OF_USB20OTG0_i_NX_RF1_EMA			 ((3<<16) |  378)
#define TIEOFFINDEX_OF_USB20OTG0_i_NX_RF1_EMAW			 ((2<<16) |  381)
#define TIEOFFINDEX_OF_USB20OTG0_i_ss_scaledown_mode		 ((2<<16) |  384)
#define TIEOFFINDEX_OF_USB20OTG0_i_gp_in			((16<<16) |  386)
#define TIEOFFINDEX_OF_USB20OTG0_i_sof_count			((14<<16) |  402)
#define TIEOFFINDEX_OF_USB20OTG0_i_sys_dma_done			 ((1<<16) |  416)
#define TIEOFFINDEX_OF_USB20OTG0_i_if_select_hsic		 ((1<<16) |  417)
#define TIEOFFINDEX_OF_USB20OTG0_i_nResetSync			 ((1<<16) |  418)
#define TIEOFFINDEX_OF_USB20OTG0_i_nUtmiResetSync		 ((1<<16) |  419)
#define TIEOFFINDEX_OF_USB20OTG0_i_SIDDQ			 ((1<<16) |  420)
#define TIEOFFINDEX_OF_USB20OTG0_i_VATESTENB			 ((2<<16) |  421)
#define TIEOFFINDEX_OF_USB20OTG0_i_POR_ENB			 ((1<<16) |  423)
#define TIEOFFINDEX_OF_USB20OTG0_i_POR				 ((1<<16) |  424)
#define TIEOFFINDEX_OF_USB20OTG0_i_REFCLKSEL			 ((2<<16) |  425)
#define TIEOFFINDEX_OF_USB20OTG0_i_FSEL				 ((3<<16) |  427)
#define TIEOFFINDEX_OF_USB20OTG0_i_COMMONONN			 ((1<<16) |  430)
#define TIEOFFINDEX_OF_USB20OTG0_i_RESREQIN			 ((1<<16) |  431)
#define TIEOFFINDEX_OF_USB20OTG0_i_PORTRESET			 ((1<<16) |  432)
#define TIEOFFINDEX_OF_USB20OTG0_i_OTGDISABLE			 ((1<<16) |  433)
#define TIEOFFINDEX_OF_USB20OTG0_i_LOOPBACKENB			 ((1<<16) |  434)
#define TIEOFFINDEX_OF_USB20OTG0_i_IDPULLUP			 ((1<<16) |  435)
#define TIEOFFINDEX_OF_USB20OTG0_i_DRVVBUS			 ((1<<16) |  436)
#define TIEOFFINDEX_OF_USB20OTG0_i_ADPCHRG			 ((1<<16) |  437)
#define TIEOFFINDEX_OF_USB20OTG0_i_ADPDISCHRG			 ((1<<16) |  438)
#define TIEOFFINDEX_OF_USB20OTG0_i_ADPPRBENB			 ((1<<16) |  439)
#define TIEOFFINDEX_OF_USB20OTG0_i_VBUSVLDEXT			 ((1<<16) |  440)
#define TIEOFFINDEX_OF_USB20OTG0_i_VBUSVLDEXTSEL		 ((1<<16) |  441)
#define TIEOFFINDEX_OF_USB20OTG0_i_DPPULLDOWN			 ((1<<16) |  442)
#define TIEOFFINDEX_OF_USB20OTG0_i_DMPULLDOWN			 ((1<<16) |  443)
#define TIEOFFINDEX_OF_USB20OTG0_i_SUSPENDM_ENB			 ((1<<16) |  444)
#define TIEOFFINDEX_OF_USB20OTG0_i_SUSPENDM			 ((1<<16) |  445)
#define TIEOFFINDEX_OF_USB20OTG0_i_SLEEPM_ENB			 ((1<<16) |  446)
#define TIEOFFINDEX_OF_USB20OTG0_i_SLEEPM			 ((1<<16) |  447)
#define TIEOFFINDEX_OF_USB20OTG0_i_OPMODE_ENB			 ((1<<16) |  448)
#define TIEOFFINDEX_OF_USB20OTG0_i_OPMODE			 ((2<<16) |  449)
#define TIEOFFINDEX_OF_USB20OTG0_i_TERMSEL_ENB			 ((1<<16) |  451)
#define TIEOFFINDEX_OF_USB20OTG0_i_TERMSEL			 ((1<<16) |  452)
#define TIEOFFINDEX_OF_USB20OTG0_i_XCVRSEL_ENB			 ((1<<16) |  453)
#define TIEOFFINDEX_OF_USB20OTG0_i_XCVRSEL			 ((2<<16) |  454)
#define TIEOFFINDEX_OF_USB20OTG0_i_WORDINTERFACE_ENB		 ((1<<16) |  456)
#define TIEOFFINDEX_OF_USB20OTG0_i_WORDINTERFACE		 ((1<<16) |  457)
#define TIEOFFINDEX_OF_USB20OTG0_i_TXBITSTUFFEN			 ((1<<16) |  458)
#define TIEOFFINDEX_OF_USB20OTG0_i_TXBITSTUFFENH		 ((1<<16) |  459)
#define TIEOFFINDEX_OF_USB20OTG0_i_BYPASSDPDATA			 ((1<<16) |  460)
#define TIEOFFINDEX_OF_USB20OTG0_i_BYPASSDMDATA			 ((1<<16) |  461)
#define TIEOFFINDEX_OF_USB20OTG0_i_BYPASSDPEN			 ((1<<16) |  462)
#define TIEOFFINDEX_OF_USB20OTG0_i_BYPASSDMEN			 ((1<<16) |  463)
#define TIEOFFINDEX_OF_USB20OTG0_i_BYPASSSEL			 ((1<<16) |  464)
#define TIEOFFINDEX_OF_USB20OTG0_i_COMPDISTUNE			 ((3<<16) |  465)
#define TIEOFFINDEX_OF_USB20OTG0_i_SQRXTUNE			 ((3<<16) |  468)
#define TIEOFFINDEX_OF_USB20OTG0_i_OTGTUNE			 ((3<<16) |  471)
#define TIEOFFINDEX_OF_USB20OTG0_i_TXHSXVTUNE			 ((2<<16) |  474)
#define TIEOFFINDEX_OF_USB20OTG0_i_TXFSLSTUNE			 ((4<<16) |  476)
#define TIEOFFINDEX_OF_USB20OTG0_i_TXVREFTUNE			 ((4<<16) |  480)
#define TIEOFFINDEX_OF_USB20OTG0_i_TXRISETUNE			 ((2<<16) |  484)
#define TIEOFFINDEX_OF_USB20OTG0_i_TXRESTUNE			 ((2<<16) |  486)
#define TIEOFFINDEX_OF_USB20OTG0_i_TXPREEMPAMPTUNE		 ((2<<16) |  488)
#define TIEOFFINDEX_OF_USB20OTG0_i_TXPREEMPPULSETUNE		 ((1<<16) |  490)
#define TIEOFFINDEX_OF_USB20OTG0_i_CHRGSEL			 ((1<<16) |  491)
#define TIEOFFINDEX_OF_USB20OTG0_i_VDATDETENB			 ((1<<16) |  492)
#define TIEOFFINDEX_OF_USB20OTG0_i_VDATSRCENB			 ((1<<16) |  493)
#define TIEOFFINDEX_OF_USB20OTG0_i_DCDENB			 ((1<<16) |  494)
#define TIEOFFINDEX_OF_USB20OTG0_i_ACAENB			 ((1<<16) |  495)
#define TIEOFFINDEX_OF_USB20OTG0_i_IDPULLUP_ENB			 ((1<<16) |  496)
#define TIEOFFINDEX_OF_USB20OTG0_i_DPPULLDOWN_ENB		 ((1<<16) |  497)
#define TIEOFFINDEX_OF_USB20OTG0_i_DMPULLDOWN_ENB		 ((1<<16) |  498)
#define TIEOFFINDEX_OF_USB20OTG0_i_DRVVBUS_ENB			 ((1<<16) |  499)
#define TIEOFFINDEX_OF_USB20OTG0_i_LPMClkMuxCntrl		 ((1<<16) |  500)
#define TIEOFFINDEX_OF_USB20OTG0_i_GLITCHLESSMUXCntrl		 ((1<<16) |  501)
#define TIEOFFINDEX_OF_CODA9600_i_nPWRDN00			 ((4<<16) |  502)
#define TIEOFFINDEX_OF_CODA9600_i_nSLEEP00			 ((4<<16) |  506)
#define TIEOFFINDEX_OF_CODA9600_i_nPWRDN01			 ((8<<16) |  512)
#define TIEOFFINDEX_OF_CODA9600_i_nSLEEP01			 ((8<<16) |  520)
#define TIEOFFINDEX_OF_CODA9600_i_nPWRDN02			((10<<16) |  528)
#define TIEOFFINDEX_OF_CODA9600_i_nSLEEP02			((10<<16) |  544)
#define TIEOFFINDEX_OF_CODA9600_i_nPWRDN03			 ((2<<16) |  554)
#define TIEOFFINDEX_OF_CODA9600_i_nSLEEP03			 ((2<<16) |  556)
#define TIEOFFINDEX_OF_CODA9600_i_nPWRDN04			 ((8<<16) |  558)
#define TIEOFFINDEX_OF_CODA9600_i_nSLEEP04			 ((8<<16) |  566)
#define TIEOFFINDEX_OF_CODA9600_i_nPWRDN05			 ((3<<16) |  576)
#define TIEOFFINDEX_OF_CODA9600_i_nSLEEP05			 ((3<<16) |  579)
#define TIEOFFINDEX_OF_CODA9600_i_nPWRDN06			 ((7<<16) |  582)
#define TIEOFFINDEX_OF_CODA9600_i_nSLEEP06			 ((7<<16) |  589)
#define TIEOFFINDEX_OF_CODA9600_i_nPWRDN07			((12<<16) |  596)
#define TIEOFFINDEX_OF_CODA9600_i_nSLEEP07			((12<<16) |  608)
#define TIEOFFINDEX_OF_CODA9600_i_nPWRDN08			 ((1<<16) |  620)
#define TIEOFFINDEX_OF_CODA9600_i_nSLEEP08			 ((1<<16) |  621)
#define TIEOFFINDEX_OF_CODA9600_i_nPWRDN09			 ((2<<16) |  622)
#define TIEOFFINDEX_OF_CODA9600_i_nSLEEP09			 ((2<<16) |  624)
#define TIEOFFINDEX_OF_CODA9600_i_nPWRDN10			((10<<16) |  626)
#define TIEOFFINDEX_OF_CODA9600_i_nSLEEP10			((10<<16) |  640)
#define TIEOFFINDEX_OF_CODA9600_i_nPWRDN11			 ((1<<16) |  650)
#define TIEOFFINDEX_OF_CODA9600_i_nSLEEP11			 ((1<<16) |  651)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_rf2_EMAA			 ((3<<16) |  652)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_rf2_EMAB			 ((3<<16) |  655)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_rf2w_EMAA			 ((3<<16) |  658)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_rf2w_EMAB			 ((3<<16) |  661)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_ra2_EMAA			 ((3<<16) |  664)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_ra2_EMAB			 ((3<<16) |  667)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_ra2_EMAWA			 ((2<<16) |  670)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_ra2_EMAWB			 ((2<<16) |  672)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_ra2w_EMAA			 ((3<<16) |  674)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_ra2w_EMAB			 ((3<<16) |  677)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_ra2w_EMAWA		 ((2<<16) |  680)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_ra2w_EMAWB		 ((2<<16) |  682)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_rf1_EMA			 ((3<<16) |  684)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_rf1_EMAW			 ((2<<16) |  687)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_rf1w_EMA			 ((3<<16) |  689)
#define TIEOFFINDEX_OF_CODA9600_i_TIE_rf1w_EMAW			 ((2<<16) |  692)
#define TIEOFFINDEX_OF_DWC_GMAC0_sbd_flowctrl_i			 ((1<<16) |  694)
#define TIEOFFINDEX_OF_DWC_GMAC0_phy_intf_sel_i			 ((3<<16) |  695)
#define TIEOFFINDEX_OF_DWC_GMAC0_i_NX_RF2_EMAA			 ((3<<16) |  698)
#define TIEOFFINDEX_OF_DWC_GMAC0_i_NX_RF2_EMAB			 ((3<<16) |  701)
#define TIEOFFINDEX_OF_MALI4000_NX_DPSRAM_1R1W_EMAA		 ((3<<16) |  704)
#define TIEOFFINDEX_OF_MALI4000_NX_DPSRAM_1R1W_EMAB		 ((3<<16) |  707)
#define TIEOFFINDEX_OF_MALI4000_NX_SPSRAM_EMA			 ((3<<16) |  710)
#define TIEOFFINDEX_OF_MALI4000_NX_SPSRAM_EMAW			 ((2<<16) |  713)
#define TIEOFFINDEX_OF_MALI4000_NX_SPSRAM_BW_EMA		 ((3<<16) |  715)
#define TIEOFFINDEX_OF_MALI4000_NX_SPSRAM_BW_EMAW		 ((2<<16) |  718)
#define TIEOFFINDEX_OF_MALI4000_PWRDNBYPASS			 ((1<<16) |  720)
#define TIEOFFINDEX_OF_MALI4000_GP_NX_NPOWERDOWN		((15<<16) |  721)
#define TIEOFFINDEX_OF_MALI4000_GP_NX_NSLEEP			((15<<16) |  736)
#define TIEOFFINDEX_OF_MALI4000_L2_NX_NPOWERDOWN		 ((3<<16) |  751)
#define TIEOFFINDEX_OF_MALI4000_L2_NX_NSLEEP			 ((3<<16) |  754)
#define TIEOFFINDEX_OF_MALI4000_PP0_NX_NPOWERDOWN		((32<<16) |  768)
#define TIEOFFINDEX_OF_MALI4000_PP0_NX_NSLEEP			((32<<16) |  800)
#define TIEOFFINDEX_OF_MALI4000_PP1_NX_NPOWERDOWN		((32<<16) |  832)
#define TIEOFFINDEX_OF_MALI4000_PP1_NX_NSLEEP			((32<<16) |  864)
#define TIEOFFINDEX_OF_MALI4000_PP2_NX_NPOWERDOWN		((32<<16) |  896)
#define TIEOFFINDEX_OF_MALI4000_PP2_NX_NSLEEP			((32<<16) |  928)
#define TIEOFFINDEX_OF_MALI4000_PP3_NX_NPOWERDOWN		((32<<16) |  960)
#define TIEOFFINDEX_OF_MALI4000_PP3_NX_NSLEEP			((32<<16) |  992)
#define TIEOFFINDEX_OF_A3BM_AXI_PERI_BUS0_SYNCMODEREQm9		 ((1<<16) | 1024)
#define TIEOFFINDEX_OF_A3BM_AXI_PERI_BUS0_SYNCMODEREQm10	 ((1<<16) | 1025)
#define TIEOFFINDEX_OF_A3BM_AXI_PERI_BUS0_SYNCMODEREQm16	 ((1<<16) | 1026)
#define TIEOFFINDEX_OF_A3BM_AXI_TOP_MASTER_BUS0_REMAP		 ((2<<16) | 1027)
#define TIEOFFINDEX_OF_Inst_ARMTOP_SMPEN			 ((4<<16) | 2816)
#define TIEOFFINDEX_OF_Inst_ARMTOP_STANBYWFI			 ((4<<16) | 2880)
#define TIEOFFINDEX_OF_Inst_ARMTOP_STANBYWFIL2			 ((1<<16) | 2884)
#define TIEOFFINDEX_OF_Inst_ARMTOP_DBGNOPWRDWN			 ((4<<16) | 2889)
#define TIEOFFINDEX_OF_Inst_ARMTOP_DBGPWRUPREQ			 ((4<<16) | 2893)
#define TIEOFFINDEX_OF_Inst_ARMTOP_COREPWRDOWNPRE		 ((1<<16) | 2901)
#define TIEOFFINDEX_OF_Inst_ARMTOP_CPU0PWRDOWNPRE		 ((1<<16) | 2902)
#define TIEOFFINDEX_OF_Inst_ARMTOP_CPU1PWRDOWNPRE		 ((1<<16) | 2903)
#define TIEOFFINDEX_OF_Inst_ARMTOP_CPU2PWRDOWNPRE		 ((1<<16) | 2904)
#define TIEOFFINDEX_OF_Inst_ARMTOP_CPU3PWRDOWNPRE		 ((1<<16) | 2905)
#define TIEOFFINDEX_OF_Inst_ARMTOP_COREPWRDOWNALL		 ((1<<16) | 2906)
#define TIEOFFINDEX_OF_Inst_ARMTOP_CPU0PWRDOWNALL		 ((1<<16) | 2907)
#define TIEOFFINDEX_OF_Inst_ARMTOP_CPU1PWRDOWNALL		 ((1<<16) | 2908)
#define TIEOFFINDEX_OF_Inst_ARMTOP_CPU2PWRDOWNALL		 ((1<<16) | 2909)
#define TIEOFFINDEX_OF_Inst_ARMTOP_CPU3PWRDOWNALL		 ((1<<16) | 2910)
#define TIEOFFINDEX_OF_Inst_ARMTOP_CLAMPL2			 ((1<<16) | 2920)
#define TIEOFFINDEX_OF_Inst_ARMTOP_L2FLUSHREQ			 ((1<<16) | 3018)
#define TIEOFFINDEX_OF_Inst_ARMTOP_L2FLUSHDONE			 ((1<<16) | 3019)
#define TIEOFFINDEX_OF_Inst_ARMTOP_ACINACTM			 ((1<<16) | 3023)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_SMPEN			 ((4<<16) | 3360)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_STANBYWFI			 ((4<<16) | 3424)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_STANBYWFIL2		 ((1<<16) | 3428)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_DBGNOPWRDWN		 ((4<<16) | 3442)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_DBGPWRUPREQ		 ((4<<16) | 3443)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_DBGPWRDUP			 ((4<<16) | 3444)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_COREPWRDOWNPRE		 ((1<<16) | 3445)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_CPU0PWRDOWNPRE		 ((1<<16) | 3446)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_CPU1PWRDOWNPRE		 ((1<<16) | 3447)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_CPU2PWRDOWNPRE		 ((1<<16) | 3448)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_CPU3PWRDOWNPRE		 ((1<<16) | 3449)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_COREPWRDOWNALL		 ((1<<16) | 3450)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_CPU0PWRDOWNALL		 ((1<<16) | 3451)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_CPU1PWRDOWNALL		 ((1<<16) | 3452)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_CPU2PWRDOWNALL		 ((1<<16) | 3453)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_CPU3PWRDOWNALL		 ((1<<16) | 3454)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_CLAMPL2			 ((1<<16) | 3464)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_L2FLUSHREQ		 ((1<<16) | 3562)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_L2FLUSHDONE		 ((1<<16) | 3563)
#define TIEOFFINDEX_OF_Inst_ARMTOP_P1_ACINACTM			 ((1<<16) | 3567)


#ifdef	__cplusplus
}
#endif

#endif

