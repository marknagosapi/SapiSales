//
// Created by Mark Nago on 06.04.2022.
//

#ifndef SAPISALES_USER_QUEUE_H
#define SAPISALES_USER_QUEUE_H

#include "user.h"

typedef struct{
    int front;
    int rear;
    unsigned int size;
    User** users;

}UserQueue;

void createUserQueue(UserQueue **userQueue, unsigned int
maxSize);
bool queueIsEmpty(UserQueue *userQueue);
bool queueIsFull(UserQueue *userQueue);

void enqueue(UserQueue* userQueue,User *user);
void dequeue(UserQueue* userQueue);
User* findElementInQueue(UserQueue* userQueue, int userId);
void printQueue(UserQueue* userQueue, char*destination);
void deleteQueue(UserQueue** userQueue);
#endif //SAPISALES_USER_QUEUE_H
