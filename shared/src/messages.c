//
// Created by Mark Nago on 24.02.2022.
//


#include <stdio.h>
#include <stdlib.h>
#include "../headers/messages.h"

void red () {
    printf("\033[1;31m");
}

void reset () {
    printf("\033[0m");
}
void green(){
    printf("\033[0;32m");
}

void printDescriptionMessage(enum LabType exercise){
    switch(exercise){
        case LAB2:
            printf("\n\n***********************************************************\n\n");
            printf("DESCRIPTION");
            printf("\n\n***********************************************************\n\n");
            break;
        default:
            printf("Undefined description\n");
    }
}

void startMessage(){
    printf("KOD FUTTASA ELKEZDODOTT!\n");
}
void endMessage(){
    printf("KOD FUTTASA BEFEJEZODOTT!\n");
}

void freeMemory(enum MFT type) {
    green();
    if(type==USER){
        printf("[USER SUCCESSFULLY DELETED]\n");
    } else {
        printf("[PRODUCT SUCCESSFULLY DELETED\n");
    }
    reset();
}

void printErrorMessages(enum errorType type) {
    red();
    printf("[ERROR]");
    reset();
    if(type==FILE_OPENING){
        printf(" There was a problem opening the file!\n");
    }

    if(type==MEMORY_ALLOCATION){
        printf("There was a problem allocating the memory!\n");
    }
}
