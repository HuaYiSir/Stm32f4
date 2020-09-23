/**
 * @file       GpioHal.h
 * @brief      通用IO口的操作模型定义
 * @details    通用IO的操作函数
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

#ifndef _GPIO_HAL__H_
#define _GPIO_HAL__H_

/*
文件引用
====================================================================================================
格式声明
*/

/**
 * @brief 引脚输出电平定义
 */
#define PIN_LOW                    0x00    /*!< 低电平 */
#define PIN_HIGH                   0x01    /*!< 高电平 */

/**
 * @brief 引脚输出速度定义
 */
#define PIN_SPEED_FREQ_LOW             0X00    /*!< 低速 */
#define PIN_SPEED_FREQ_MEDIUM          0X01    /*!< 中速 */
#define PIN_SPEED_FREQ_HIGH            0X02    /*!< 高速 */
#define PIN_SPEED_FREQ_FREQ_VERY_HIGH  0X03    /*!< 超高速 */

/**
 * @brief 引脚中断触发电平定义
 */
#define PIN_IRQ_MODE_RISING             0x00    /*!< 上升沿触发 */
#define PIN_IRQ_MODE_FALLING            0x01    /*!< 下降沿触发 */
#define PIN_IRQ_MODE_RISING_FALLING     0x02    /*!< 上升沿和下降沿触发 */
#define PIN_IRQ_MODE_HIGH_LEVEL         0x03    /*!< 高电平触发 */
#define PIN_IRQ_MODE_LOW_LEVEL          0x04    /*!< 低电平触发 */

/**
 * @brief 引脚模式定义
 */
typedef struct GpioPinModeDef_               
{
    u16 pin;          /*!< Gpio引脚 */
    u16 mode;         /*!< Gpio引脚模式 */
}GpioPinModeDef;

/**
 * @brief 引脚状态定义
 */
typedef struct GpioPinStatusDef_         
{
    u16 pin;                           /*!< Gpio引脚 */
    u16 status;                        /*!< Gpio引脚状态 */
}GpioPinStatusDef;

/**
 * @brief 引脚中断定义
 */
typedef struct GpioPinIrqHdrDef_   
    u16        pin;                     /*!< 产生中断的引脚 */
    u16        mode;                    /*!< 触发引脚中断的模式 */
    void       (*pf_hdr)(void *args);   /*!< 中断服务函数 */
    void       *args;                   /*!< 中断服务函数参数 */
}GpioPinIrqHdrDef;

/**
 * @brief 通用IO口抽象模型
 */
typedef struct GpioAbstDef_             
{
    void   (*pf_SetPinMode)  (u8 pin, u8 mode);    //设置引脚模式
    void   (*pf_SetPinSpeed) (u8 pin, u8 speed);   //设置引脚速度
    void   (*pf_PinWrite)    (u8 pin, u8 value);   //写引脚电平
    u8     (*pf_PinRead)     (u8 pin);             //读引脚电平

    bool   (*pf_PinAttachIrq)(u8 pin,u8 mode, void (*hdr)(void *args), void *args); //绑定引脚中断回调函数，pin 引脚编号 mode中断触发模式 hdr中断回调函数 arg 中断回调函数参数
    bool   (*pf_PinDetachIrq)(u8 pin);  //解绑引脚中断回调函数
    bool   (*pf_PinIrqEnable)(u8 pin, u8 enabled); //使能/屏蔽引脚中断
}GpioAbstDef;

/*
格式声明
====================================================================================================
外部变量
*/

extern const struct GpioAbstDef dG_GpioAbst；

/*
外部变量
====================================================================================================
外部函数
*/
/**
 * @brief 设置IO口输出翻转
 * @param[in]
 * @param[in]
 * @param[in]
 * @return void
 * @retval
 * @par 示例:
 * @code
 * 
 * @endcode
 * @see ::
 */

#endif
