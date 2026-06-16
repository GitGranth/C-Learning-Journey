#include <stdio.h>

int main()
{
    int unit;
    int bill;

    printf("What is your Units?: ");
    scanf("%d", &unit);

    // Always enter the invalid input first

    if (unit <= 0)
    {
        printf("Invalid input!");
        return 0;
    }

    else if (unit <= 100)
    {
        bill = unit * 5; // declare before printing
        printf("Bill: %d", bill);
    }
    else if (unit <= 200)
    {
        bill = unit * 7;
        printf("Bill: %d", bill);
    }
    else
    {
        bill = unit * 10;
        printf("Bill: %d", bill);
    }

    if (bill > 1500)
    {
        bill = bill + 200;
        printf("\nSurge Added +200\nTotal bill: %d", bill);
    }

    return 0;
}
