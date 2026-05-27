#include<stdio.h>

int main() {
    int initial_amt = 10000, option, deposit, withdraw;

    do {
        printf("Choose an option:\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Balance Enquiry\n");
        printf("4. Exit\n");
        printf("Select an option: ");
        scanf("%d", &option);

        if(option == 1) {
            printf("Enter amount you want to deposit: ");
            scanf("%d", &deposit);

            if(deposit <= 0) {
                printf("Invalid deposit amount\n\n");
            } else {
                initial_amt += deposit;
                printf("Amount Deposited Successfully!\n\n");
            }

        } else if(option == 2) {
            printf("Enter amount you want to withdraw: ");
            scanf("%d", &withdraw);

            if(withdraw <= 0) {
                printf("Invalid withdrawal amount\n\n");
            } else if(withdraw > initial_amt) {
                printf("Insufficient Balance\n\n");
            } else {
                initial_amt -= withdraw;
                printf("Amount Withdrawn Successfully!\n\n");
            }

        } else if(option == 3) {
            printf("Amount you have in your account is %d\n\n", initial_amt);

        } else if(option == 4) {
            printf("-------Thank you--------\n\n");

        } else {
            printf("Invalid Option\n\n");
        }

    } while(option != 4);

    return 0;
}
