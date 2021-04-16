#include "Test_Header.h"

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