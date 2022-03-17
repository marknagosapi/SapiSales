//
// Created by Mark Nago on 17.03.2022.
//

#include "../../headers/stack/product_stack.h"

void createProductStack(ProductStack** productStack, unsigned int cap) {
    *productStack = (ProductStack*)malloc(sizeof(ProductStack));
    (*productStack)->top = -1;
    (*productStack)->capacity = cap;
}

