//
// Created by Mark Nago on 24.02.2022.
//


#include <stdio.h>
#include <stdlib.h>
#include "../headers/messages.h"

void red2 () {
    printf("\033[1;31m");
}

void reset2 () {
    printf("\033[0m");
}
void green2(){
    printf("\033[0;32m");
}

void printDescriptionMessage(enum LabType exercise){
    switch(exercise){
        case LAB2:
            printf("\n\n***********************************************************\n\n");
            printf("DESCRIPTION");
            printf("\n\n***********************************************************\n\n");
            break;
        case LAB5:
            printf("\n\n***********************************************************\n\n");
            printf("TESTING PRODUCTSTACK FUNCTIONALITIES");
            printf("\n\n***********************************************************\n\n");
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
    green2();
    if(type==USER){
        printf("[USER SUCCESSFULLY DELETED]\n");
    } else {
        printf("[PRODUCT SUCCESSFULLY DELETED\n");
    }
    reset2();
}
