//
// Created by Mark Nago on 10.03.2022.
//

#include "product.h"

#ifndef SAPISALES_PRODUCT_ARRAY_H
#define SAPISALES_PRODUCT_ARRAY_H

#endif //SAPISALES_PRODUCT_ARRAY_H

typedef struct{
    Product** products;
    int capacity;
    int numberOfProducts;
}ProductArray;

void createProductArray(ProductArray ** productArray, int capacity);
void deleteProductArray(ProductArray ** productArray);
bool addNewProduct(ProductArray * productArray, Product* product, int position);
