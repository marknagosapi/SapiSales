cmake_minimum_required(VERSION 3.21)
project(SapiSales C)

set(CMAKE_C_STANDARD 99)

add_executable(SapiSales sapisales/src/main.c sapisales/headers/manager/lab2.h sapisales/headers/manager/lab_manager.h sapisales/headers/models/product.h sapisales/headers/models/user.h sapisales/src/manager/lab2.c sapisales/src/manager/lab_manager.c sapisales/src/models/product.c sapisales/src/models/user.c shared/headers/errors.h shared/headers/messages.h shared/headers/useful.h shared/src/errors.c shared/src/messages.c)
include_directories(
        sapisales/headers/manager
        sapisales/headers/models

        shared/headers
)