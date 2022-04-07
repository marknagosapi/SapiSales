//
// Created by Mark Nago on 06.04.2022.
//

#include "lab8.h"

void testUserQueueFunctionalities() {

    UserQueue * userQueue;

    createUserQueue(&userQueue,MAX_USERS);

    //Making some users
    //USER 1
    Date* date1;
    createDate(&date1);
    setDate(date1,1920,12,31);


    User* user;
    createUser(&user);
    setUserData(user,"Micheal Smith", TEACHER, MALE, MATHEMATICS_INFORMATICS, date1);

    //USER 2
    Date* date2;
    createDate(&date2);
    setDate(date2,1920,3,12);

    User* user2;
    createUser(&user2);
    setUserData(user2,"ANNE SMITH", TEACHER, FEMALE, MATHEMATICS_INFORMATICS, date2);

    enqueue(userQueue,user);
    enqueue(userQueue,user2);

    printQueue(userQueue,"CON");
    dequeue(userQueue);
    printQueue(userQueue,"CON");
    dequeue(userQueue);

    printf("%s\n",findElementInQueue(userQueue,1010)->name);
    printQueue(userQueue,"CON");
    dequeue(userQueue);

    deleteQueue(&userQueue);

    //printUser(userQueue->users[1]);
}

