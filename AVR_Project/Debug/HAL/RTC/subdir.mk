################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/RTC/RTC.c 

OBJS += \
./HAL/RTC/RTC.o 

C_DEPS += \
./HAL/RTC/RTC.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/RTC/%.o: ../HAL/RTC/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"E:\Mohamed\NTI\Embedded projects\AVR_Project\HAL\LCD" -I"E:\Mohamed\NTI\Embedded projects\AVR_Project\HAL\LCD" -I"E:\Mohamed\NTI\Embedded projects\AVR_Project\MCAL\I2C" -I"E:\Mohamed\NTI\Embedded projects\AVR_Project\MCAL\DIO" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


