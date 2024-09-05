/*=============================================================================
*    @file             : main.c
*    @brief            : atm system
*    @author           : Rewan kosba
===============================================================================*/


#include <stdio.h>
#include <stdlib.h>
#include "atm.h"

int main()
{
    printf("==========ATM SYSTEM===========\n");
    int pin;
    password_activation(&pin);
    printf("please confirm password to use this visa \n");
    printf("===============================\n");
    int password_user_entered;
    scanf("%i" , &password_user_entered);
    printf("===============================\n");
    int ret;
     ret=authenticate( &password_user_entered,&pin);
    if (ret==1){
        transaction();
    }else{
        printf("you cant use this visa \n");
    }
    return 0;
}


/*================================================================================

    Date                   By                  Description
    ------------           ------------        ------------
    2septembert2024        Rewan kosba         creating the clinic management file
===================================================================================*/
