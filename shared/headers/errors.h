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
    MISSING,
    UNSUCCESSFUL_OPERATION,
    NOT_ENOUGH_SPACE,
    IS_EMPTY
};

void printErrorMessage(enum ErrorType);

#endif //SAPISALES_ERRORS_H
