//
// Created by Mark Nago on 24.02.2022.
//

#ifndef SAPISALES_ERRORS_H
#define SAPISALES_ERRORS_H

#include <stdlib.h>
#include <stdio.h>

enum ErrorType{
    MEMORY_ALLOCATION,
    FILE_NOT_FOUND,
    NULL_POINTER_EXCEPTION,
};

void printErrorMessage(enum ErrorType);

#endif //SAPISALES_ERRORS_H
