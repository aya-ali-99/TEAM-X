################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SERVICE/DisplayDateTime/DisplayDateTime.c 

OBJS += \
./SERVICE/DisplayDateTime/DisplayDateTime.o 

C_DEPS += \
./SERVICE/DisplayDateTime/DisplayDateTime.d 


# Each subdirectory must supply rules for building sources it contributes
SERVICE/DisplayDateTime/%.o: ../SERVICE/DisplayDateTime/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


