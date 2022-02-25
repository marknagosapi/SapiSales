//
// Created by Mark Nago on 24.02.2022.
//

#include "user.h"
#include "product.h"

//Creating User

    void testUserFunctionalities(){
        User *user = createUser("Micheal Smith", TEACHER, MALE, MATHEMATICS_INFORMATICS, 1980);
        printUser(user);
    }

    void testProductFunctionalities(){
        Product *product1 = createProduct("MS1", "Apple", FRUIT, 10);
        Product *product2 = createProduct("MS2", "Book", SCHOOL, 4);
        Product *product3 = createProduct("MS3", "Tomato", GROCERY, 20);

        printProduct(product1);
        printProduct(product2);
        printProduct(product3);
    }
