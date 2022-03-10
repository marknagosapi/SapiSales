//
// Created by Mark Nago on 08.03.2022.
//

#include "lab4.h"
#include "user_array.h"


void testUserArrayFunctionalities(){

    UserArray *userArray;
    createUserArray(&userArray,MAX_USERS);

    printUsers(userArray);
    deleteUserArray(&userArray);

}
void testUserArray() {

    //Declaring the Users
    Date* date1;
    createDate(&date1);
    setDate(date1,1920,12,31);

    Date* date2;
    createDate(&date2);
    setDate(date2,1920,3,12);

    User* user;
    createUser(&user);
    setUserData(user,"Micheal Smith", TEACHER, MALE, MATHEMATICS_INFORMATICS, date1);
    //printUser(user);
    User* user2;
    createUser(&user2);
    setUserData(user2,"ANNE SMITH", TEACHER, FEMALE, MATHEMATICS_INFORMATICS, date2);
    //printUser(user2);

    //Declaring the userArray
    UserArray* userArray;
    int capacity = 10;
    createUserArray(&userArray,capacity);
    addNewUser(userArray,user);
    addNewUser(userArray,user2);

    for(int i=0;i<(userArray)->numberOfUsers;i++){
        printUser((userArray)->Users[i]);
    }
}

