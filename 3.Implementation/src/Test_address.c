#include "Test_Header.h"

int test_address(char address[50])
{
    for(int i=0; address[i] != '\0'; i++)
    {
        if( address[i] != ' ' && address[i] != ',' && address[i] != '-')
        {
            if( ( address[i] <= 'z' && address[i] >= 'a' ) || ( address[i] <= 'Z' && address[i] >= 'A' ))
                continue;
            else
            {
                return 0;
            }
    }
    return 1;
}