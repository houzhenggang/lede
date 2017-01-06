/*
    ***************************************************************************
    * Ralink Technology, Corp.
    * 5F., No. 5, Tai-Yuan 1st St., Jhubei City, Hsinchu County 30265, Taiwan
    *
    * (c) Copyright 2002-2011, Ralink Technology, Corp.
    *
    * All rights reserved. Ralink's source code is an unpublished work and the use of a copyright notice 
    * does not imply otherwise. This source code contains confidential trade secret material of 
    * Ralink Technology, Corp. Any attempt or participation in deciphering, decoding, reverse engineering 
    * or in any way altering the source code is stricitly prohibited, unless the prior written consent of 
    * Ralink Technology, Corp. is obtained.
    ***************************************************************************
*/

#ifndef __LED_H__
#define __LED_H__

//
// The LED table
//


/*
// LED Status.
#define LED_LINK_DOWN               0
#define LED_LINK_UP                 1
#define LED_RADIO_OFF               2
#define LED_RADIO_ON                3
#define LED_HALT                    4
#define LED_WPS                     5
#define LED_ON_SITE_SURVEY          6
#define LED_POWER_UP                7

// WPS LED status (for LED mode = 7 only)
#define LED_WPS_IN_PROCESS              8  // The protocol is searching for a partner, connecting, or exchanging network parameters.
#define LED_WPS_ERROR                   9  // Some error occurred which was not related to security, such as failed to find any partner or protocol prematurely aborted.
#define LED_WPS_SESSION_OVERLAP_DETECTED        10 // The Protocol detected overlapping operation (more than one Registrar in PBC mode): could be a security risk.
#define LED_WPS_SUCCESS                 11 // The protocol is finished: no uncorrectable errors occured. Normally after guard time period.
#define LED_WPS_TURN_LED_OFF                12 // Turn the WPS LEDs off.
#define LED_WPS_TURN_ON_BLUE_LED                    13 // Turn on the WPS blue LED.
#define LED_NORMAL_CONNECTION_WITHOUT_SECURITY  14 // Successful connection with an AP using OPEN-NONE.
#define LED_NORMAL_CONNECTION_WITH_SECURITY     15 // Successful connection with an AP using an encryption algorithm.

//WPS LED mode (for LED mode = 10 only)
#define LED_WPS_MODE10_TURN_ON          16  // For Dlink WPS LED, turn the WPS LED on
#define LED_WPS_MODE10_FLASH                17  // For Dlink WPS LED, let the WPS LED flash
#define LED_WPS_MODE10_TURN_OFF         18  // For Dlink WPS LED, turn the WPS LED off
*/

#define LED_BEHVIOR_SOLID_ON        0
#define LED_BEHVIOR_SOLID_OFF       1
#define LED_BEHVIOR_TXBLINK     2
#define LED_BEHVIOR_BLINK_1_PER_SEC 3
#define LED_BEHVIOR_BLINK_2_PER_SEC 4
#define LED_BEHVIOR_BLINK_3_PER_SEC 5
#define LED_BEHVIOR_BLINK_500_ON_100_OFF    6
#define LED_BEHVIOR_RESERVED_7  7
#define LED_BEHVIOR_RESERVED_8  8
#define LED_BEHVIOR_RESERVED_9  9
#define LED_BEHVIOR_RESERVED_10 10
#define LED_BEHVIOR_RESERVED_11 11
#define LED_BEHVIOR_RESERVED_12 12
#define LED_BEHVIOR_RESERVED_13 13
#define LED_BEHVIOR_RESERVED_14 14
#define LED_BEHVIOR_RESERVED_15 15
#define LED_BEHVIOR_BLINK_3_PER_SEC_FOR_4_SEC   16
#define LED_BEHVIOR_5_SEC_ON_3_SEC_OFF_TXBLINK  17
#define LED_BEHVIOR_5_SEC_ON    18
#define LED_BEHVIOR_RESERVED_19 19
#define LED_BEHVIOR_RESERVED_20 20
#define LED_BEHVIOR_RESERVED_21 21
#define LED_BEHVIOR_RESERVED_22 22
#define LED_BEHVIOR_RESERVED_23 23
#define LED_BEHVIOR_RESERVED_24 24
#define LED_BEHVIOR_RESERVED_25 25
#define LED_BEHVIOR_RESERVED_26 26
#define LED_BEHVIOR_RESERVED_27 27
#define LED_BEHVIOR_RESERVED_28 28
#define LED_BEHVIOR_RESERVED_29 29
#define LED_BEHVIOR_RESERVED_30 30
#define LED_BEHVIOR_RESERVED_31 31
#define LED_BEHVIOR_TWO_LED_INTERACTIVE_BLINK   32
#define LED_BEHVIOR_NOT_IN_USED 0xFF //255


ULONG LED_MODE_STATUS_NUMBER[17][19] = 
{
//          {LED_LINK_DOWN, LED_LINK_UP, LED_RADIO_OFF, LED_RADIO_ON, LED_HALT, LED_WPS, LED_ON_SITE_SURVEY, LED_POWER_UP, LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON


{                               //Mode_0, Default Setting
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_1
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_5_SEC_ON_3_SEC_OFF_TXBLINK,     //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_2
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_3
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_4
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_5
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_6
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_7
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_8
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_9
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_10
LED_BEHVIOR_BLINK_1_PER_SEC,    //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_BLINK_1_PER_SEC,    //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_BLINK_3_PER_SEC_FOR_4_SEC,      //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_OFF,          //LED_POWER_UP,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_5_SEC_ON,           //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,

/*Mode_10*/ //{0x3, 0x2, 0x0, 0x3, 0x0, 0x5, 0x4, 0x3, 0x5, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, 0x6, 0x0, 0xFF, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY},


{                               //Mode_11
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,

{                               //Mode_12
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_13
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_14
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_15
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_NOT_IN_USED,        //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_ON,           //LED_POWER_UP,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,


{                               //Mode_16
LED_BEHVIOR_SOLID_ON,           //LED_LINK_DOWN,
LED_BEHVIOR_TXBLINK,            //LED_LINK_UP,
LED_BEHVIOR_SOLID_OFF,          //LED_RADIO_OFF,
LED_BEHVIOR_SOLID_ON,           //LED_RADIO_ON,
LED_BEHVIOR_SOLID_OFF,          //LED_HALT,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS,
LED_BEHVIOR_BLINK_3_PER_SEC_FOR_4_SEC,      //LED_ON_SITE_SURVEY,
LED_BEHVIOR_SOLID_OFF,          //LED_POWER_UP,
LED_BEHVIOR_BLINK_3_PER_SEC,    //LED_WPS_IN_PROCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_ERROR,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_SESSION_OVERLAP_DETECTED,
LED_BEHVIOR_5_SEC_ON_3_SEC_OFF_TXBLINK,     //LED_WPS_SUCCESS,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_LED_OFF,
LED_BEHVIOR_NOT_IN_USED,        //LED_WPS_TURN_ON_BLUE_LED,
LED_BEHVIOR_NOT_IN_USED,        //LED_NORMAL_CONNECTION_WITHOUT_SECURITY,
LED_BEHVIOR_NOT_IN_USED},       //LED_NORMAL_CONNECTION_WITH_SECURITY,

/*Mode_16*/ //{0x1, 0x2, 0x0, 0x1, 0x0, 0x5, 0x4, 0x1, 0x5, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, 0x6, 0x0, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
/*Mode_16*/ /////{0x2, 0x2, 0x2, 0x2, 0x2, 0x5, 0x2, 0x2, 0x5, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, 0x6, 0x0, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
};

/*
ULONG LED_MODE_STATUS_NUMBER_NORMAL[8][8] = 
{
//          {LED_LINK_DOWN, LED_LINK_UP, LED_RADIO_OFF, LED_RADIO_ON, LED_HALT, LED_WPS, LED_ON_SITE_SURVEY, LED_POWER_UP,}, // LED ON
//Mode_0/   {0x2, 0x2, 0x0, 0x1, 0x0, 0x5, 0xFF, 0x1}, // LED ON
//Mode_1/   {0x2, 0x2, 0x0, 0x2, 0x0, 0x5, 0xFF, 0x2}, // LED ON
//Mode_2/   {0x1, 0x2, 0x0, 0x1, 0x0, 0x5, 0xFF, 0x1}, // LED ON
//Mode_3/   {0x3, 0x2, 0x0, 0x3, 0x0, 0x5, 0x4, 0x3},
//Mode_4/   {0x1, 0x2, 0x0, 0x1, 0x0, 0x5, 0xFF, 0x1}, // LED ON
//Mode_5/   {0x1, 0x2, 0x0, 0x1, 0x0, 0x5, 0xFF, 0x1}, // LED ON
//Mode_6/   {0x1, 0x2, 0x0, 0x1, 0x0, 0x5, 0xFF, 0x1}, // LED ON
//Mode_7/   {0x1, 0x2, 0x0, 0x1, 0x0, 0x5, 0x4, 0x1}, // LED ON
};

ULONG LED_MODE_STATUS_NUMBER_WPS[16][8] = 
{
//          {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_0/   {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_1/   {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_2/   {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_3/   {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_4/   {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_5/   {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_6/   {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_7/   {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_8/   {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_9/   {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_10/  {0x5, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, 0x6, 0x0, 0xFF, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY},
//Mode_11/  {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_12/  {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_13/  {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_14/  {LED_WPS_IN_PROCESS, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, LED_WPS_SUCCESS, LED_WPS_TURN_LED_OFF, LED_WPS_TURN_ON_BLUE_LED, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
//Mode_15/  {0x5, LED_WPS_ERROR, LED_WPS_SESSION_OVERLAP_DETECTED, 0x6, 0x0, 0xFF, LED_NORMAL_CONNECTION_WITHOUT_SECURITY, LED_NORMAL_CONNECTION_WITH_SECURITY}, // LED ON
};
*/

#endif

