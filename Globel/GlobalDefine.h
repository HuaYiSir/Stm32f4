/**
 * @file       GlobalDefine.h
 * @brief      ���ڶ���ȫ��MCU���ͱ��뿪�أ��Լ��������õ��������Ͷ����ļ�
 * @details    ������Ҫ�������õı��뿪�أ���Ҫ�������MCU���ͺ����õ����������ļ�
 * @author     HuaYi_Sir
 * @date       2020-09-21
 * @version    V1.0
 * @copyright  Copyright (c) 2018-2020 ��ܲǶ��ʽ
 *******************************************************************************************
 * @attention
 * Ӳ��ƽ̨: STM32F407
 * @par �޸���־:
 * <table>
 * <tr><th>Date        <th>Version   <th>Author    <th>Description
 * <tr><td>2020/09/21  <td>V1.0      <td>HuaYi_Sir <td>������ʼ�汾
 * </table>
 * 
 ********************************************************************************************
 */
#ifndef GLOBAL_DEFINE__H_
#define GLOBAL_DEFINE__H_

#include "GlobalAppConfig.h"

/*
�ļ�����
====================================================================================================
�궨��
*/

/**
 * @brief �������Զ�ʶ�� ѡ�����õı�����
 */
#if   defined ( __CC_ARM )
  #pragma anon_unions                           /**���������ṹ��Ա*/
  
  #define __ASM            __asm                /*!< asm keyword for ARM Compiler */
  #define __INLINE         __inline             /*!< inline keyword for ARM Compiler */
  #define __STATIC_INLINE  static __inline

#elif defined ( __GNUC__ )
  #define __ASM            __asm                /*!< asm keyword for GNU Compiler */
  #define __INLINE         inline               /*!< inline keyword for GNU Compiler */
  #define __STATIC_INLINE  static inline

#elif defined ( __ICCARM__ )
  #define __ASM            __asm                /*!< asm keyword for IAR Compiler */
  #define __INLINE         inline               /*!< inline keyword for IAR Compiler. Only available in High optimization mode! */
  #define __STATIC_INLINE  static inline
  
#elif defined ( __ICC430__ )
  #define __ASM            __asm                /*!< asm keyword for IAR Compiler */
  #define __INLINE         inline               /*!< inline keyword for IAR Compiler. Only available in High optimization mode! */
  #define __STATIC_INLINE  static inline
  
#endif

/**
 * @brief ����MCU�������ݸ�ʽ�ļ�����Ҫ�����޸ģ�
 */
#if defined(_MCU_MSP430F2XXX_) ||  defined(_MCU_MSP430F4XXX_) ||  defined(_MCU_MSP430F5XXX_) ||  defined(_MCU_MSP430F6XXX_)    /**MSP430ϵ��*/

#include "GlobalFormatMsp430.h" /**MSP430ϵ��*/

#endif


#if defined(_MCU_STM32F0XXX_) ||  defined(_MCU_STM32F1XXX_) ||  defined(_MCU_STM32F4XXX_) ||  defined(_MCU_STM32L0XXX_)  ||  defined(_MCU_STM32L1XXX_) ||  defined(_MCU_STM32L4XXX_)   /**STM32ϵ��*/

#include "GlobalFormatStm32.h"  /**STM32ϵ��*/

#endif

/*
�궨��
====================================================================================================
��ʽ����
*/

/*
��ʽ����
====================================================================================================
��������
*/

/*
��������
====================================================================================================
�ⲿ����
*/

/*
�ⲿ����
====================================================================================================
��������
*/

/*
��������
====================================================================================================
�ڲ�����
*/

/*
�ڲ�����
====================================================================================================
�ⲿ����
*/
#endif
