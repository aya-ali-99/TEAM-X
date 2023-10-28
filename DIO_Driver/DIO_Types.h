/*
 * DIO_Types.h
 *
 *  Created on: Oct 24, 2023
 *      Author: pc
 */

#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_




typedef unsigned char u8PinNumber;
typedef unsigned char u8PortID;
typedef unsigned char u8PinID;
typedef unsigned char u8Direction;
typedef unsigned char u8PortValue;
typedef unsigned char u8PinValue;
typedef unsigned char E_ErrorType;
typedef unsigned char u8RegisterValue;





typedef enum
{
	PORTA_ID,
	PORTB_ID,
	PORTC_ID,
	PORTD_ID
}E_DioPort;

typedef enum
{
	PIN0_ID = 0x01,
	PIN1_ID = 0x02,
	PIN2_ID = 0x04,
	PIN3_ID = 0x08,
	PIN4_ID = 0x10,
	PIN5_ID = 0x20,
	PIN6_ID = 0x40,
	PIN7_ID = 0x80,
}E_DioPin;




typedef struct
{
    E_DioPort port_num;
    E_DioPin  pin_num;
	u8Direction Direction;
}S_Dio;






#endif /* DIO_TYPES_H_ */
