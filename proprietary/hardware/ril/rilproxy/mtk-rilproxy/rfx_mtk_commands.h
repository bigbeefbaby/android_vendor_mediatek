/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */
{RIL_REQUEST_GET_COLP, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_COLP, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_COLR, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_CCM, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_ACM, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_ACMMAX, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_PPU_AND_CURRENCY, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_ACMMAX, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_RESET_ACM, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_PPU_AND_CURRENCY, RADIO_TECH_GROUP_GSM},  // 10
{RIL_REQUEST_MODEM_POWEROFF, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_DUAL_SIM_MODE_SWITCH, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_QUERY_PHB_STORAGE_INFO, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_WRITE_PHB_ENTRY, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_READ_PHB_ENTRY, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_GPRS_CONNECT_TYPE, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_GPRS_TRANSFER_TYPE, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_MOBILEREVISION_AND_IMEI, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_QUERY_SIM_NETWORK_LOCK, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_SIM_NETWORK_LOCK, RADIO_TECH_GROUP_GSM},  // 20
{RIL_REQUEST_SET_SCRI, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_BTSIM_CONNECT, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_BTSIM_DISCONNECT_OR_POWEROFF, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_BTSIM_POWERON_OR_RESETSIM, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_BTSIM_TRANSFERAPDU, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_NETWORK_SELECTION_MANUAL_WITH_ACT, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_QUERY_ICCID, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_USIM_AUTHENTICATION, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_MODEM_POWERON, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_SMS_SIM_MEM_STATUS, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_PHONE_CAPABILITY, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_PHONE_CAPABILITY, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_POL_CAPABILITY, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_POL_LIST, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_POL_ENTRY, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_QUERY_UPB_CAPABILITY, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_EDIT_UPB_ENTRY, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_DELETE_UPB_ENTRY, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_READ_UPB_GAS_LIST, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_READ_UPB_GRP, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_WRITE_UPB_GRP, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_SIM_RECOVERY_ON, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_SIM_RECOVERY_ON, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_TRM, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_DETECT_SIM_MISSING, RADIO_TECH_GROUP_GSM},  // ALPS00294581
{RIL_REQUEST_GET_CALIBRATION_DATA, RADIO_TECH_GROUP_GSM},  // add by mtk80950 for calibration data
{RIL_REQUEST_GET_PHB_STRING_LENGTH, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_PHB_MEM_STORAGE, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_PHB_MEM_STORAGE, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_READ_PHB_ENTRY_EXT, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_WRITE_PHB_ENTRY_EXT, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_SMS_PARAMS, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_SMS_PARAMS, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SIM_TRANSMIT_BASIC, RADIO_TECH_GROUP_GSM},  // NFC SEEK start
{RIL_REQUEST_SIM_TRANSMIT_CHANNEL, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SIM_GET_ATR, RADIO_TECH_GROUP_GSM},  // NFC SEEK end
{RIL_REQUEST_SET_CB_CHANNEL_CONFIG_INFO, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_CB_LANGUAGE_CONFIG_INFO, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_CB_CONFIG_INFO, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_ALL_CB_LANGUAGE_ON, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_ETWS, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_FD_MODE, RADIO_TECH_GROUP_GSM},  // [New R8 modem FD]
// TODO: need to move to OEM channel as RIL OEM channel change feature ready
{RIL_REQUEST_DETACH_PS, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SIM_OPEN_CHANNEL_WITH_SW, RADIO_TECH_GROUP_GSM},
/// M: [C2K][IR] Support SVLTE IR feature. @{
{RIL_REQUEST_SET_REG_SUSPEND_ENABLED, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_RESUME_REGISTRATION, RADIO_TECH_GROUP_GSM},
/// M: [C2K][IR] Support SVLTE IR feature. @}
{RIL_REQUEST_STORE_MODEM_TYPE, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_QUERY_MODEM_TYPE, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SIM_INTERFACE_SWITCH, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_UICC_SELECT_APPLICATION, RADIO_TECH_GROUP_GSM},  // WiFi Calling start
{RIL_REQUEST_UICC_DEACTIVATE_APPLICATION, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_UICC_APPLICATION_IO, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_UICC_AKA_AUTHENTICATE, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_UICC_GBA_AUTHENTICATE_BOOTSTRAP, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_UICC_GBA_AUTHENTICATE_NAF, RADIO_TECH_GROUP_GSM},  // WiFi Calling end
{RIL_REQUEST_STK_EVDL_CALL_BY_AP, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_FEMTOCELL_LIST, RADIO_TECH_GROUP_GSM},  // Femtocell (CSG)
// Femtocell (CSG) : abort command shall be sent in differenent channel
{RIL_REQUEST_ABORT_FEMTOCELL_LIST, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SELECT_FEMTOCELL, RADIO_TECH_GROUP_GSM},  // Femtocell (CSG)
{RIL_REQUEST_SEND_OPLMN, RADIO_TECH_GROUP_GSM},  // For oplmn update
{RIL_REQUEST_GET_OPLMN_VERSION, RADIO_TECH_GROUP_GSM},  // For get oplmn version
{RIL_REQUEST_ABORT_QUERY_AVAILABLE_NETWORKS , RADIO_TECH_GROUP_GSM},  // for PLMN List abort
{RIL_REQUEST_DIAL_UP_CSD, RADIO_TECH_GROUP_GSM},  // CSD
{RIL_REQUEST_SET_TELEPHONY_MODE, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_HANGUP_ALL, RADIO_TECH_GROUP_GSM},      // 0 in alps/hardware/ril/include/telephony/ril.h
{RIL_REQUEST_FORCE_RELEASE_CALL, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_CALL_INDICATION, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_EMERGENCY_DIAL, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_ECC_SERVICE_CATEGORY, RADIO_TECH_GROUP_GSM},  // ECC servie category
{RIL_REQUEST_SET_ECC_LIST, RADIO_TECH_GROUP_GSM},  // ECC List
{RIL_REQUEST_GENERAL_SIM_AUTH, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_OPEN_ICC_APPLICATION, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_GET_ICC_APPLICATION_STATUS, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SIM_IO_EX, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_IMS_ENABLE, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_QUERY_AVAILABLE_NETWORKS_WITH_ACT , RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SEND_CNAP, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_CLIP, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SETUP_DEDICATE_DATA_CALL, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_DEACTIVATE_DEDICATE_DATA_CALL, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_MODIFY_DATA_CALL, RADIO_TECH_GROUP_GSM},
// TODO: need to move to OEM channel as RIL OEM channel change feature ready
{RIL_REQUEST_ABORT_SETUP_DATA_CALL, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_PCSCF_DISCOVERY_PCO, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_CLEAR_DATA_BEARER, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_REMOVE_CB_MESSAGE, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_DATA_CENTRIC, RADIO_TECH_GROUP_GSM},
// IMS conference call - add new member
{RIL_REQUEST_ADD_IMS_CONFERENCE_CALL_MEMBER, RADIO_TECH_GROUP_GSM},
// IMS conference call - remove member
{RIL_REQUEST_REMOVE_IMS_CONFERENCE_CALL_MEMBER, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_DIAL_WITH_SIP_URI, RADIO_TECH_GROUP_GSM},  // [VoLTE]Make call with SIP uri
{RIL_REQUEST_RESUME_CALL, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_SPEECH_CODEC_INFO, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_DATA_ON_TO_MD, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_REMOVE_RESTRICT_EUTRAN_MODE, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_IMS_CALL_STATUS, RADIO_TECH_GROUP_GSM},
{0, RADIO_TECH_GROUP_GSM},  // RIL_REQUEST_SET_VT_CAPABILITY
{RIL_REQUEST_VT_DIAL, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_VOICE_ACCEPT, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_CONFIG_MODEM_STATUS, RADIO_TECH_GROUP_GSM},
/// M: [C2K] MD IRAT feature. @{
{RIL_REQUEST_SET_ACTIVE_PS_SLOT, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_CONFIRM_INTER_3GPP_IRAT_CHANGE, RADIO_TECH_GROUP_GSM},
/// @}
/// M: [C2K][SVLTE] Set the SVLTE RAT mode. @{
{RIL_REQUEST_SET_SVLTE_RAT_MODE, RADIO_TECH_GROUP_GSM},
/// M: [C2K][SVLTE] Set the SVLTE RAT mode. @}
/// M: [C2K] AP IRAT feature. @{
{RIL_REQUEST_TRIGGER_LTE_BG_SEARCH, RADIO_TECH_GROUP_GSM},
/// @}
{RIL_REQUEST_CONFERENCE_DIAL, RADIO_TECH_GROUP_GSM},
/// M: CC072: Add Customer proprietary-IMS RIL interface. @{
{RIL_REQUEST_SET_SRVCC_CALL_CONTEXT_TRANSFER, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_UPDATE_IMS_REGISTRATION_STATUS, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_RELOAD_MODEM_TYPE, RADIO_TECH_GROUP_GSM},
/// @}
/// M: IMS feature. @{
{RIL_REQUEST_HOLD_CALL, RADIO_TECH_GROUP_GSM},
/// @}
{RIL_REQUEST_SET_STK_UTK_MODE, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SWITCH_ANTENNA, RADIO_TECH_GROUP_GSM},

// M: [C2K] Deactivate link down PDN for CT requirement. @{
{RIL_REQUEST_DEACTIVATE_LINK_DOWN_PDN, RADIO_TECH_GROUP_GSM},
// @}
{RIL_REQUEST_AT_COMMAND_WITH_PROXY, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SWITCH_CARD_TYPE, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_ENABLE_MD3_SLEEP, RADIO_TECH_GROUP_C2K},
/// M: ViLTE. @{
{RIL_REQUEST_VIDEO_CALL_ACCEPT, RADIO_TECH_GROUP_GSM},
/// @}
// M: [LTE][Low Power][UL traffic shaping] Start
{RIL_REQUEST_SET_LTE_ACCESS_STRATUM_REPORT, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_SET_LTE_UPLINK_DATA_TRANSFER, RADIO_TECH_GROUP_GSM},
// M: [LTE][Low Power][UL traffic shaping] End
/// M: [EPDG] Hand over ind @{
{RIL_REQUEST_HANDOVER_IND, RADIO_TECH_GROUP_GSM},
/// M: [EPDG] Hand over ind @}
/// M: USSI RIL request commands @{
{RIL_REQUEST_SEND_USSI, RADIO_TECH_GROUP_GSM},
{RIL_REQUEST_CANCEL_USSI, RADIO_TECH_GROUP_GSM},
/// @}
// Merge C2K only Commands
{RIL_REQUEST_GET_NITZ_TIME, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_QUERY_UIM_INSERTED, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_SWITCH_HPF, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_SET_AVOID_SYS, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_QUERY_AVOID_SYS, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_QUERY_CDMA_NETWORK_INFO, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_GET_LOCAL_INFO, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_UTK_REFRESH, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_QUERY_SMS_AND_PHONEBOOK_STATUS, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_QUERY_NETWORK_REGISTRATION, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_AGPS_TCP_CONNIND, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_AGPS_SET_MPC_IPPORT, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_AGPS_GET_MPC_IPPORT, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_SET_MEID, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_RESUME_REGISTRATION_CDMA, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_SET_REG_SUSPEND_ENABLED_CDMA, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_SET_ETS_DEV, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_WRITE_MDN, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_SET_VIA_TRM, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_SET_ARSI_THRESHOLD, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_SET_LTE_EARFCN_ENABLED, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_CONFIG_IRAT_MODE, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_QUERY_UTK_MENU_FROM_MD, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_QUERY_STK_MENU_FROM_MD, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_CONFIG_EVDO_MODE, RADIO_TECH_GROUP_C2K},
{RIL_REQUEST_AT_COMMAND_WITH_PROXY_CDMA, RADIO_TECH_GROUP_C2K},
// @}
/// M: [EPDG] Wifi disconnect indication @{
{RIL_REQUEST_WIFI_DISCONNECT_IND, RADIO_TECH_GROUP_GSM},
/// @}
/// M: EPDG feature. Update PS state from MAL @{
{RIL_REQUEST_MAL_PS_RGEGISTRATION_STATE, RADIO_TECH_GROUP_GSM},
/// @}