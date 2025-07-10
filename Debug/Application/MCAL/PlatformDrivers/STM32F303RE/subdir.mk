################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/MCAL/PlatformDrivers/STM32F303RE/Dio_Stm32.c 

OBJS += \
./Application/MCAL/PlatformDrivers/STM32F303RE/Dio_Stm32.o 

C_DEPS += \
./Application/MCAL/PlatformDrivers/STM32F303RE/Dio_Stm32.d 


# Each subdirectory must supply rules for building sources it contributes
Application/MCAL/PlatformDrivers/STM32F303RE/%.o Application/MCAL/PlatformDrivers/STM32F303RE/%.su: ../Application/MCAL/PlatformDrivers/STM32F303RE/%.c Application/MCAL/PlatformDrivers/STM32F303RE/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F303xE -DSTM32 -DSTM32F3 -DSTM32F303RETx -c -I"C:/Users/Bartek/STM32CubeIDE/workspace_1.11.2/stm32_lightApp_byGPIOLED/Application/Core/Inc" -I"C:/Users/Bartek/STM32CubeIDE/workspace_1.11.2/stm32_lightApp_byGPIOLED/Application/BSW/DET" -I"C:/Users/Bartek/STM32CubeIDE/workspace_1.11.2/stm32_lightApp_byGPIOLED/Application/BSW/GPIO" -I"C:/Users/Bartek/STM32CubeIDE/workspace_1.11.2/stm32_lightApp_byGPIOLED/Application/MCAL" -I"C:/Users/Bartek/STM32CubeIDE/workspace_1.11.2/stm32_lightApp_byGPIOLED/Application/ProjectConfig" -I"C:/Users/Bartek/STM32CubeIDE/workspace_1.11.2/stm32_lightApp_byGPIOLED/Application/RTE" -I"C:/Users/Bartek/STM32CubeIDE/workspace_1.11.2/stm32_lightApp_byGPIOLED/Application/APP" -I"C:/Users/Bartek/STM32CubeIDE/workspace_1.11.2/stm32_lightApp_byGPIOLED/Application/MCAL/PlatformDrivers/STM32F303RE/CMSIS/Device/ST/STM32F3xx/Include" -I"C:/Users/Bartek/STM32CubeIDE/workspace_1.11.2/stm32_lightApp_byGPIOLED/Application/MCAL/PlatformDrivers/STM32F303RE/CMSIS/Include" -I"C:/Users/Bartek/STM32CubeIDE/workspace_1.11.2/stm32_lightApp_byGPIOLED/Application/MCAL/PlatformDrivers/STM32F303RE" -I"C:/Users/Bartek/STM32CubeIDE/workspace_1.11.2/stm32_lightApp_byGPIOLED/Application/APP/LightsControl" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application-2f-MCAL-2f-PlatformDrivers-2f-STM32F303RE

clean-Application-2f-MCAL-2f-PlatformDrivers-2f-STM32F303RE:
	-$(RM) ./Application/MCAL/PlatformDrivers/STM32F303RE/Dio_Stm32.d ./Application/MCAL/PlatformDrivers/STM32F303RE/Dio_Stm32.o ./Application/MCAL/PlatformDrivers/STM32F303RE/Dio_Stm32.su

.PHONY: clean-Application-2f-MCAL-2f-PlatformDrivers-2f-STM32F303RE

