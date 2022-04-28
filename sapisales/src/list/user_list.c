//
// Created by Mark Nago on 28.04.2022.
//


#include <user_list.h>
#include <user.h>

void createUserNode(UserNode** userNode, User* userValue){
    *userNode = (UserNode*) malloc(sizeof (UserNode));
    if(!(*userNode)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*userNode)->next = NULL;
    createUser(&(*userNode)->userValue);
    Date* date;
    createDate(&date);
    setDate(date,userValue->date.year,userValue->date.month,userValue->date.day);
    setUserData((*userNode)->userValue, userValue->name, userValue->type, userValue->gender, userValue->specialization,date);

}

void printUserList(UserNode* userNode, char* destination){
    printf("\t\t\t || LIST ELEMENTS ||\n");
    UserNode *p = userNode;
    while (p->next != NULL){
        printUser(p->userValue,"CON");
        p = p->next;
    }
    printf("\n");
}

User * findElementInList(UserNode* userNode, int userId){
    if(userNode != NULL){
        UserNode *p = userNode;
        while (p != NULL){
            if(p->userValue->id == userId){
                return p->userValue;
            }
            p = p->next;
        }
    }
    User* user;
    createUser(&user);
    user = NULL;
    return user;
}

void insertFirst(UserNode** userNode, User* userValue){
    UserNode* newUserNode;
    createUserNode(&newUserNode, userValue);
    newUserNode->next = *userNode;
    *userNode = newUserNode;
}

void insertLast(UserNode** userNode, User* userValue){
    UserNode* newUserNode;
    createUserNode(&newUserNode, userValue);
    newUserNode->next = NULL;
    if(*userNode == NULL){
        *userNode = newUserNode;
    }
    else{
        UserNode* p = *userNode;
        while (p->next != NULL){
            p = p->next;
        }
        p->next = newUserNode;
    }
}

int removeFirst(UserNode** userNode){
    if(*userNode != NULL){
        UserNode* p = *userNode;
        *userNode = (*userNode)->next;
        return p->userValue;
    } else{
        return NULL;
    }
}

int removeLast(UserNode* userNode){
    if(userNode != NULL){
        UserNode* p = userNode;
        while (p->next->next != NULL){
            p = p->next;
        }
        UserNode* q = p->next;
        p->next = NULL;
        free(q);
        return q->userValue;
    }
    return NULL;
}

void insertInNthPlace(UserNode* userNode, User* userValue, int pos){
    UserNode * p;
    createUserNode(&p,userValue);
    p->userValue = userValue;
    if(userNode==NULL || pos==1){
        p->next = userNode;
        userNode->next = p;

    } else {
        UserNode* q = userNode;
        int i = 2;
        while(q->next!=NULL && (i<pos)){q= q->next;
            i++;
        }
        p->next = q->next;
        q->next = p;
    }
}

void deleteUserList(UserNode** userNode){
    if(*userNode != NULL){
        UserNode* p = *userNode;
        while (*userNode != NULL){
            p = *userNode;
            *userNode = (*userNode)->next;
            free(p);
            freeMemory(USER);
        }
        freeMemory(LIST);
    }
}
