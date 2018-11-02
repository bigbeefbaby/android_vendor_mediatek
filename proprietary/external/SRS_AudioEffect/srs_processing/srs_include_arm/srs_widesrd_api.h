/*======================================================================*
 DTS, Inc.
 5220 Las Virgenes Road
 Calabasas, CA 91302  USA

 CONFIDENTIAL: CONTAINS CONFIDENTIAL PROPRIETARY INFORMATION OWNED BY
 DTS, INC. AND/OR ITS AFFILIATES ("DTS"), INCLUDING BUT NOT LIMITED TO
 TRADE SECRETS, KNOW-HOW, TECHNICAL AND BUSINESS INFORMATION. USE,
 DISCLOSURE OR DISTRIBUTION OF THE SOFTWARE IN ANY FORM IS LIMITED TO
 SPECIFICALLY AUTHORIZED LICENSEES OF DTS.  ANY UNAUTHORIZED
 DISCLOSURE IS A VIOLATION OF STATE, FEDERAL, AND INTERNATIONAL LAWS.
 BOTH CIVIL AND CRIMINAL PENALTIES APPLY.

 DO NOT DUPLICATE. COPYRIGHT 2014, DTS, INC. ALL RIGHTS RESERVED.
 UNAUTHORIZED DUPLICATION IS A VIOLATION OF STATE, FEDERAL AND
 INTERNATIONAL LAWS.

 ALGORITHMS, DATA STRUCTURES AND METHODS CONTAINED IN THIS SOFTWARE
 MAY BE PROTECTED BY ONE OR MORE PATENTS OR PATENT APPLICATIONS.
 UNLESS OTHERWISE PROVIDED UNDER THE TERMS OF A FULLY-EXECUTED WRITTEN
 AGREEMENT BY AND BETWEEN THE RECIPIENT HEREOF AND DTS, THE FOLLOWING
 TERMS SHALL APPLY TO ANY USE OF THE SOFTWARE (THE "PRODUCT") AND, AS
 APPLICABLE, ANY RELATED DOCUMENTATION:  (i) ANY USE OF THE PRODUCT
 AND ANY RELATED DOCUMENTATION IS AT THE RECIPIENT'S SOLE RISK:
 (ii) THE PRODUCT AND ANY RELATED DOCUMENTATION ARE PROVIDED "AS IS"
 AND WITHOUT WARRANTY OF ANY KIND AND DTS EXPRESSLY DISCLAIMS ALL
 WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO ANY
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 PURPOSE, REGARDLESS OF WHETHER DTS KNOWS OR HAS REASON TO KNOW OF THE
 USER'S PARTICULAR NEEDS; (iii) DTS DOES NOT WARRANT THAT THE PRODUCT
 OR ANY RELATED DOCUMENTATION WILL MEET USER'S REQUIREMENTS, OR THAT
 DEFECTS IN THE PRODUCT OR ANY RELATED DOCUMENTATION WILL BE
 CORRECTED; (iv) DTS DOES NOT WARRANT THAT THE OPERATION OF ANY
 HARDWARE OR SOFTWARE ASSOCIATED WITH THIS DOCUMENT WILL BE
 UNINTERRUPTED OR ERROR-FREE; AND (v) UNDER NO CIRCUMSTANCES,
 INCLUDING NEGLIGENCE, SHALL DTS OR THE DIRECTORS, OFFICERS, EMPLOYEES,
 OR AGENTS OF DTS, BE LIABLE TO USER FOR ANY INCIDENTAL, INDIRECT,
 SPECIAL, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION, AND LOSS
 OF BUSINESS INFORMATION) ARISING OUT OF THE USE, MISUSE, OR INABILITY
 TO USE THE PRODUCT OR ANY RELATED DOCUMENTATION.
*======================================================================*/

/********************************************************************************
 *	SRS Labs CONFIDENTIAL
 *	@Copyright 2010 by SRS Labs.
 *	All rights reserved.
 *
 *  Description:
 *  Exposes all srs_widesurround APIs
 *
 *  RCS keywords:
 *	$Id$
 *  $Author$
 *  $Date$
 *	
********************************************************************************/

#ifndef __SRS_WIDESURROUND_API_H__
#define __SRS_WIDESURROUND_API_H__

#include "srs_widesrd_def.h"


#ifdef __cplusplus
extern "C"{
#endif /*__cplusplus*/

int					SRS_WideSrd_GetObjSize(void);
SRSResult			SRS_WideSrd_CreateObj(SRSWideSrdObj *pObj, void *pBuf, SRS_Allocator alloc, void *pContext);

SRSResult			SRS_WideSrd_InitObj32k(SRSWideSrdObj wsObj);
SRSResult			SRS_WideSrd_InitObj44k(SRSWideSrdObj wsObj);
SRSResult			SRS_WideSrd_InitObj48k(SRSWideSrdObj wsObj);

SRSResult			SRS_WideSrd_Process(SRSWideSrdObj wsObj, SRSStereoCh *audioIO, void *wksps);

//"Set" functions:
void				SRS_WideSrd_SetControlDefaults(SRSWideSrdObj wsObj);
SRSResult			SRS_WideSrd_SetEnable(SRSWideSrdObj wsObj, SRSBool enable);
SRSResult			SRS_WideSrd_SetInputGain(SRSWideSrdObj wsObj, SRSInt16 gain); //I16.SRS_WIDESRD_GAIN_IWL
SRSResult			SRS_WideSrd_SetBypassGain(SRSWideSrdObj wsObj, SRSInt16 gain); //I16.SRS_WIDESRD_GAIN_IWL
SRSResult			SRS_WideSrd_SetCenterBoostGain(SRSWideSrdObj wsObj, SRSInt16 gain); //I16.SRS_WIDESRD_GAIN_IWL
SRSResult			SRS_WideSrd_SetSpeakerSeparationLevel(SRSWideSrdObj wsObj, SRSInt16 separation); //I16.SRS_WIDESRD_SPK_SEP_IWL
SRSResult			SRS_WideSrd_SetHsHPFEnable(SRSWideSrdObj wsObj, SRSBool enable);

SRSResult			SRS_WideSrd_SetControls(SRSWideSrdObj wsObj, const SRSWideSrdControls *pCtrls);

//"Get" functions:
SRSBool				SRS_WideSrd_GetEnable(SRSWideSrdObj wsObj);
SRSInt16			SRS_WideSrd_GetInputGain(SRSWideSrdObj wsObj);
SRSInt16			SRS_WideSrd_GetBypassGain(SRSWideSrdObj wsObj); 
SRSInt16			SRS_WideSrd_GetCenterBoostGain(SRSWideSrdObj wsObj);
SRSInt16			SRS_WideSrd_GetSpeakerSeparationLevel(SRSWideSrdObj wsObj);
SRSBool				SRS_WideSrd_GetHsHPFEnable(SRSWideSrdObj wsObj);

void				SRS_WideSrd_GetControls(SRSWideSrdObj wsObj, SRSWideSrdControls *pCtrls);

//Version functions:
unsigned char		SRS_WideSrd_GetLibVersion(SRSVersion which);
unsigned char		SRS_WideSrd_GetTechVersion(SRSVersion which);

const SRSLibInfo*	SRS_WideSrd_GetLibsInfo();

#ifdef __cplusplus
}
#endif /*__cplusplus*/

#endif /*__SRS_WIDESURROUND_API_H__*/
