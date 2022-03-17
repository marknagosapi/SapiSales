//
// Created by Mark Nago on 24.02.2022.
//

#include "product.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static int numOfProducts = 0;

char* getProductType(enum ProductType type){
    switch(type){
        case GROCERY:
            return "Grocery";
            break;
        case FRUIT:
            return "Fruit";
            break;
        case SCHOOL:
            return "School";
            break;
        case OBJECT:
            return "Object";
            break;
        default:
            return "Undefined";
    }
}

void createProduct(Product** product){
    *product = (Product*)malloc(sizeof(Product));
}



void printProduct(Product * product){
    printf("%s details:\n"
           "\t - ID: %s\n"
           "\t - TYPE: %s\n"
           "\t - AMOUNT: %u\n"
           "\t - CREATION DATE: %ld\n",
           product -> name,
           product -> id,
           getProductType(product->type),
           product->amount,
           product->creationDate
    );
}

void setProduct(Product *product, char *name, enum ProductType type, unsigned int amount) {
        char p[20];
        strcpy(p,"product");
        char a[10];
        //itoa(numOfProducts,a,10);
        strcpy(product->id,p);
        strcpy(product->name,name);
        product->type = type;
        product->amount = amount;
}

void deleteProduct(Product ** product) {
    free(product);
}
