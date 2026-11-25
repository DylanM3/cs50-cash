#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_cents(int cents);

int main(void)
{
    int pennies;
    do
    {
        pennies = get_int("Change owed: ");
    }
    while (pennies < 0);

    // Calculate how many quarters you should give customer and subtract from cents
    int quarters = calculate_quarters(pennies);
    pennies = pennies - (quarters * 25);

    // Calculate how many dimes you should give customer and subtract from cents
    int dimes = calculate_dimes(pennies);
    pennies = pennies - (dimes * 10);

    // Calculate how many nickles you should give customer and subtract from cents
    int nickels = calculate_nickels(pennies);
    pennies = pennies - (nickels * 5);

    // Calculate how many cents you should give customer and subtract from cents
    int cent = calculate_cents(pennies);
    pennies = pennies - (cent * 1);

    // Sum all values and print coin count
    int final = quarters + dimes + nickels + cent;
    printf("Minimum Coins: %i\n", final);

    if (pennies > 0)
    {
        printf("Error.");
    }
    else
    {
        return 0;
    }
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }
    return nickels;
}

int calculate_cents(int pennies)
{
    int cent = 0;
    while (pennies >= 1)
    {
        cent++;
        pennies = pennies - 1;
    }
    return cent;
}
