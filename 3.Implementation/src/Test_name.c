#include "E:\Study\Mini-Project LTTS\Mini Project in C Phonebook\Implementation\inc\Test_Header.h"

int test_name(char name[20])
{
    for(int i=0; name[i] != '\0'; i++)
    {
        if( (int)name[i] != 32 && (int)name[i] != 46)
        {
            if( ( (int)name[i] <= 90 && (int)name[i] >= 65 ) || ( (int)name[i] <= 122 && (int)name[i] >= 97 ));
            else
            {
                return 0;
            }
        }
    }
    return 1;
}