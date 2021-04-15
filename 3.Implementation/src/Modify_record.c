/**
 * @file Modify_record.c
 * @author Vijay Vel Raja T (256547)
 * @brief To Modify a Record in the DataBase
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "E:\Study\Mini-Project LTTS\Mini Project in C Phonebook\Implementation\inc\Phone_Header.h"
#include "E:\Study\Mini-Project LTTS\Mini Project in C Phonebook\Implementation\inc\Test_Header.h"

int Modify_record()
{
    FILE *f_ptr;
    char name[20];
    int flag = 0;
    info struct_ptr, new_ptr;
    
    f_ptr = fopen("Data_base.txt","rb+");
    
    if(f_ptr == NULL)
    {
        printf("\nEmpty File.");
        fclose(f_ptr);
        return 0;
    }

    else
    {
        printf("\nEnter the NAME to MODIFY: ");
        fgets( name, 20, stdin);
        while( fread( &struct_ptr, sizeof(struct_ptr), 1, f_ptr) == 1)
        {
            if( strcmp( name, struct_ptr.name) == 0)
            {
                printf("\nEnter name: ");
                fgets(new_ptr.name, 20, stdin);
                if( !test_name(new_ptr.name))
                {
                    fclose(f_ptr);
                    return 0;
                }

                printf("\nEnter the address: ");
                fgets(new_ptr.address, 50, stdin);
                if( !test_address(new_ptr.address))
                {
                    fclose(f_ptr);
                    return 0;
                }

                printf("\nEnter father name: ");
                fgets(new_ptr.father_name, 20, stdin);
                if( !test_name(new_ptr.father_name))
                {
                    fclose(f_ptr);
                    return 0;
                }

                printf("\nEnter mother name: ");
                fgets(new_ptr.mother_name, 20, stdin);
                if( !test_name(new_ptr.mother_name))
                {
                    fclose(f_ptr);
                    return 0;
                }

                printf("\nEnter sex(Male, Female, Other): ");
                fgets(new_ptr.sex, 8, stdin);
                if( !test_name(new_ptr.sex))
                {
                    fclose(f_ptr);
                    return 0;
                }

                printf("\nEnter mobile no.: ");
                scanf("%ld", &new_ptr.mobile_no);
                if( !test_name(new_ptr.mobile_no))
                {
                    fclose(f_ptr);
                    return 0;
                }

                printf("\nEnter country code: ");
                scanf("%d", &new_ptr.country_code);
                if( !test_name(new_ptr.country_code))
                {
                    fclose(f_ptr);
                    return 0;
                }

                fseek( f_ptr, -sizeof(struct_ptr), SEEK_CUR);
                fwrite( &new_ptr, sizeof(struct_ptr), 1, f_ptr);

                flag = 1;
                printf("\nYour data is modified.");
                break;
            }
        }

        if(!flag)
            printf("\nData is not found.");
        
        fclose(f_ptr);
	}
	printf("\nEnter any key to Menu:");
	getch();

	return 1;
}