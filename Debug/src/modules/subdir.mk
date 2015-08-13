################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/modules/alg_conditional.c \
../src/modules/alg_repetition.c \
../src/modules/alg_sequential.c \
../src/modules/menu.c 

OBJS += \
./src/modules/alg_conditional.o \
./src/modules/alg_repetition.o \
./src/modules/alg_sequential.o \
./src/modules/menu.o 

C_DEPS += \
./src/modules/alg_conditional.d \
./src/modules/alg_repetition.d \
./src/modules/alg_sequential.d \
./src/modules/menu.d 


# Each subdirectory must supply rules for building sources it contributes
src/modules/%.o: ../src/modules/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


