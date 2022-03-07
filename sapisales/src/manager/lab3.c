//
// Created by Mark Nago on 03.03.2022.
//

#include "user.h"
#include "lab3.h"
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void testDate(int n){
    srand(time(NULL));
    Date* date;
    createDate(&date);
    setDate(date,2020,2,29);
    printf("%d\n", isValidDate(*date));
    int yy,mm,dd;
    for(int i=0;i<n;i++){
        yy = rand()%(2000-1850+1)+1850;
        mm = rand()%(13-1+1)+1;
        dd = rand()%(31-1+1)+1;
        createDate(&date);
        setDate(date,yy,mm,dd);
        char* temp = isValidDate(*date)?"valid":"invalid";
        printf("The %d/%d/%d is: %s\n",yy,mm,dd,temp);
    }
}

void testUserFunctionalities2(){


    Date* date1;
    createDate(&date1);
    setDate(date1,1920,12,31);

    Date* date2;
    createDate(&date2);
    setDate(date2,1920,3,12);

    User* user;
    createUser(&user);
    setUserData(user,"Micheal Smith", TEACHER, MALE, MATHEMATICS_INFORMATICS, date1);
    printUser(user);
    User* user2;
    createUser(&user2);
    setUserData(user2,"ANNE SMITH", TEACHER, FEMALE, MATHEMATICS_INFORMATICS, date2);
    printUser(user2);

}

void randomGeneratedUsers() {
    srand(time(NULL));
    User* user;
    printf("How many users you want to generate: ");
    int n;
    scanf("%d", &n);
    user = (User*)malloc(n*sizeof(User));

    int counter = 0;
    char*a = (char*)malloc(20*sizeof(char));
    int enum1;
    int enum2;
    int enum3;
    int yy,mm,dd;
    Date* date;
    date = (Date*)malloc(n*sizeof(Date));
    while(1){
        if(counter==n){
            break;
        }

        memset(a,0,strlen(a));
        int size = rand()%(19-5+1)+5;
        strcpy(a, randomString(size));

        enum1 = rand()%(2);
        enum2 = rand()%(2);
        enum3 = rand()%(6);

        yy = rand()%(2023-1950+1)+1950;
        mm = rand()%(13+1)+1;
        dd = rand()%(31+1)+1;

        setDate(&date[counter],yy,mm,dd);
        while(!isValidDate(date[counter])){
            yy = rand()%(2023-1950+1)+1950;
            mm = rand()%(13+1)+1;
            dd = rand()%(31+1)+1;

            setDate(&date[counter],yy,mm,dd);
        }
        setUserData(&user[counter],a,enum1,enum2,enum3,&date[counter]);

        counter++;
    }
    for(int i=0;i<counter;i++){
        printUser(&user[i]);
    }
}
