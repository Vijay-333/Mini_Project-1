/**
 * @file Create_record.c
 * @author Vijay Vel Raja T (256547)
 * @brief To Create a New Record in the DataBase
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Phone_Header.h"
#include "Test_Header.h"
#include <stdio.h>

int Create_record()
{
    FILE *f_ptr;
    info struct_ptr;

    f_ptr = fopen("Data_base.txt","ab+");

    printf("\nEnter name: ");
    scanf("%s",struct_ptr.name);
    

    printf("\nEnter the address: ");
    scanf("%49s",struct_ptr.address);


    printf("\nEnter father name: ");
    scanf("%19s",struct_ptr.father_name);
    

    printf("\nEnter mother name: ");
    scanf("%19s",struct_ptr.mother_name);;
    

    printf("\nEnter sex(Male, Female, Other): ");
    scanf("%7s",struct_ptr.sex);
    

    printf("\nEnter mobile no.: ");
    scanf("%ld", &struct_ptr.mobile_no);
    

    printf("\nEnter country code: ");
    scanf("%d", &struct_ptr.country_code);
    
    
    fwrite( &struct_ptr, sizeof(struct_ptr), 1, f_ptr);
    
    printf("\nRecord Saved.");
    fclose(f_ptr);

    getc(stdin);
    printf("\nEnter any Key to Menu:");
    getc(stdin);

    return 1;
}