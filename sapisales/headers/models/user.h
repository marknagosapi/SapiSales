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

typedef struct User{
    unsigned  int id;
    char name[51];
    enum UserType type;
    enum Gender gender;
    unsigned int birthYear;
    enum Specialization specialization;

}User;

char* getUserType(enum UserType type);
char* getGender(enum Gender type);
char* getSpecialization(enum Specialization type);

User* createUser(
        char* name,
        enum UserType type,
        enum Gender gender,
        enum Specialization specialization,
        unsigned int birthYear
        );

void setUserData(User* user,char* name,
        enum UserType type,
        enum Gender gender,
        enum Specialization stearate,
        int birthYear);

void printUser(User* user);

#endif //SAPISALES_USER_H
