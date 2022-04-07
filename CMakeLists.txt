cmake_minimum_required(VERSION 3.21)
project(SapiSales C)

set(CMAKE_C_STANDARD 99)

add_executable(SapiSales sapisales/src/main.c sapisales/headers/manager/lab2.h sapisales/headers/manager/lab_manager.h sapisales/headers/models/product.h sapisales/headers/models/user.h sapisales/src/manager/lab2.c sapisales/src/manager/lab_manager.c sapisales/src/models/product.c sapisales/src/models/user.c shared/headers/errors.h shared/headers/messages.h shared/headers/useful.h shared/src/errors.c shared/src/messages.c sapisales/headers/manager/lab3.h sapisales/src/manager/lab3.c sapisales/headers/models/user_array.h sapisales/src/models/user_array.c shared/src/useful.c sapisales/headers/manager/lab4.h sapisales/src/manager/lab4.c sapisales/src/models/product_array.c sapisales/headers/models/product_array.h sapisales/src/manager/lab5.c sapisales/headers/manager/lab5.h sapisales/headers/stack/product_stack.h sapisales/src/stack/product_stack.c sapisales/headers/queue/user_queue.h sapisales/src/queue/user_queue.c sapisales/headers/manager/lab8.h sapisales/src/manager/lab8.c sapisales/headers/list/user_list.h sapisales/src/list/user_list.c sapisales/headers/manager/lab9.h sapisales/src/manager/lab9.c)
include_directories(
        sapisales/headers/manager
        sapisales/headers/models
        sapisales/headers/stack
        shared/headers
        sapisales/headers/queue
        sapisales/headers/list
)