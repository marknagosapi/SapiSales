//
// Created by Mark Nago on 03.03.2022.
//


#include <opencl-c-base.h>
#include <math.h>
#include <ranlib.h>
#include <time.h>
#include<stdlib.h>
#include <stdio.h>
#include <string.h>

char *rand_string(char *str, size_t size)
{
    srand(time(NULL));
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJK...";
    if (size) {
        --size;
        for (size_t n = 0; n < size; n++) {
            int key = rand() % (int) (sizeof charset - 1);
            str[n] = charset[key];
        }
        str[size] = '\0';
    }
    return str;
}

char* randomString(int size){
    srand(time(NULL));
    char ABC[51] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWXYZ";
    char* string;
    string = (char*)malloc(size*sizeof(char));
    memset(string,0,sizeof(string));
   // strcpy(string,"");
    if(!string){
        printf("There was a problem generating the USER'S name!\n");
        exit(1);
    }
    if(size){
        --size;
        for(int i=0;i<size;i++){
            int character = rand()%(int)(sizeof ABC-1);
            string[i] = ABC[character];
        }
        string[size] = '\0';
    }
    return string;
    free(string);
}