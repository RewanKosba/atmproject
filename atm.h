#ifndef ATM_H_
#define ATM_H_

void anothertransactions();
void password_activation(int *pin);
int authenticate(int *bassword_user_entered ,int *pin);
void  withdraw(int *balance , int *amountwithdraw);
void deposit(int *balance , int *deposit_amount);
void get_balance(int *balance );
void password_activation(int *pin);
void transaction();

#endif // ATM_H_
