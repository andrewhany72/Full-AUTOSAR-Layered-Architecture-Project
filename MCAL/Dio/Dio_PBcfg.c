 /****************************************************************************************************
 *
 * File Name: Dio_PBcfg.h
 *
 * Module: Dio
 *
 * Description: Post build Configuration source file for TM4C123GH6PM Microcontroller - Dio Driver
 *
 * Author: Andrew Hany
 *****************************************************************************************************/
/*
 * Module Version 1.0.0
 */
#define DIO_PBCFG_SW_MAJOR_VERSION              (1U)
#define DIO_PBCFG_SW_MINOR_VERSION              (0U)
#define DIO_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define DIO_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define DIO_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define DIO_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)



#include "dio.h"

/* AUTOSAR Version checking between Dio_PBcfg.c and Dio.h files */
#if ((DIO_PBCFG_AR_RELEASE_MAJOR_VERSION != DIO_AR_RELEASE_MAJOR_VERSION)\
 ||  (DIO_PBCFG_AR_RELEASE_MINOR_VERSION != DIO_AR_RELEASE_MINOR_VERSION)\
 ||  (DIO_PBCFG_AR_RELEASE_PATCH_VERSION != DIO_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Dio_PBcfg.c and Dio.h files */
#if ((DIO_PBCFG_SW_MAJOR_VERSION != DIO_SW_MAJOR_VERSION)\
 ||  (DIO_PBCFG_SW_MINOR_VERSION != DIO_SW_MINOR_VERSION)\
 ||  (DIO_PBCFG_SW_PATCH_VERSION != DIO_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/*
 * Post Build structure that is passed to the DIO Init function
 */
const Dio_ConfigType Dio_Configurations = {
                                           DioConf_LED1_PORT_NUM, DioConf_LED1_CHANNEL_NUM,
                                           DioConf_LED2_PORT_NUM, DioConf_LED2_CHANNEL_NUM,
                                           DioConf_SW1_PORT_NUM, DioConf_SW1_CHANNEL_NUM,
                                           DioConf_SW2_PORT_NUM, DioConf_SW2_CHANNEL_NUM
};
/*
 * Post Build structure of the 3 LEDS group in PORTF
 */
const Dio_ChannelGroupType Dio_PortfLedsGroup = { DIO_PORTF_LEDS_MASK, DioConf_LED1_CHANNEL_NUM, DioConf_LED1_PORT_NUM };

