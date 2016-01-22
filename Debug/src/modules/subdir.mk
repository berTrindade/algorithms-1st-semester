################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/modules/alg-conditional.c \
../src/modules/alg-sequential.c \
../src/modules/matrices.c \
../src/modules/menu.c \
../src/modules/vectors.c 

OBJS += \
./src/modules/alg-conditional.o \
./src/modules/alg-sequential.o \
./src/modules/matrices.o \
./src/modules/menu.o \
./src/modules/vectors.o 

C_DEPS += \
./src/modules/alg-conditional.d \
./src/modules/alg-sequential.d \
./src/modules/matrices.d \
./src/modules/menu.d \
./src/modules/vectors.d 


# Each subdirectory must supply rules for building sources it contributes
src/modules/%.o: ../src/modules/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0  -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


