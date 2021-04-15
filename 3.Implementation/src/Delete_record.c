/**
 * @file Delete_record.c
 * @author Vijay Vel Raja T (256547)
 * @brief To Delete a Specific Record in the DataBase
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "E:\Study\Mini-Project LTTS\Mini Project in C Phonebook\Implementation\inc\Phone_Header.h"

int Delete_record()
{
    FILE *f_ptr1, *f_ptr2;
    char name[20];
    int flag = 0;
    info struct_ptr;

    f_ptr1 = fopen("Data_base.txt","rb"); 

    if(f_ptr1 == NULL)
    {
        printf("\nEmpty File.");
        fclose(f_ptr1);
        return 0;
    }

    else
	{
		f_ptr2 = fopen("Temp_base.txt","wb+");

		if(f_ptr2 == NULL)
        {
            printf("\nFile opening error!");
            fclose(f_ptr1);
            fclose(f_ptr2);
            return 0;
        }
		
        else
        {
            printf("\nEnter NAME:");
            fgets( name, 20, stdin);

            while( fread( &struct_ptr, sizeof(struct_ptr), 1, f_ptr1) == 1)
            {
                if(strcmp( name, struct_ptr.name) != 0)
                    fwrite( &struct_ptr, sizeof(struct_ptr), 1, f_ptr2);
                
                if(strcmp( name, struct_ptr.name) == 0)
                    flag=1;
            }

            fclose(f_ptr1);
            fclose(f_ptr2);

            if(!flag)
            {
                printf("\nNO RECORD TO DELETE.");
                remove("Temp_base.txt");
            }

            else
            {
                remove("Data_base.txt");
                rename("Temp_base.txt","Data_base.txt");
                printf("\nRECORD DELETED SUCCESSFULLY.");
            }
	    }
    }
    printf("\n Enter any key to Menu:");
	getch();

    return 1;
}