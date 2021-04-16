#include "Test_Header.h"

int test_country_code(int country_code)
{
    int count=0;
    while (country_code)
    {
        country_code /= 10;
        ++count;
    }

    if(count > 3 || count == 0)
        return 0;
    
    return 1;
}