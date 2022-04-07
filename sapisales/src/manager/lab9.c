//
// Created by Mark Nago on 28.04.2022.
//

#include <user_list.h>
void testUserListFunctionalities(){

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

    User* user2;
    createUser(&user2);
    setUserData(user2,"ANNE SMITH", TEACHER, FEMALE, MATHEMATICS_INFORMATICS, date2);

    // Declaring the User List
    UserNode* userNode;
    createUserNode(&userNode,user);
    insertFirst(&userNode,user);
    insertFirst(&userNode,user2);


    printUserList(userNode,"CON");

    removeFirst(&userNode);
    printUserList(userNode,"CON");
    printf("\t\t\t || SEARCH FOR AN ELEMENT IN LIST ||\n");
    if(findElementInList(userNode,1030)==NULL){
        printf("No such user!\n");
    } else {
    printUser(findElementInList(userNode,1030),"CON");
        }

    deleteUserList(&userNode);

}
