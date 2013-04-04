/*-------------------------------------------------------------------------*
 * File:  RX62N_PWM_MTU.h
 *-------------------------------------------------------------------------*
 * Description:
 *     
 *-------------------------------------------------------------------------*/
#ifndef RX62N_PWM_MTU_H_
#define RX62N_PWM_MTU_H_

/*--------------------------------------------------------------------------
 * uEZ(tm) - Copyright (C) 2011 Future Designs, Inc.
 *--------------------------------------------------------------------------
 * This file is part of the uEZ(tm) distribution.
 *
 * uEZ(tm) is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * uEZ(tm) is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with uEZ(tm); if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 * A special exception to the GPL can be applied should you wish to
 * distribute a combined work that includes uEZ(tm), without being obliged
 * to provide the source code for any proprietary components.  See the
 * licensing section of http://www.teamfdi.com/uez for full details of how
 * and when the exception can be applied.
 *
 *    *===============================================================*
 *    |  Future Designs, Inc. can port uEZ(tm) to your own hardware!  |
 *    |             We can get you up and running fast!               |
 *    |      See http://www.teamfdi.com/uez for more details.         |
 *    *===============================================================*
 *
 *-------------------------------------------------------------------------*/
#include <HAL/PWM.h>

/*-------------------------------------------------------------------------*
 * Globals:
 *-------------------------------------------------------------------------*/
extern const HAL_PWM PWM_RX62N_MTU0_Interface;
extern const HAL_PWM PWM_RX62N_MTU1_Interface;
extern const HAL_PWM PWM_RX62N_MTU2_Interface;
extern const HAL_PWM PWM_RX62N_MTU3_Interface;
extern const HAL_PWM PWM_RX62N_MTU4_Interface;
extern const HAL_PWM PWM_RX62N_MTU5_Interface;
extern const HAL_PWM PWM_RX62N_MTU6_Interface;
extern const HAL_PWM PWM_RX62N_MTU7_Interface;
extern const HAL_PWM PWM_RX62N_MTU8_Interface;
extern const HAL_PWM PWM_RX62N_MTU9_Interface;
extern const HAL_PWM PWM_RX62N_MTU10_Interface;

/*-------------------------------------------------------------------------*
 * Prototypes:
 *-------------------------------------------------------------------------*/
void RX62N_PWM_MTU0_Require(void);
void RX62N_PWM_MTU1_Require(void);
void RX62N_PWM_MTU2_Require(void);
void RX62N_PWM_MTU3_Require(void);
void RX62N_PWM_MTU4_Require(void);
void RX62N_PWM_MTU5_Require(void);
void RX62N_PWM_MTU6_Require(void);
void RX62N_PWM_MTU7_Require(void);
void RX62N_PWM_MTU8_Require(void);
void RX62N_PWM_MTU9_Require(void);
void RX62N_PWM_MTU10_Require(void);

#endif // RX62N_MTU_H_
/*-------------------------------------------------------------------------*
 * End of File:  RX62N_MTU.h
 *-------------------------------------------------------------------------*/