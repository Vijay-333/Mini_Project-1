/**
 * @file Phone_Header.h
 * @author Vijay Vel Raja T (256547)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __Phone_Header_H__
#define __Phone_Header_H__

    /**
     * @brief Information in the DataBase
     * 
     */
    typedef struct Contact_Info
    {
        char name[20];
        char father_name[20];
        char mother_name[20];
        char address[50];
        int country_code;
        long int mobile_no;
        char sex[8];
    }info;
    
    #include <stdio.h>
    #include <sys/stat.h>
    #include <stdlib.h>
    #include <string.h>
    #include <fcntl.h>
    /**
     * @brief User Defined Functions for Phone Directory
     * 
     */
    void Menu();
    void Clear();
    int Create_record();
    int Modify_record();
    int Delete_record();
    int Search_record();
    int Listing_record();

#endif