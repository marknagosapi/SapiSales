//
// Created by Mark Nago on 24.02.2022.
//


#include <stdio.h>
#include <stdlib.h>
#include "../headers/messages.h"

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