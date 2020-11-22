################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/TareasMain.cpp \
../src/pruebasTareaPendiente.cpp \
../src/pruebasTareas.cpp \
../src/tareaPendiente.cpp \
../src/tareas.cpp 

OBJS += \
./src/TareasMain.o \
./src/pruebasTareaPendiente.o \
./src/pruebasTareas.o \
./src/tareaPendiente.o \
./src/tareas.o 

CPP_DEPS += \
./src/TareasMain.d \
./src/pruebasTareaPendiente.d \
./src/pruebasTareas.d \
./src/tareaPendiente.d \
./src/tareas.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


