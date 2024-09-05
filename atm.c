#include "atm.h"


int balance =0;
void password_activation(int *pin){
    printf("===============================\n");
    printf("please enter your password of 4 digits to activate this visa : \n");
    printf("===============================\n");
    scanf("%i" , pin);
    printf("===============================\n");
    printf(" this visa has been activated  successfully \n");

}
/*===============================================================*/
int authenticate(int *password_user_entered ,int *pin) {

     if(*password_user_entered == *pin ){
        printf("password you entered is correct now you can use  this visa ...  \n");
     return 1;
    }
    else{
          printf("password you entered is  not correct  ...  \n");

     return -1;
    }

}

/*===============================================================*/
void transaction(){

       int choice;
    printf("please enter any option to be seved: \n");
    printf("1. withdraw\n");
    printf("===========\n");
    printf("2. deposit\n");
    printf("===========\n");
    printf("3. balance\n");
    printf("===========\n");
    scanf("%i" ,&choice );
    switch(choice){
    case 1: {
        float amountwithdraw;
         printf("please enter amountwithdraw : \n");
         scanf("%i" ,&amountwithdraw);
         withdraw(&balance , &amountwithdraw);
         anothertransactions();

    }  break;
    case 2: {
     int deposit_amount;
      printf("please enter deposit_amount : \n");
      scanf("%i" ,&deposit_amount);
      deposit(&balance , &deposit_amount);
      anothertransactions();
    }
    break;
    case 3:{
      get_balance(&balance );
      anothertransactions();

    }

}
}
/*===============================================================*/
void anothertransactions(){
    int anothertransaction;
    printf("===============================\n");
    printf("if you want another transaction ? press 1 to exit press 2 \n\n");
    scanf("%i" ,&anothertransaction);
    if(anothertransaction==1){
       transaction();
    }
}
/*===============================================================*/

void  withdraw(int *balance , int *amountwithdraw){
    if(*amountwithdraw > *balance){
            printf("===============================\n");
            printf("your balance is not enough \n");
            anothertransactions();
    }
    else {
        *balance-=*amountwithdraw;
        printf("===============================\n");
        printf("your transaction has done successfully and withdraw %i \n ",*amountwithdraw );

    }

}
void deposit(int *balance , int *deposit_amount){
    *balance+=*deposit_amount;
    printf("===============================\n");
    printf("your transaction has done successfully and deposit %i\n",*deposit_amount );

}
void get_balance(int *balance ){
    printf("===============================\n");
    printf("your balance is %i \n", *balance);

}



