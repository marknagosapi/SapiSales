//
// Created by Mark Nago on 05.05.2022.
//

#ifndef SAPISALES_USER_BST_H
#define SAPISALES_USER_BST_H

#include "user.h"

typedef struct UserTreeNode
{
    User* info;
    struct UserTreeNode *left, *right;
} UserTreeNode;

void create(UserTreeNode**);
void insert(UserTreeNode**, User*);
bool search(UserTreeNode*, User*);
void inorderPrint(UserTreeNode*,char*);
void preoderPrint(UserTreeNode*,char*);
void postorderPrint(UserTreeNode*, char*);

User* minimum(UserTreeNode*);
User* maximum(UserTreeNode*);

UserTreeNode * delete(UserTreeNode*,User*);
void inorder(UserTreeNode* node);

void destroy(UserTreeNode**);



#endif //SAPISALES_USER_BST_H
