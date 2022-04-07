//
// Created by Mark Nago on 24.02.2022.
//

#include "lab_manager.h"

void lab2(){
    startMessage();
    printDescriptionMessage(LAB2);
    testUserFunctionalities();
    testProductFunctionalities();
    endMessage();
}

void lab3(){
    printDescriptionMessage(LAB3);
    startMessage();
    //testUserFunctionalities2();
    //randomGeneratedUsers();
    // n - The number of generated dates, it's like a constant!
    //int n = 100;
    //testDate(n);
    randomGeneratedUsers();
    endMessage();
}

void lab4(){
    printDescriptionMessage(LAB4);
    //testUserArray();
    testUserArrayFunctionalities();
}

void lab5(){

    printDescriptionMessage(LAB5);
    testProductStackFunctionalities();
}

void lab8(){
    printDescriptionMessage(LAB8);
    testUserQueueFunctionalities();
}

void lab9(){
    printDescriptionMessage(LAB9);
    testUserListFunctionalities();
}