//
// Created by Mark Nago on 28.04.2022.
//

#ifndef SAPISALES_USER_LIST_H
#define SAPISALES_USER_LIST_H

#include <user.h>

typedef struct UserNode{
    User* userValue;
    struct UserNode* next;
}UserNode;


void createUserNode(UserNode** userNode, User* userValue);
void printUserList(UserNode* userNode, char* destination);
User * findElementInList(UserNode* userNode, int userId);
void insertFirst(UserNode** userNode, User* userValue);
void insertLast(UserNode** userNode, User* userValue);
int removeFirst(UserNode** userNode);
int removeLast(UserNode* userNode);
void deleteUserList(UserNode** userNode);

#endif //SAPISALES_USER_LIST_H
