#include <stdio.h>

int main()
{
    int balance = 0;
    int amount;
    int choice;

    int totalWithdraw = 0;
    int totaDeposit = 0;

    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Current balance is %d\n", balance);
            break;

        case 2:
            printf("Enter amount for deposit: \n");
            scanf("%d", &amount);

            if (amount > 0)
            {
                balance += amount;
                totaDeposit += amount;
                printf("Succesfull deposit!\n");
            }
            else
            {
                printf("invalid!");
            }
            break;

        case 3:
            printf("Enter amount for withdraw: \n");
            scanf("%d", &amount);

            if (amount <= 0)
            {
                printf("invalid\n");
            }
            else if (amount > balance)
            {
                printf("INsufficient Funds!\n");
            }
            else
            {
                balance -= amount;
                totalWithdraw -= amount;
                printf("Succesfull Withdraw!");
            }
            break;

        case 4:
            printf("Thankyou For Using Atm\n");
            break;

        default:
            printf("Invalid Choice\n");
        }
    } while (choice != 4);

    printf("\n===== TRANSACTION SUMMARY =====\n");
    printf("Final Balance: Rs.%d\n", balance);
    printf("Total Deposited: Rs.%d\n", totaDeposit);
    printf("Total Withdrawn: Rs.%d\n", totalWithdraw);

    return 0;
}
