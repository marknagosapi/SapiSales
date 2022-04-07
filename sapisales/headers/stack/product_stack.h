//
// Created by Mark Nago on 17.03.2022.
//

#ifndef SAPISALES_PRODUCT_STACK_H
#define SAPISALES_PRODUCT_STACK_H

#include "product.h"

typedef struct {
    unsigned int capacity;
    int top;
    Product ** products;
}ProductStack;

void createProductStack(ProductStack**, unsigned int);
void push(ProductStack*, Product*);
void pop(ProductStack*);
Product* top(ProductStack*);
bool isEmpty(ProductStack*);
bool isFull(ProductStack*);
void freeStack(ProductStack*);

#endif //SAPISALES_PRODUCT_STACK_H
