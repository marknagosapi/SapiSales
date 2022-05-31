//
// Created by Mark Nago on 31.05.2022.
//

#ifndef SAPISALES_PRODUCT_HASH_H
#define SAPISALES_PRODUCT_HASH_H

typedef struct{

    User** table;
    int capacity;
    int elements;

}Hash;

#include "user.h"

void createHash(Hash **hash, int capacity);
void insertHash(Hash *hash, User* user);
int searchHashTable(Hash *hash, int id);
void deleteFromHashTable(Hash *hash, int id);
void printHashTable(Hash *hash);
void freeHashTable(Hash **hash);

#endif //SAPISALES_PRODUCT_HASH_H
