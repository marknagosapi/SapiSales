//
// Created by Mark Nago on 24.02.2022.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "user.h"


int numberOfUsers = 1000;

char* getUserType(enum UserType type){
    switch(type){
        case STUDENT:
            return "STUDENT";
            break;
        case TEACHER:
            return "Teacher";
        default:
            return "Undefined";
    }
}

char* getGender(enum Gender type){
    switch(type){
        case MALE:
            return "Male";
            break;
        case FEMALE:
            return "Female";
            break;
        default:
            return "Undefined";
    }
}
char* getSpecialization(enum Specialization type){
    switch(type) {
        case INFORMATICS:
            return "Informatics";
            break;
        case COMPUTER_SCIENCE:
            return "Computer Science";
            break;
        case AUTOMATION:
            return "Automation";
            break;
        case TELECOMMUNICATION:
            return "Telecommunication";
            break;
        case MATHEMATICS_INFORMATICS:
            return "Mathematics and Informatics";
            break;
        case ENGINEERING:
            return "Engineering";
        default:
            return "Undefined";

    }
}

bool isValidDate(Date date){
    int yy = date.year;
    int mm = date.month;
    int dd = date.day;

    //checks year
    if(yy>=1900 && yy<=9999)
    {
        //check month
        if(mm>=1 && mm<=12)
        {
            //check days
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                return true;
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                return true;
            else if((dd>=1 && dd<=28) && (mm==2))
                return true;
            else if(dd==29 && mm==2 && isLeapYear(yy))
                return true;
            else
               return false;
        }
        else
        {
            return false;
        }
    }
    else
    {
       return false;
    }
}

void createUser(User** user){
    *user = (User*)malloc(sizeof(User));

}

void createDate(Date** date){
    *date = (Date*)malloc(sizeof(Date));
}

void setDate(Date* date, unsigned int year,unsigned int month,unsigned int day){
    date->day = day;
    date->month = month;
    date->year = year;
}

void deleteUser(User** user){
    free(user);
}

void setUserData(User* newUser,char* name, enum UserType type, enum Gender gender, enum Specialization specialization, Date* date){
    newUser -> id = numberOfUsers;
    numberOfUsers+=10;
    newUser -> specialization = specialization;
    newUser -> date.year = date->year;
    newUser -> date.month = date->month;
    newUser -> date.day = date->day;
    newUser -> gender = gender;
    newUser -> type = type;
    strcpy(newUser->name, name);
};

void printUser(User *user){
    printf("%s details:\n"
           "\t - ID: %i\n"
           "\t - TYPE: %s\n"
           "\t - GENDER: %s\n"
           "\t - SPECIALIZATION: %s\n"
           "\t - BIRTH YEAR: %i/%i/%i\n",
           user->name,
           user->id,
           getUserType(user->type),
           getGender(user->gender),
           getSpecialization(user->specialization),
           user->date.year,
           user->date.month,
           user->date.day);
}

bool isLeapYear(int year) {
    // leap year if perfectly divisible by 400
    if (year % 400 == 0) {
       return true;
    }
        // not a leap year if divisible by 100
        // but not divisible by 400
    else if (year % 100 == 0) {
        return false;
    }
        // leap year if not divisible by 100
        // but divisible by 4
    else if (year % 4 == 0) {
        return true;
    }
        // all other years are not leap years
    else {
        return false;
    }
}
