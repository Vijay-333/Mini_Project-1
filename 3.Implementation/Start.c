/**
 * @file Start.c
 * @author Vijay Vel Raja T (256547)
 * @brief To Create, Modify, List, Delete, Search a Record in the DataBase
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Phone_Header.h"
#include "Test_Header.h"

int main()
{
    Menu();
    return 0;
}

void Menu()
{
    Clear();
    printf("\t\tPHONEBOOK\n");
    printf("\t\t  MENU\n");
    printf("1:Create\t2.List   \t3.Search\n4.Modify\t5.Delete\t6.Exit\n");
    switch(getchar())
    {
    case '1': Create_record();
    break;
    case '2': Listing_record();
    break;
    case '6': exit(0);
    break;
    case '4': Modify_record();
    break;
    case '3': Search_record();
    break;
    case '5': Delete_record();
    break;
    default:
        printf("\nEnter 1 to 6 only");
        printf("\n Enter any key");
        getchar();
        Menu();
    }
    Menu();
}