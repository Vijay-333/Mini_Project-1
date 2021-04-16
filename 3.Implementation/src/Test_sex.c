#include "Test_Header.h"

int test_sex(char sex[8])
{
    if(strcmp(sex, "Male") == 0 || strcmp(sex, "Female") == 0 || strcmp(sex, "Other") == 0)
        return 1;
    
    else
        return 0;
}