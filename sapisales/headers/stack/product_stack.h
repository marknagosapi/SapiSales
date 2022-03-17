//
// Created by Mark Nago on 17.03.2022.
//

#ifndef SAPISALES_PRODUCT_STACK_H
#define SAPISALES_PRODUCT_STACK_H

#include "product.h"

typedef struct {
    unsigned int capacity;
    int top;
    Product** products;
}ProductStack;

void createProductStack();
void push();
void pop();
Product top();
bool isEmpty();
bool isFull();
void freeStack();

#endif //SAPISALES_PRODUCT_STACK_H
