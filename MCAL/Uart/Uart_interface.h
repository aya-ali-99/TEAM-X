/*
 * Uart_interface.h
 *
 *  Created on: Nov 1, 2023
 *      Author: dell
 */

#ifndef MCAL_UART_UART_INTERFACE_H_
#define MCAL_UART_UART_INTERFACE_H_
#include "Uart_Types.h"
#include "Uart_config.h"
#include "Uart_private.h"
#include "Uart_register.h"

/* UART initialization */
E_Errore_State_UART MCAL_UART_init(uint32 baudRate);
/* UART sends character or number by synchronous  way */
E_Errore_State_UART MCAL_UART_send_sysch(uint8 Data);
/* Enable Transmit complete */
E_Errore_State_UART MCAL_UART_TXC_Enable();
 /* Enable USART data register empty */
E_Errore_State_UART  MCAL_UART_UDRE_Enable();
/* UART sends string  by synchronous  way */
E_Errore_State_UART MCAL_UART_send_str_sysch(char*Str);
/* UART receives data  by synchronous  way */
uint8 MCAL_UART_receive_sysch();
/* Enable USART receive complete  */
E_Errore_State_UART  MCAL_UART_RXC_Enable();
/* Set call back func */
E_Errore_State_UART  MCAL_UART_setCAllBACK(void (*p2f)(void),MODES mode);
#endif /* MCAL_UART_UART_INTERFACE_H_ */




