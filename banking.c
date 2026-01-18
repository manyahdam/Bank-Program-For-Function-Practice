#include <stdio.h>


void checkBalance(float balance);
float deposit();
float withdraw(float balance);


 int main(){
    int choice = 0;
    float balance = 0.0f;

    printf("*** WELCOME TO THE BANK***");
    
    do{
        printf("\nSelect an option: \n");
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
          case 1:
            checkBalance(balance);
            break;
          case 2:
              balance += deposit();
              break;
          case 3:
              balance -= withdraw(balance);
              break;
          case 4:
              printf("\nThank you for using the bank\n");
              break;
          
        default:
            printf("\nInvalid input{}");
            break;
        }
    }while(choice != 4);

    return 0;
 }

 
void checkBalance(float balance){
   printf("\nYour current balance is: %.2f dollars\n", balance);
   
}
float deposit(){
    float deposit = 0.0f;
    printf("Enter deposit amount: ");
    scanf ("%f", &deposit);
    if(deposit < 0){
        return 0.0f;
    }
    else{
        printf("Successfulley deposited %f dollars", deposit);
        return deposit;
    }
}
float withdraw(float balance){
    float withdraw = 0.0;
    printf("Enter withdraw amount: ");
    scanf("%f", &withdraw);
    if(withdraw < 0){
        return 0.0f;
    }
    else if(balance < withdraw){    
        printf("Sorry, you don't have enough balance\n");
        return 0.0f;
    }
    else{
        printf("Successfulley withdrawed %f dollars", deposit);
        return withdraw;
    }
    
}