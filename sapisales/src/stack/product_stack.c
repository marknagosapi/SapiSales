//
// Created by Mark Nago on 17.03.2022.
//

#include "../../headers/stack/product_stack.h"

void createProductStack(ProductStack** productStack, unsigned int cap) {
    *productStack = (ProductStack*)malloc(sizeof(ProductStack));
    (*productStack)->top = -1;
    (*productStack)->capacity = cap;
    (*productStack)->products = (Product**)malloc(cap*sizeof(Product*));
    for(int i=0;i<cap;i++){
        createProduct((*productStack)->products);
    }
}

void push(ProductStack* productStack, Product* product) {
    productStack->top++;
    strcpy(productStack->products[productStack->top]->name,product->name);
    productStack->products[productStack->top]->amount = product->amount;
    strcpy(productStack->products[productStack->top]->id,product->id);
    productStack->products[productStack->top]->creationDate = product->creationDate;
    productStack->products[productStack->top]->type = product->type;
}

void pop(ProductStack* productStack) {
    if (!isEmpty(productStack)) {
        deleteProduct(&productStack->products[productStack->top]);
        productStack->top--;
    }
}

Product* top(ProductStack* productStack) {
    if(!isEmpty(productStack)) {
        return (productStack->products[productStack->top]);
    }
    printErrorMessage(MISSING);
    return NULL;
}

bool isEmpty(ProductStack* productStack) {
    if(productStack->top==-1){
        return true;
    }
    return false;
}

bool isFull(ProductStack * productStack) {
   if(productStack->top >= productStack->capacity){
       return true;
   }
   return false;
}

void freeStack(ProductStack * productStack) {
    for(int i=0;i<productStack->top;i++){
        deleteProduct(&productStack->products[productStack->top]);
    }
    free(productStack);
}
