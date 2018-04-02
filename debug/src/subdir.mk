################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/gcontableaccountpage.c \
../src/gcontableapplication.c \
../src/gcontablepage.c \
../src/gcontablespecialaccountpage.c \
../src/gcontabletoolbar.c \
../src/gcontableuserpage.c \
../src/gcontablevoucherpage.c \
../src/gcontablewindow.c 

OBJS += \
./src/gcontableaccountpage.o \
./src/gcontableapplication.o \
./src/gcontablepage.o \
./src/gcontablespecialaccountpage.o \
./src/gcontabletoolbar.o \
./src/gcontableuserpage.o \
./src/gcontablevoucherpage.o \
./src/gcontablewindow.o 

C_DEPS += \
./src/gcontableaccountpage.d \
./src/gcontableapplication.d \
./src/gcontablepage.d \
./src/gcontablespecialaccountpage.d \
./src/gcontabletoolbar.d \
./src/gcontableuserpage.d \
./src/gcontablevoucherpage.d \
./src/gcontablewindow.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	clang -std=c11 -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/gio-unix-2.0 -I/usr/include/mirclient -I/usr/include/mircore -I/usr/include/mircookie -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/atk-1.0 -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I"/home/ramiro/git/gcontable/src" -O3 -g3 -Wall -c -fmessage-length=0 -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


