/**
 * @file       GlobalFormatStm32.h
 * @brief      ����Stm32ϵ��MCU����������
 * @details    ����Stm32ϵ��MCU����������
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
#ifndef GLOBAL_FORMAT_STM32__H_
#define GLOBAL_FORMAT_STM32__H_

#include "GlobalDefine.h"

/*
�ļ�����
====================================================================================================
�궨��
*/

/**
 * @brief ͨ�ú궨��
 */
#define X_Abs(Val) (((Val) >= 0)? (Val):(-(Val)))       /*!< �궨�庯��,ȡ����ֵ */
#define X_Not(Val) (((Val) == false)? (true):(false))   /*!< �궨�庯��,�߼�ȡ�� */
#define X_Bit(Val) (1 << (Val))                         /*!< �궨�庯��,ȡλ */
#define NULL       (0)                                  /*!< ��ָ��ֵ */

/*
�궨��
====================================================================================================
��ʽ����
*/

/**
 * @brief �����߼�ֵ
 */
typedef enum bl_ 
{
  false = 0,
  true  = !false,
}bl;

/**
 * @brief ��ֵ�߼�ֵ(ternary)
 */
typedef enum tn_ 
{
  _False   = 0x0,
  _True    = 0x1,
  _Unknown = 0x2,
}tn;

typedef  bool                 bl;
typedef  signed char          s8;
typedef  signed short         s16;
typedef  signed int           s32;
typedef  signed long long     s64;

typedef  unsigned char        u8;
typedef  unsigned short       u16;
typedef  unsigned int         u32;
typedef  unsigned long long   u64;

typedef  float                f32;
typedef  double               f64;


/**
 * @brief u8λ����
 */
typedef union _u8_1
{
  u8 u8;
  struct 
  {
    u8 Bit0:1; 
    u8 Bit1:1;
    u8 Bit2:1;
    u8 Bit3:1;
    u8 Bit4:1;
    u8 Bit5:1;
    u8 Bit6:1;
    u8 Bit7:1; 
  };
}u8_1;

/**
 * @brief u16λ����
 */
typedef union _u16_1
{
  u16 u16;
  struct 
  {
    u16 bit0:1; //���λ
    u16 bit1:1;
    u16 bit2:1;
    u16 bit3:1;
    u16 bit4:1;
    u16 bit5:1;
    u16 bit6:1;
    u16 bit7:1;
    u16 bit8:1;
    u16 bit9:1;
    u16 bit10:1;
    u16 bit11:1;
    u16 bit12:1;
    u16 bit13:1;
    u16 bit14:1;
    u16 bit15:1; 
  };
}u16_1;

/**
 * @brief u32λ����
 */
typedef union _u32_1
{
  u32 u32;
  struct 
  {
    u32 bit0:1;  //���λ
    u32 bit1:1;
    u32 bit2:1;
    u32 bit3:1;
    u32 bit4:1;
    u32 bit5:1;
    u32 bit6:1;
    u32 bit7:1;
    u32 bit8:1;
    u32 bit9:1;
    u32 bit10:1;
    u32 bit11:1;
    u32 bit12:1;
    u32 bit13:1;
    u32 bit14:1;
    u32 bit15:1;
    u32 bit16:1;
    u32 bit17:1;
    u32 bit18:1;
    u32 bit19:1;
    u32 bit20:1;
    u32 bit21:1;
    u32 bit22:1;
    u32 bit23:1;
    u32 bit24:1;
    u32 bit25:1;
    u32 bit26:1;
    u32 bit27:1;
    u32 bit28:1;
    u32 bit29:1;
    u32 bit30:1;
    u32 bit31:1;
  };
}u32_1;

typedef union u16_8_
{
  u16 u16;
  struct 
  {
    u8 u8_0; //���ֽ�
    u8 u8_1;
  };
}u16_8;

typedef union u32_8_
{
  u32 u32;
  struct 
  {
    u8 u8_0; //���ֽ�
    u8 u8_1;
    u8 u8_2;
    u8 u8_3;
  };
}u32_8;

typedef union u64_8_
{
  u64 u64;
  struct 
  {
    u8 u8_0; //���ֽ�
    u8 u8_1;
    u8 u8_2;
    u8 u8_3;
    u8 u8_4;
    u8 u8_5;
    u8 u8_6;
    u8 u8_7;
  };
}u64_8;

typedef union s16_8_
{
  s16 s16;
  struct 
  {
    u8 u8_0; //���ֽ�
    u8 u8_1;
  };
}s16_8;

typedef union s32_8_
{
  s32 s32;
  struct 
  {
    u8 u8_0; //���ֽ�
    u8 u8_1;
    u8 u8_2;
    u8 u8_3;
  };
}s32_8;

typedef union s64_8_
{
  s64 s64;
  struct 
  {
    u8 u8_0; //���ֽ�
    u8 u8_1;
    u8 u8_2;
    u8 u8_3;
    u8 u8_4;
    u8 u8_5;
    u8 u8_6;
    u8 u8_7;
  };
}s64_8;

typedef union f32_8_
{
  f32 f32;
  struct 
  {
    u8 u8_0; //���ֽ�
    u8 u8_1;
    u8 u8_2;
    u8 u8_3;
  };
}f32_8;

typedef union f64_8_
{
  f64 f64;
  struct 
  {
    u8 u8_0; //���ֽ�
    u8 u8_1;
    u8 u8_2;
    u8 u8_3;
    u8 u8_4;
    u8 u8_5;
    u8 u8_6;
    u8 u8_7;
  };
}f64_8;


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
