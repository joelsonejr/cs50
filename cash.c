#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float c25, c10, c5, c1;
    c25 = c10 = c5 = c1 = 0;

    //requesting the user for the amount of change owned
    float change = get_float("Change owed: ");

    //checking if the user provided a valid input
    while (change <= 0)
    {
        change = get_float("Please, type a positive, and non zero, value: ");
    }

    // Translating all the money into coins

    change = round(change * 100);

    //finding out the amount of quarters
    while (change >= 25)
    {
        change = change - 25;
        c25++;
    }

    //finding out the amount of dimes
    while (change >= 10)
    {
        change = change - 10;
        c10++;
    }

    //finding out the amount of nickels
    while (change >= 5)
    {
        change = change - 5;
        c5++;
    }

    //finding out the amount of pennies
    while (change >= 1)
    {
        change = change - 1;
        c1++;
    }

    //printing out the change owned
    // printf("The change should be provided following the amount of coins showed bellow:\n");
    // printf("%4.1f\n", c25);
    // printf("%4.1f\n", c10);
    // printf("%4.1f\n", c5);
    // printf("%4.1f\n", c1);

    int money = c25 + c10 + c5 + c1;

    printf("%i\n", money);
}