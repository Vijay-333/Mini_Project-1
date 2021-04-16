/**
 * @file Listing_record.c
 * @author Vijay Vel Raja T (256547)
 * @brief To Print all the Records in DataBase
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Phone_Header.h"

int Listing_record()
{
    FILE *f_ptr;
    info struct_ptr;

    f_ptr = fopen("Data_base.txt","rb");
    
    if(f_ptr == NULL)
    {
        printf("\nEmpty List.");
        fclose(f_ptr);
        return 0;
    }

    else
    {
        while( fread( &struct_ptr, sizeof(struct_ptr), 1, f_ptr) == 1)
        {
            printf("\nRECORD:\n");
            printf("\nName=%s\nAdress=%s\nFather name=%s\nMother name=%s\nMobile no=%ld\n\nSex=%s\nCountry Code=%d\n",struct_ptr.name,struct_ptr.address,struct_ptr.father_name,struct_ptr.mother_name,struct_ptr.mobile_no,struct_ptr.sex,struct_ptr.country_code);
        }

        fclose(f_ptr);

        printf("\nEnd of the LIST.");
        printf("\nEnter any Key to Menu:");
        getch();

        return 1;    
    }
}