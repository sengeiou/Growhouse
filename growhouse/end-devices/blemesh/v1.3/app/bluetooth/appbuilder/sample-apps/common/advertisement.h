/***********************************************************************************************//**
 * \file   advertisement.h
 * \brief  Header file related to advertisement
 ***************************************************************************************************
 * <b> (C) Copyright 2015 Silicon Labs, http://www.silabs.com</b>
 ***************************************************************************************************
 * This file is licensed under the Silabs License Agreement. See the file
 * "Silabs_License_Agreement.txt" for details. Before using this software for
 * any purpose, you must agree to the terms of that agreement.
 **************************************************************************************************/

#ifndef APP_ADV_H
#define APP_ADV_H

#ifdef __cplusplus
extern "C" {
#endif

/***********************************************************************************************//**
 * \defgroup adv Advertisement Code
 * \brief Advertisement API
 **************************************************************************************************/

/***********************************************************************************************//**
 * @addtogroup Advertisement
 * @{
 **************************************************************************************************/

/***********************************************************************************************//**
 * @addtogroup adv
 * @{
 **************************************************************************************************/

/***************************************************************************************************
   Public Macros and Definitions
***************************************************************************************************/

#define ADV_TX_POWER      0xc3
#define ADV_FLAGS_LEN     2
#define ADV_UUID_LEN      5
#define ADV_TX_POWER_LEN  2

/***************************************************************************************************
   Public Function Declarations
***************************************************************************************************/

/***********************************************************************************************//**
 *  \brief  Setup advertising.
 **************************************************************************************************/
void advSetup(void);

/**********************************************************************************************//**
*  \brief  Stop advertising current message and prepare for advertising a different message.
**************************************************************************************************/
void advSwitchAdvMessage(void);

/***********************************************************************************************//**
 *  \brief  Indicate that connection has started.
 **************************************************************************************************/
void advConnectionStarted(void);

/** @} (end addtogroup adv) */
/** @} (end addtogroup Advertisement) */

#endif /* APP_ADV_H */
