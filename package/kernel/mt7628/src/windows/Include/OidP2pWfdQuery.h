/*
 ***************************************************************************
 * Ralink Tech Inc.
 * 4F, No. 2 Technology 5th Rd.
 * Science-based Industrial Park
 * Hsin-chu, Taiwan, R.O.C.
 *
 * (c) Copyright 2002-2004, Ralink Technology, Inc.
 *
 * All rights reserved. Ralink's source code is an unpublished work and the
 * use of a copyright notice does not imply otherwise. This source code
 * contains confidential trade secret material of Ralink Tech. Any attemp
 * or participation in deciphering, decoding, reverse engineering or in any
 * way altering the source code is stricitly prohibited, unless the prior
 * written consent of Ralink Technology, Inc. is obtained.
 ***************************************************************************

    Module Name:
    P2pWfd_oidQuery.h

    Abstract:
    

    Revision History:
    Who         When          What
    --------    ----------    ----------------------------------------------


*/
#ifndef __OIDP2PWFDQUERY_H__
#define __OIDP2PWFDQUERY_H__


/**
 * .
 *
 * @param pAd pointer to RTMP_ADAPTER structure.
 * @param NdisRequest pointer to NDIS_OID_REQUEST structure.
 *
 * @return If the function succeeds, the return value is NDIS_STATUS_SUCCESS.
 * Otherwise, an error code is returned.
 */
NDIS_STATUS
N6QueryOidDot11WfdEnumDeviceList(
    IN  PMP_ADAPTER         pAd,
    IN  PNDIS_OID_REQUEST   NdisRequest
    );


/**
 * .
 *
 * @param pAd pointer to RTMP_ADAPTER structure.
 * @param NdisRequest pointer to NDIS_OID_REQUEST structure.
 *
 * @return If the function succeeds, the return value is NDIS_STATUS_SUCCESS.
 * Otherwise, an error code is returned.
 */
NDIS_STATUS
N6QueryOidDot11WfdListenStateDiscoverability(
    IN  PMP_ADAPTER         pAd,
    IN  PNDIS_OID_REQUEST   NdisRequest
    );
    

/**
 * .
 *
 * @param pAd pointer to RTMP_ADAPTER structure.
 * @param NdisRequest pointer to NDIS_OID_REQUEST structure.
 *
 * @return If the function succeeds, the return value is NDIS_STATUS_SUCCESS.
 * Otherwise, an error code is returned.
 */
NDIS_STATUS
N6QueryOidDot11WfdGetDialogToken(
    IN  PMP_ADAPTER         pAd,
    IN  PNDIS_OID_REQUEST   NdisRequest
    );
 
#endif