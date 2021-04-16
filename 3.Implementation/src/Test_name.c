#include "Test_Header.h"

int test_name(char name[20])
{
    for(int i=0; name[i] != '\0'; i++)
    {
        if( name[i] != ' ' && name[i] != '.')
        {
            if( ( name[i] <= 'z' && name[i] >= 'a' ) || ( name[i] <= 'Z' && name[i] >= 'A' ))
                continue;
            else
            {
                return 0;
            }
        }
    }
    return 1;
}