################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/LDR/LDR_prg.c 

OBJS += \
./HAL/LDR/LDR_prg.o 

C_DEPS += \
./HAL/LDR/LDR_prg.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/LDR/%.o: ../HAL/LDR/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"E:\Mohamed\NTI\Embedded projects\AVR_Project\HAL\LCD" -I"C:\Ayaya\NTI 4 Month\EclipseProjects\AVR_Project\HAL\Password" -I"C:\Ayaya\NTI 4 Month\EclipseProjects\AVR_Project\HAL\RTC" -I"E:\Mohamed\NTI\Embedded projects\AVR_Project\MCAL\DIO" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


