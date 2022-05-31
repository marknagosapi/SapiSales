//
// Created by Mark Nago on 31.05.2022.
//

#include <user.h>
#include "product_hash.h"

void testHashFunctionalities(){
    //Declaring the Users
    Date* date1;
    createDate(&date1);
    setDate(date1,1920,12,31);

    Date* date2;
    createDate(&date2);
    setDate(date2,1920,3,12);

    User* user;
    createUser(&user);
    setUserData(user,"Micheal Smith", TEACHER, MALE, MATHEMATICS_INFORMATICS, date1);

    User* user2;
    createUser(&user2);
    setUserData(user2,"ANNE SMITH", TEACHER, FEMALE, MATHEMATICS_INFORMATICS, date2);

    Date* date3;
    createDate(&date3);
    setDate(date2,1920,3,12);

    User* user3;
    createUser(&user3);
    setUserData(user3,"Miky LICKy", TEACHER, MALE, MATHEMATICS_INFORMATICS, date1);

    Hash * hashTable;
    createHash(&hashTable,3);

    insertHash(hashTable,user);
    insertHash(hashTable,user2);
    insertHash(hashTable,user3);

    printf("\t\t||HASH TABLE||\n");
    printHashTable(hashTable);
    deleteFromHashTable(hashTable,1010);
    printf("After deleting the user with id of 1010 - >\n");
    printHashTable(hashTable);
    freeHashTable(&hashTable);
}