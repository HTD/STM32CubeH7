/**
  ******************************************************************************
  * @file    PWR/PWR_STOP_RTC/Common/Inc/common.h
  * @author  MCD Application Team
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __COMMON_H
#define __COMMON_H

/* Includes ------------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
#define HSEM_ID_0 (0U) /* HW semaphore 0*/

/* Uncomment this line to set the CM7 core as wakeup target */
/* #define WAKEUP_TARGET_CM7 */

/* Uncomment this line to set the CM4 core as wakeup target */
/* #define WAKEUP_TARGET_CM4 */

/* Uncomment this line to set the CM7 and CM4 cores as wakeup targets */
 #define WAKEUP_TARGET_ALL_CPU 

/* Exported types ------------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* __COMMON_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
