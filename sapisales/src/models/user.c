//
// Created by Mark Nago on 24.02.2022.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "user.h"


int numberOfUsers = 0;

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

void setUserData(User* newUser,char* name, enum UserType type, enum Gender gender, enum Specialization specialization, Date* date){
    newUser -> id = ++numberOfUsers;
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
