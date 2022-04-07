//
// Created by Mark Nago on 10.03.2022.
//

#include "product_array.h"
#include "messages.h"

void createProductArray(ProductArray **productArray, int capacity) {
    *productArray = (ProductArray*)malloc(sizeof(ProductArray));
    (*productArray)->products = (Product**)malloc(capacity*sizeof(Product));
    (*productArray)->capacity = capacity;
    (*productArray)->numberOfProducts = 0;
}

void deleteProductArray(ProductArray **productArray) {
    for(int i=0;i<(*productArray)->numberOfProducts;i++) {
        deleteProduct(&(*productArray)->products[i]);
    }

    free((*productArray)->products);
    free(*productArray);
    freeMemory(PRODUCT);
}

bool addNewProduct(ProductArray * productArray, Product* product, int position){
    if(productArray->capacity < productArray->numberOfProducts){
        productArray->products[position]->type = product->type;
        strcpy(productArray->products[position]->name,product->name);
        productArray->products[position]->amount = product->amount;
        productArray->products[position]->creationDate = product->creationDate;
        strcpy(productArray->products[position]->id,product->id);
        productArray->numberOfProducts++;
    }
    return false;
}
