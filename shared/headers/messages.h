//
// Created by Mark Nago on 24.02.2022.
//

#ifndef SAPISALES_MESSAGES_H
#define SAPISALES_MESSAGES_H

enum LabType{
    LAB2,
    LAB3,
    LAB4,
};

enum errorType{
    FILE_OPENING,
    MEMORY_ALLOCATION,

};

enum MFT{
    PRODUCT,
    USER
};

void freeMemory(enum MFT);

void printErrorMessages(enum errorType);
void printDescriptionMessage(enum LabType);
void startMessage();
void endMessage();

#endif //SAPISALES_MESSAGES_H
