/**
 * @file Test_Header
 * @author Vijay Vel Raja T (256547)
 * @brief Testing the parameters of phone directory
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __Test_Header_H__
#define __Test_Header_H__
    
    #include <stdio.h>
    #include <sys/stat.h>
    #include <stdlib.h>
    #include <string.h>
    #include <fcntl.h>
    /**
     * @brief Testing the Name parameter
     * 
     * @param name 
     * @return int 
     */
    int test_name(char name[20]);
    
    /**
     * @brief Testing the Address Parameter
     * 
     * @param address 
     * @return int 
     */
    int test_address(char address[50]);
    
    /**
     * @brief Testing the Sex Parameter
     * 
     * @param sex 
     * @return int 
     */
    int test_sex(char sex[8]);
    
    /**
     * @brief Testing the Mobile Number Parameter
     * 
     * @param mobile_no 
     * @return int 
     */
    int test_mobile(long int mobile_no);
    
    /**
     * @brief Testing the Country code Parameter
     * 
     * @param country_code 
     * @return int 
     */
    int test_country_code(int country_code);;

#endif