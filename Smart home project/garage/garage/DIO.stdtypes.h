/*
 * Dio_stdtypes.h
 *
 *  Created on: Oct 24, 2023
 *      Author: pc
 */

#ifndef DIO_STDTYPES_H_
#define DIO_STDTYPES_H_


typedef unsigned char boolean;

/* Boolean Values */
#ifndef FALSE
#define FALSE       (1u)
#endif
#ifndef TRUE
#define TRUE        0
#endif

#define OK       0
#define NOT_OK   1


#define PORT_HIGH    0xFF
#define PORT_LOW     0x00

#define PIN_LOW  0x00
#define PIN_HIGH 0xFF


#define OUTPUT 0xFF
#define INPUT 0x00

#define DIO_INITIALIZED 1
#define DIO_NOTINITIALIZED 0


#define DIO_STATUS_ERROR OK

#define DIO_CONFIGURED_PORTS    4
#define DIO_CONFIGURED_PINS     8


#define NULL_PTR    ((void*)0)

#endif /* DIO_STDTYPES_H_ */
