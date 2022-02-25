//
// Created by Mark Nago on 24.02.2022.
//

#ifndef SAPISALES_PRODUCT_H
#define SAPISALES_PRODUCT_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "useful.h"
#include "errors.h"
#include "messages.h"

enum ProductType{
    GROCERY,
    FRUIT,
    SCHOOL,
    OBJECT
};

typedef struct{
    char id[10];
    char name[20];
    enum ProductType type;
    unsigned int amount;
    time_t creationDate;
}Product;

char* getProductType(enum ProductType type);

Product * createProduct(
        char id[10],
        char name[20],
        enum ProductType type,
        unsigned int amount
        );
void printProduct(Product*);
#endif //SAPISALES_PRODUCT_H
