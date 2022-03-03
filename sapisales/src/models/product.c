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

void setProduct(Product *product, char *id, char *name, enum ProductType type, unsigned int amount) {
        strcpy(product->id,id);
        strcpy(product->name,name);
        product->type = type;
        product->amount = amount;
}
