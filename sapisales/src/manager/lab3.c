//
// Created by Mark Nago on 03.03.2022.
//

#include "user.h"

void testUserFunctionalities2(){
    Date* date1;
    createDate(&date1);
    setDate(date1,1920,12,31);

    Date* date2;
    createDate(&date2);
    setDate(date2,1920,3,12);

    User* user;
    createUser(&user);
    setUserData(user,"Micheal Smith", TEACHER, MALE, MATHEMATICS_INFORMATICS, date1);
    printUser(user);
    User* user2;
    createUser(&user2);
    setUserData(user2,"ANNE SMITH", TEACHER, FEMALE, MATHEMATICS_INFORMATICS, date2);
    printUser(user2);
}
