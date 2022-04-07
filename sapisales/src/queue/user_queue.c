//
// Created by Mark Nago on 06.04.2022.
//

#include <string.h>
#include <stdio.h>
#include "user_queue.h"


void createUserQueue(UserQueue **userQueue, unsigned int maxSize) {
    *userQueue = (UserQueue*)malloc(sizeof(UserQueue));
    (*userQueue)->size = maxSize;
    (*userQueue)->front = 0;
    (*userQueue)->rear = 0;
    (*userQueue)->users = (User**)malloc(maxSize*sizeof(User*));
}

bool queueIsEmpty(UserQueue *userQueue) {
    if(userQueue->front == userQueue->rear){
        return true;
    }
    return false;
}

bool queueIsFull(UserQueue *userQueue) {
    if(userQueue->size <= userQueue->rear){
        return true;
    }
    return false;
}

void enqueue(UserQueue *userQueue, User *user) {

    if(userQueue->front >= userQueue->size/2){
        userQueue->front = 0;
    }

    if(!queueIsFull(userQueue)) {

        createUser(&userQueue->users[userQueue->rear]);
        userQueue->users[userQueue->rear]->date.day = user->date.day;
        userQueue->users[userQueue->rear]->date.month = user->date.month;
        userQueue->users[userQueue->rear]->date.year = user->date.year;
        userQueue->users[userQueue->rear]->gender = user->gender;
        strcpy(userQueue->users[userQueue->rear]->name, user->name);
        userQueue->users[userQueue->rear]->type = user->type;
        userQueue->users[userQueue->rear]->id = user->id;
        userQueue->users[userQueue->rear]->specialization = user->specialization;
        userQueue->rear++;
        //userQueue->front++;

    } else {
        printErrorMessage(NOT_ENOUGH_SPACE);
    }
}

void dequeue(UserQueue *userQueue) {

    if (!queueIsEmpty(userQueue)) {
        //deleteUser(&userQueue->users[userQueue->front]);
        userQueue->front++;
    } else {
        printErrorMessage(IS_EMPTY);
    }
}

void printQueue(UserQueue* userQueue, char*destination){
    if(strcmp(destination,"CON")==0) {
        printf("******************************************\n");
        printf("\t\t\t THE USER QUEUE \n");
        if (!queueIsEmpty(userQueue)) {
            for (int i = userQueue->front; i < userQueue->rear; i++) {
                printUser(userQueue->users[i], destination);
            }
        }
        printf("******************************************\n");
    } else {
//        freopen(destination,"w",stdout);
//        freopen("CON","w",stdout);
    }
}


void deleteQueue(UserQueue **userQueue) {

        for (int i = 0; i < (*userQueue)->size; i++) {
            deleteUser(&(*userQueue)->users[i]);
        }

        freeMemory(USER_QUEUE);
        free(*userQueue);
    
}

User* findElementInQueue(UserQueue *userQueue, int userId) {
    for(int i=0;i<userQueue->rear;i++){
        if(userQueue->users[i]->id == userId){
            return userQueue->users[i];
        }
    }
    return NULL;
}
