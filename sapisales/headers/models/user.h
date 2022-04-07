//
// Created by Mark Nago on 24.02.2022.
//

#ifndef SAPISALES_USER_H
#define SAPISALES_USER_H

#include "errors.h"
#include "messages.h"
#include "useful.h"

enum UserType{

    TEACHER,
    STUDENT

};

enum Gender{
    MALE,
    FEMALE
};

enum Specialization{
    INFORMATICS,
    COMPUTER_SCIENCE,
    AUTOMATION,
    TELECOMMUNICATION,
    MATHEMATICS_INFORMATICS,
    ENGINEERING
};

typedef struct userDate{
    unsigned int year;
    unsigned int month;
    unsigned int day;
}Date;


typedef struct User{
    unsigned int id;
    char name[51];
    enum UserType type;
    enum Gender gender;
    Date date;
    enum Specialization specialization;

}User;

void createDate(Date** date);

void deleteUser(User**);

bool isValidDate(Date date);
bool isLeapYear(int year);

void setDate(Date* date, unsigned int year,unsigned int month,unsigned int day);


char* getUserType(enum UserType type);
char* getGender(enum Gender type);
char* getSpecialization(enum Specialization type);

void createUser(User** user);

void setUserData(User* user,char* name,
        enum UserType type,
        enum Gender gender,
        enum Specialization stearate,
        Date* date);

void printUser(User* user,char*);

#endif //SAPISALES_USER_H
