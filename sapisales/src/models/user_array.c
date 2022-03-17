//
// Created by Mark Nago on 03.03.2022.
//

#include <stdlib.h>
#include <stdio.h>
#include "user.h"
#include "user_array.h"
#include "product_array.h"
#include <string.h>


void createUserArray(UserArray **userArray, int capacity) {
    *userArray = (UserArray*)malloc(sizeof(userArray));
    (*userArray)->Users = (User**)malloc(sizeof(User*));
    (*userArray)->numberOfUsers = 0;
    (*userArray)->capacity = capacity;
}

void deleteUserArray(UserArray **userArray) {
    for(int i=0;i<(*userArray)->numberOfUsers;i++) {
        deleteUser(&(*userArray)->Users[i]);
    }
    free((*userArray)->Users);
    free(*userArray);
    freeMemory(USER);
}

bool addNewUser(UserArray *userArray, User *newUser) {
    //setUserData(userArray->Users[userArray->numberOfUsers],newUser->date,newUser->name,newUser->type,newUser->gender,newUser->specialization);

    if(userArray->numberOfUsers<userArray->capacity) {
        Date* date2;
        createDate(&date2);
        setDate(date2,newUser->date.year,newUser->date.month,newUser->date.day);
        createUser(&userArray->Users[userArray->numberOfUsers]);
        setUserData(userArray->Users[userArray->numberOfUsers],newUser->name,newUser->type,newUser->gender,newUser->specialization,date2);
      //userArray->Users[userArray->numberOfUsers] = newUser;
      /*
        userArray->Users[userArray->numberOfUsers]->date.day= newUser->date.day;
        userArray->Users[userArray->numberOfUsers]->date.year= newUser->date.year;
        userArray->Users[userArray->numberOfUsers]->date.month= newUser->date.month;
        userArray->Users[userArray->numberOfUsers]->specialization = newUser->specialization;
        userArray->Users[userArray->numberOfUsers]->gender = newUser->gender;
        userArray->Users[userArray->numberOfUsers]->type = newUser->type;
        strcpy(userArray->Users[userArray->numberOfUsers]->name,newUser->name);
        userArray->Users[userArray->numberOfUsers]->id = newUser->id;
        */
        userArray->numberOfUsers++;
        return true;
    } else {
        return false;
    }
}

User *getUserAtPosition(UserArray *userArray, int position) {
    return userArray->Users[position];
}

void printUsers(UserArray *userArray) {
    for(int i=0;i<userArray->numberOfUsers;i++){
        printUser(userArray->Users[i]);
        printf("\n");
    }
}

bool readUsers(UserArray* userArray, char * fileName) {
    FILE* f;
    char path[20] = "files/";
    strcat(path,fileName);
    f = fopen(path,'r');
    if(!f){
        printErrorMessage(FILE_NOT_FOUND);
    }
    int numOfUsers;
    fscanf(f,"%d",&numOfUsers);

    int temp = numOfUsers;
    char name[20];
    int enum1,enum2,enum3;
    int nrOfProducts;
    int yy,mm,dd;
    char productName[20];
    int enum4;
    int amount;
    while(temp>0){
        fscanf(f,"%s",name);
        fscanf(f,"%d",&enum1);
        fscanf(f,"%d",&enum2);
        fscanf(f,"%d",&enum3);
        fscanf(f,"%d",&yy);
        fscanf(f,"%d",&mm);
        fscanf(f,"%d",&dd);
        fscanf(f,"%d",&nrOfProducts);
        Date* date;
        createDate(&date);
        setDate(date,yy,mm,dd);
        setUserData(userArray->Users[userArray->numberOfUsers],name,enum1,enum2,enum3,date);
        while(nrOfProducts>0){
            fscanf(f,"%s",productName);
            fscanf(f,'%d',&enum4);
            fscanf(f,'%d',&amount);
            ProductArray * productArray;
            createProductArray(&productArray,MAX_PROCUTS);
            setProduct(productArray->products[productArray->numberOfProducts],productName,enum4,amount);
        }
        temp--;
    }
}
