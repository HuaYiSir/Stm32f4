/**
 * @file       GlobalDefine.h
 * @brief      用于定义全局MCU类型编译开关，以及定义引用的数据类型定义文件
 * @details    根据需要调整启用的编译开关，不要随意添加MCU类型和引用的数据类型文件
 * @author     HuaYi_Sir
 * @date       2020-09-21
 * @version    V1.0
 * @copyright  Copyright (c) 2018-2020 骅懿嵌入式
 *******************************************************************************************
 * @attention
 * 硬件平台: STM32F407
 * @par 修改日志:
 * <table>
 * <tr><th>Date        <th>Version   <th>Author    <th>Description
 * <tr><td>2020/09/21  <td>V1.0      <td>HuaYi_Sir <td>创建初始版本
 * </table>
 * 
 ********************************************************************************************
 */
#ifndef GLOBAL_DEFINE__H_
#define GLOBAL_DEFINE__H_

#include "GlobalAppConfig.h"

/*
文件引用
====================================================================================================
宏定义
*/

/**
 * @brief 编译器自动识别 选择启用的编译器
 */
#if   defined ( __CC_ARM )
  #pragma anon_unions                           /**允许匿名结构成员*/
  
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
 * @brief 定义MCU引用数据格式文件，不要随意修改！
 */
#if defined(_MCU_MSP430F2XXX_) ||  defined(_MCU_MSP430F4XXX_) ||  defined(_MCU_MSP430F5XXX_) ||  defined(_MCU_MSP430F6XXX_)    /**MSP430系列*/

#include "GlobalFormatMsp430.h" /**MSP430系列*/

#endif


#if defined(_MCU_STM32F0XXX_) ||  defined(_MCU_STM32F1XXX_) ||  defined(_MCU_STM32F4XXX_) ||  defined(_MCU_STM32L0XXX_)  ||  defined(_MCU_STM32L1XXX_) ||  defined(_MCU_STM32L4XXX_)   /**STM32系列*/

#include "GlobalFormatStm32.h"  /**STM32系列*/

#endif

/*
宏定义
====================================================================================================
格式声明
*/

/*
格式声明
====================================================================================================
函数声明
*/

/*
函数声明
====================================================================================================
外部变量
*/

/*
外部变量
====================================================================================================
变量定义
*/

/*
变量定义
====================================================================================================
内部函数
*/

/*
内部函数
====================================================================================================
外部函数
*/
#endif
