//
// Created by Mark Nago on 05.05.2022.
//

#include "user_bst.h"

void testUserBSTFunctionalities(){

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

    Date* date3;
    createDate(&date3);
    setDate(date2,1920,3,12);

    User* user3;
    createUser(&user3);
    setUserData(user3,"Miky LICKy", TEACHER, MALE, MATHEMATICS_INFORMATICS, date1);

    //Creating the Data Structure (BST)

    UserTreeNode* node = NULL;
    create(&node);
    insert(&node,user);
    insert(&node,user2);
    insert(&node,user3);

    printf("PREORDER\n");
    preoderPrint(node,"out");
    printf("POSTORDER\n");
    postorderPrint(node,"out");
    printf("INORDER\n");
    inorderPrint(node,"out");
    delete(node,user3);
    destroy(&node);
}