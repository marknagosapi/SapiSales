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
            printf("TESTING PRODUCT&USER FUNCTIONALITIES");
            printf("\n\n***********************************************************\n\n");
            break;
            case LAB3:
                printf("\n\n***********************************************************\n\n");
                printf("GENERATING RANDOM USERS");
                printf("\n\n***********************************************************\n\n");
            break;
        case LAB4:
            printf("\n\n***********************************************************\n\n");
            printf("TESTING USER_ARRAY&PRODUCT_ARRAY FUNCTIONALITIES");
            printf("\n\n***********************************************************\n\n");
            break;
        case LAB5:
            printf("\n\n***********************************************************\n\n");
            printf("TESTING PRODUCTSTACK FUNCTIONALITIES");
            printf("\n\n***********************************************************\n\n");
            break;
        case LAB8:
            printf("\n\n***********************************************************\n\n");
            printf("TESTING USER_QUEUE FUNCTIONALITIES");
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
    green2();
    if(type==USER){
        printf("[USER SUCCESSFULLY DELETED]\n");
    } else if(type == USER_QUEUE){
        printf("[USER_QUEUE SUCCESSFULLY DELETED]\n");
    } else {
        printf("[PRODUCT SUCCESSFULLY DELETED]\n");
    }
    reset2();
}

void successfulK(enum K type) {
    green2();
    if(type==OPERATION){
        printf("[SUCCESSFUL OPERATION]\n");
    }

    if(type==FILE_OPENING) {
        printf("[SUCCESSFUL FILE OPENING]\n");
    }

    if(type==MEMORY_ALLOCATING) {
        printf("[SUCCESSFUL MEMORY ALLOCATING]\n");
    }
    reset2();
}
