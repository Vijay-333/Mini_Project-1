#include "E:\Study\Mini-Project LTTS\Mini Project in C Phonebook\Implementation\inc\Test_Header.h"

int test_address(char address[50])
{
    for(int i=0; address[i] != '\0'; i++)
    {
        if( (int)address[i] != 32 && (int)address[i] != 44 && (int)address[i] != 46)
        {
            if( ( (int)address[i] <= 90 && (int)address[i] >= 65 ) || ( (int)address[i] <= 122 && (int)address[i] >= 97 ));
            else
            {
                return 0;
            }
        }
    }
    return 1;
}