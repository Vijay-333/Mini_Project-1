#include "E:\Study\Mini-Project LTTS\Mini Project in C Phonebook\Implementation\inc\Phone_Header.h"

void Clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}