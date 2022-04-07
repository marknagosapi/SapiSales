//
// Created by Mark Nago on 17.03.2022.
//

#include "lab5.h"

void testProductStackFunctionalities() {
    ProductStack * productStack;


    //Creating Products
    Product *product1;
    createProduct(&product1);

    Product  *product2;
    createProduct(&product2);
    Product  *product3;
    createProduct(&product3);

    setProduct(product2,"Book", SCHOOL, 20);
    setProduct(product3, "Tomato", GROCERY, 20);
    setProduct(product1,"Car",OBJECT,30);

    createProductStack(&productStack,STACK_CAPACITY);

    int choice,i=1;

    while(i){
        printf("\n\n1.Push Operation\n");
        printf("2.Pop Operation\n");
        printf("3.Top Operation\n");
        printf("4.isEmpty Operation\n");
        printf("5.isFull Operation\n");
        printf("6.Exit\n");
        scanf("%d",&choice);

        switch(choice){
            case 1: push(productStack,product1); break;
            case 2: pop(productStack); break;
            case 3:
                if(top(productStack)==0){
                    break;
                }
                printProduct(top(productStack)); break;
            case 4: if(!isEmpty(productStack)) {
                    printf("The stack is not empty!\n");
                }else{
                    printf("The stack is empty!\n");
            } break;
            case 5:
                if(!isFull(productStack)) {
                    printf("The stack is not full!\n");
                }else {
                    printf("The stack is full!\n");
                } break;
            case 6: i = 0; break;
            default: "Invalid choice";
        }
    }
}
