//
// Created by Mark Nago on 03.03.2022.
//

#include <stdlib.h>
#include <stdio.h>
#include "user.h"
#include "user_array.h"


void createUserArray(UserArray **userArray, int capacity) {
    *userArray = (UserArray*)malloc(capacity*sizeof(userArray));
}

void deleteUserArray(UserArray **userArray) {
    free(userArray);
}

bool addNewUser(UserArray *userArray, User *newUser) {
    if(userArray->capacity < 10) {

    }
    return 0;
}

User *getUserAtPosition(UserArray *userArray, int position) {
    return NULL;
}
