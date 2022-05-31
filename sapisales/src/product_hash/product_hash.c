//
// Created by Mark Nago on 31.05.2022.
//

#include "user.h"
#include "product_hash.h"
#include <stdlib.h>
#include <messages.h>
#include <errors.h>

void createHash(Hash **hash, int capacity) {
    *hash = (Hash*) malloc(sizeof(Hash));
    if(!(*hash)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*hash)->table = (User**) malloc(capacity*sizeof(User*));
    if(!(*hash)->table){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    for(int i=0; i<capacity; i++){
        (*hash)->table[i] = (User*) malloc(capacity*sizeof(User));
        if(!(*hash)->table[i]){
            printErrorMessage(MEMORY_ALLOCATION);
        }
        (*hash)->table[i]->id = -1;
    }
    (*hash)->capacity = capacity;
    (*hash)->elements = 0;
}


void insertHash(Hash *hash, User* user) {
    int j, i=0;
    do{
        j = (user->id + i) % hash->capacity;
        if(hash->table[j]->id == -1){
            setUserData(hash->table[j], user->name, user->type, user->gender, user->specialization, &user->date);
            hash->table[j]->id = user->id;
            printf("\nUser with the id %i inserted\n", user->id);
            hash->elements++;
            return;
        }
        else{
            i++;
        }
    }
    while(i != hash->capacity);
    printf("\ntulcsordulas!\n");    //ha nem sikerult a beszuras
    return;
}

int searchHashTable(Hash *hash, int id) {
    int j, i=0;
    do{
        j = (id + i) % hash->capacity;
        if(hash->table[j]->id == id){
            return j;
        }
        else{
            i++;
        }
    }
    while((hash->table[j]->id != -1) && (i != hash->capacity));
    return -1;
}

void deleteFromHashTable(Hash *hash, int id) {
    int j, i=0;
    j = (id + i) % hash->capacity;
    if(hash->table[j]->id == -1){
        printf("\nThis id does not exist\n");
        return;
    }
    else{
        hash->table[j]->id = -1;
        hash->elements--;
        printf("\nUser with the id %i removed\n", id);
    }
}

void printHashTable(Hash *hash) {
    for(int i=0; i<hash->capacity; i++){
        if(hash->table[i]->id == -1){
            continue;
        }
        else{
            printUser(hash->table[i], "CON");
        }
    }
}

void freeHashTable(Hash **hash) {
    if((*hash)){
        for(int i=0; i<(*hash)->capacity; i++){
            free((*hash)->table[i]);
            freeMemory(USER);
        }
        free((*hash)->table);
        free(*hash);
        freeMemory(HASH);
    }
}

