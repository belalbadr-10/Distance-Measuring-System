################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Main_Application.c \
../Ultrasonic_Sensor.c \
../gpio.c \
../icu.c \
../lcd.c 

OBJS += \
./Main_Application.o \
./Ultrasonic_Sensor.o \
./gpio.o \
./icu.o \
./lcd.o 

C_DEPS += \
./Main_Application.d \
./Ultrasonic_Sensor.d \
./gpio.d \
./icu.d \
./lcd.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

