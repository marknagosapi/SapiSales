//
// Created by Mark Nago on 05.05.2022.
//

#include "user_bst.h"

void create(UserTreeNode ** node) {
    (*node) = (UserTreeNode*)malloc(sizeof(UserTreeNode));
    if(!(*node)){
        printf("Sikertelen lefoglalas!\n");
    }
    createUser(&(*node)->info);
    (*node)->left = NULL;
    (*node)->right = NULL;
}

void insert(UserTreeNode ** node , User * user) {
    if((*node)==NULL){
        create(&(*node));

        setUserData((*node)->info,user->name,user->type,user->gender,user->specialization,&user->date);
    } else{
        if((*node)->info > user){
            insert(&((*node)->left),user);
        } else {
            insert(&((*node)->right),user);
        }
    }
}

bool search(UserTreeNode * node , User* value) {
    if(!node){
        return false;
    } else {
        if(value < node->info){
            search(node->left,value);
        } else{
            if(value > node->info){
                search(node->right,value);
            } else {
                return true;
            }
        }
    }
    return false;
}

void destroy(UserTreeNode ** node) {
    inorder(*node);
    free(node);
}

void inorder(UserTreeNode* node){
    if(node->left){
        inorder(node->left);
    }
    if(node->right){
        inorder(node->right);
    }
    if(node->info!=NULL) {


        deleteUser(&node->info);
        free(node);

    }
}

void inorderPrint(UserTreeNode * node , char * out) {
    if(node->left){
        inorderPrint(node->left,out);
    }
    if(node->info!=NULL) {
        printUser(node->info, out);
    }
    if(node->right){
        inorderPrint(node->right,out);
    }
}

void preoderPrint(UserTreeNode * node , char * out) {
    if(node->info!=NULL) {
        printUser(node->info, out);
    }
    if(node->left){
        preoderPrint(node->left,out);
    }

    if(node->right){
        preoderPrint(node->right,out);
    }
}

void postorderPrint(UserTreeNode * node , char * out) {

    if(node->left){
        postorderPrint(node->left,out);
    }

    if(node->right){
        postorderPrint(node->right,out);
    }

    if(node->info!=NULL) {
        printUser(node->info, out);
    }
}

UserTreeNode* delete(UserTreeNode * node, User* user) {

    if (node == NULL) {
        return node;
    }

    if (user < node->info) {
        node->left = delete(node->left, user);
    } else if (user > node->info) {
        node->right = delete(node->right, user);
    } else {
        if (node->left == NULL) {
            struct UserTreeNode *temp = node->right;
            free(node);
            return temp;
        } else if (node->right == NULL) {
            struct UserTreeNode *temp = node->left;
            free(node);
            return temp;
        }

        struct UserTreeNode *current = node;

        /* loop down to find the leftmost leaf */
        while (current && current->left != NULL) {
            current = current->left;
        }

        node->info = current->info;

        node->right = delete(node->right, current->info);
    }
    return node;
}

