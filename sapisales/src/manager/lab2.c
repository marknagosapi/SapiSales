//
// Created by Mark Nago on 24.02.2022.
//

#include "user.h"
#include "product.h"

//Creating User

    void testUserFunctionalities(){
        Date* date1;
        createDate(&date1);
        setDate(date1,1920,12,31);

        Date* date2;
        createDate(&date2);
        setDate(date2,1920,3,12);

        User* user;
        createUser(&user);
        setUserData(user,"Micheal Smith", TEACHER, MALE, MATHEMATICS_INFORMATICS, date1);
        printUser(user,"CON");
        User* user2;
        createUser(&user2);
        setUserData(user2,"ANNE SMITH", TEACHER, FEMALE, MATHEMATICS_INFORMATICS, date2);
        printUser(user2,"CON");
    }

    void testProductFunctionalities(){
        Product *product1;
        createProduct(&product1);

        Product  *product2;
        createProduct(&product2);
        Product  *product3;
        createProduct(&product3);

        setProduct(product2,"Book", SCHOOL, 20);
        setProduct(product3, "Tomato", GROCERY, 20);
        setProduct(product1,"Car",OBJECT,30);


        printProduct(product1);
        printProduct(product2);
        printProduct(product3);
    }
