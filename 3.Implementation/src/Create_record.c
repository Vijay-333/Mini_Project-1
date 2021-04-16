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

int Create_record()
{
    FILE *f_ptr;
    info struct_ptr;

    f_ptr = fopen("Data_base.txt","ab+");

    printf("\nEnter name: ");
    fgets(struct_ptr.name, 20, stdin);
    if( !test_name(struct_ptr.name))
    {
        fclose(f_ptr);
        return 0;
    }

    printf("\nEnter the address: ");
    fgets(struct_ptr.address, 50, stdin);
    if( !test_address(struct_ptr.address))
    {
        fclose(f_ptr);
        return 0;
    }

    printf("\nEnter father name: ");
    fgets(struct_ptr.father_name, 20, stdin);
    if( !test_name(struct_ptr.father_name))
    {
        fclose(f_ptr);
        return 0;
    }

    printf("\nEnter mother name: ");
    fgets(struct_ptr.mother_name, 20, stdin);
    if( !test_name(struct_ptr.mother_name))
    {
        fclose(f_ptr);
        return 0;
    }

    printf("\nEnter sex(Male, Female, Other): ");
    fgets(struct_ptr.sex, 8, stdin);
    if( !test_sex(struct_ptr.sex))
    {
        fclose(f_ptr);
        return 0;
    }

    printf("\nEnter mobile no.: ");
    scanf("%ld", &struct_ptr.mobile_no);
    if( !test_mobile(struct_ptr.mobile_no))
    {
        fclose(f_ptr);
        return 0;
    };

    printf("\nEnter country code: ");
    scanf("%d", &struct_ptr.country_code);
    if( !test_country_code(struct_ptr.country_code))
    {
        fclose(f_ptr);
        return 0;
    }
    
    fwrite( &struct_ptr, sizeof(struct_ptr), 1, f_ptr);
    
    printf("\nRecord Saved.");
    fclose(f_ptr);

    printf("\nEnter any Key to Menu:");
    getch();

    return 1;
}