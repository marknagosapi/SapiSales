#include <stdio.h>

#include "lab_manager.h"
#include "useful.h"
#include "user.h"
#include "product.h"

int main() {

    //Creating User
    User* user = createUser("Micheal Smith",TEACHER,MALE,MATHEMATICS_INFORMATICS,1980);
    printUser(user);

    //Creating the Product
    Product *product1 = createProduct("MS1","Apple",FRUIT,10);
    Product *product2 = createProduct("MS2","Book",SCHOOL,4);
    Product *product3 = createProduct("MS3", "Tomato", GROCERY,20);

    printProduct(product1);
    printProduct(product2);
    printProduct(product3);


    return 0;
}
