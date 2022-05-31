//
// Created by Mark Nago on 24.02.2022.
//

#ifndef SAPISALES_MESSAGES_H
#define SAPISALES_MESSAGES_H

enum LabType{
    LAB2,
    LAB3,
    LAB4,
    LAB5,
    LAB8,
    LAB9,
    LAB10,
    LAB11
};
enum MFT{
    PRODUCT,
    USER,
    USER_QUEUE,
    LIST,
    HASH
};

enum K{
    OPERATION,
    MEMORY_ALLOCATING,
    FILE_OPENING,
};

void freeMemory(enum MFT);
void printDescriptionMessage(enum LabType);
void startMessage();
void endMessage();
void successfulK(enum K);

#endif //SAPISALES_MESSAGES_H
