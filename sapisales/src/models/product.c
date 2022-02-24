//
// Created by Mark Nago on 24.02.2022.
//

#include "product.h"

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

Product *createProduct(char* id, char* name, enum ProductType type, unsigned  int amount){
    Product * newProduct = malloc(sizeof(Product));
    strcpy(newProduct->id,id);
    strcpy(newProduct->name,name);
    newProduct->type = type;
    newProduct->amount = amount;
    newProduct->creationDate = time(NULL);
    return newProduct;
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