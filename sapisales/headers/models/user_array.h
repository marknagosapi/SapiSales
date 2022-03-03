//
// Created by Mark Nago on 03.03.2022.
//

#ifndef SAPISALES_USER_ARRAY_H
#define SAPISALES_USER_ARRAY_H

#include <stdbool.h>
#include "user.h"

typedef struct{
    User** Users;
    int capacity;
    int numberOfUsers;
}UserArray;

void createUserArray(UserArray** userArray, int capacity);
void deleteUserArray(UserArray** userArray);
bool addNewUser(UserArray* userArray, User* newUser);
User* getUserAtPosition(UserArray* userArray, int position);


#endif //SAPISALES_USER_ARRAY_H
