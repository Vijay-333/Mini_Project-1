#include "E:\Study\Mini-Project LTTS\Mini Project in C Phonebook\Implementation\inc\Test_Header.h"

int test_mobile(long int number)
{
    int count=0;
    while (number)
    {
        number /= 10;
        ++count;
    }

    if(count != 10)
        return 0;
    
    return 1;
}