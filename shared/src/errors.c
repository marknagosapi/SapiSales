//
// Created by Mark Nago on 24.02.2022.
//

#include "errors.h"

void red () {
    printf("\033[1;31m");
}

void reset () {
    printf("\033[0m");
}
void green(){
    printf("\033[0;32m");
}

void printErrorMessage(enum ErrorType type) {
    red();
    printf("[ERROR]");
    reset();
    if(type==FILE_NOT_FOUND){
        printf(" There was a problem opening the file!\n");
    }

    if(type==MEMORY_ALLOCATION){
        printf("There was a problem allocating the memory!\n");
    }
}

