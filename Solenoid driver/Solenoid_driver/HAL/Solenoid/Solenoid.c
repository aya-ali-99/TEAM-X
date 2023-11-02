/*
 * Solenoid.c

 *
 *  Created on: Nov 2, 2023
 *      Author: dell
 */
#include "Solenoid_interface.h"

/* Solenoid initialization */
E_ErrorType HAL_Solenoid_init()
{
	E_ErrorType u8LocalReturn =OK;
	if(DIO_STATUS_ERROR == NOT_OK)
	{
		u8LocalReturn = NOT_OK;
	}
	else
	{
		S_Dio Solenoid_interface;
		Solenoid_interface.port_num=SOLENOID_PORT;
		Solenoid_interface.pin_num=SOLENOID_PIN;
		Solenoid_interface.Direction=OUTPUT;
		u8LocalReturn=MCAL_Dio_Init(&Solenoid_interface);
	}
	return OK;
}

/* Open solenoid */
E_ErrorType HAL_Solenoid_Open()
{
	E_ErrorType u8LocalReturn =OK;
	if(DIO_STATUS_ERROR == NOT_OK)
	{
		u8LocalReturn = NOT_OK;
	}
	else
	{
		S_Dio Solenoid_interface;
		Solenoid_interface.port_num=SOLENOID_PORT;
		Solenoid_interface.pin_num=SOLENOID_PIN;
		Solenoid_interface.Direction=OUTPUT;
		u8LocalReturn=MCAL_Dio_WritePin(&Solenoid_interface,PIN_HIGH);
	}
	return OK;

}
/* Close the solenoid */
E_ErrorType HAL_Solenoid_Close( )
{

	E_ErrorType u8LocalReturn =OK;
	if(DIO_STATUS_ERROR == NOT_OK)
	{
		u8LocalReturn = NOT_OK;
	}
	else
	{
		S_Dio Solenoid_interface;
		Solenoid_interface.port_num=SOLENOID_PORT;
		Solenoid_interface.pin_num=SOLENOID_PIN;
		Solenoid_interface.Direction=OUTPUT;
		u8LocalReturn=MCAL_Dio_WritePin(&Solenoid_interface,PIN_LOW);
	}
	return OK;

}
