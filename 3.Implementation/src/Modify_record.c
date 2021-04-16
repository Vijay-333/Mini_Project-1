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
#include "Phone_Header.h"
#include "Test_Header.h"


int Modify_record()
{
    FILE *f_ptr;
    char name[20];
    int flag = 0;
    info struct_ptr, new_ptr;
    
    f_ptr = fopen("Data_base.txt","rb+");
    
    if(f_ptr == NULL)
    {
        printf("\nError in Opening the file.");
        fclose(f_ptr);
        return 0;
    }
    
    else
    {
        printf("\nEnter the NAME to MODIFY: ");
        scanf("%19s",name);

        while( fread( &struct_ptr, sizeof(struct_ptr), 1, f_ptr) == 1)
        {
            if( strcmp( name, struct_ptr.name) == 0)
            {
                printf("\nEnter name: ");
                scanf("%s",new_ptr.name);
                

                printf("\nEnter the address: ");
                scanf("%49s",new_ptr.address);


                printf("\nEnter father name: ");
                scanf("%19s",new_ptr.father_name);
                

                printf("\nEnter mother name: ");
                scanf("%19s",new_ptr.mother_name);;
                

                printf("\nEnter sex(Male, Female, Other): ");
                scanf("%7s",new_ptr.sex);
                

                printf("\nEnter mobile no.: ");
                scanf("%ld", &new_ptr.mobile_no);
                

                printf("\nEnter country code: ");
                scanf("%d", &new_ptr.country_code);
                

                long int size ;
                size = (long int)-sizeof(struct_ptr); 
                fseek( f_ptr, size, SEEK_CUR);
                fwrite( &new_ptr, sizeof(struct_ptr), 1, f_ptr);

                flag = 1;
                printf("\nYour data is modified.");
                break;
            }
        }
        getc(stdin);
        if(!flag)
            printf("\nData is not found.");
        
        fclose(f_ptr);
	}
	printf("\nEnter any key to Menu:");
	getc(stdin);

	return 1;
}