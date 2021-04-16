/**
 * @file Search_record.c
 * @author Vijay Vel Raja T (256547)
 * @brief To Search a Specific Record in the DataBase using Name
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Phone_Header.h"

int Search_record()
{
    FILE *f_ptr;
    char name[20];
    int flag = 0;
    info struct_ptr;

    f_ptr = fopen("Data_base.txt","rb");

    if(f_ptr == NULL)
    {
        printf("\nEmpty Record.");
        fclose(f_ptr);
        return 0;
    }
    else
    {
        printf("\nEnter the Name to be Searched:");
        fgets( name, 20, stdin);

        while( fread( &struct_ptr, sizeof(struct_ptr), 1, f_ptr) == 1)
        {
            if( strcmp( name, struct_ptr.name) == 0)
            {
                int flag = 1;
                printf("\n\tInformation About %s\n:",name);
                printf("\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nCountry Code:%d",struct_ptr.address,struct_ptr.father_name,struct_ptr.mother_name,struct_ptr.mobile_no,struct_ptr.sex,struct_ptr.country_code);
            }
        }

        if(!flag)
            printf("\nFile not found");

        close(f_ptr);

        printf("\nEnter any Key to Menu:");
        getch();

        return 1;
    }
    
}