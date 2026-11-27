# CS50 Cash
A command-line change calculator written in the C programming language that calculates the minimum number of coins required to make up a specified amount of change.
A command-line change calculator written in C and Python that calculates the minimum number of coins required to make up a specified amount of change.

## Features:
- Change Calculation: Calculates the minimum number of coins required to make up a specified amount of change.
- Greedy Algorithm: Prioritises larger coin denominations to minimise the total number of coins used.
- Input Validation: Ensures the amount of change entered is valid before performing calculations.
- Coin Denominations: Supports quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢).

## C Implementation:
- Integer-Based Calculations: Uses integer arithmetic to avoid floating-point precision issues when handling change.
- Separate Functions: Uses individual functions to calculate the number of each coin denomination.
- Remaining Change: Subtracts the value of each denomination from the remaining amount before calculating the next.
- Minimum Coin Total: Adds the number of each coin together to determine the final number required.

## Python Implementation:
- User Input: Uses the CS50 `get_float()` function to collect the change amount from the user.
- Input Validation: Repeatedly prompts the user until a non-negative amount is entered.
- Cent Conversion: Converts the entered dollar amount into cents before performing calculations.
- Separate Calculation Functions: Uses individual functions to calculate the number of quarters, dimes, nickels, and pennies.
- Remaining Change: Subtracts the value of each denomination from the remaining amount before calculating the next.
- Minimum Coin Total: Adds the number of each coin together to determine the final number required.

#

Developed as part of the curriculum for [Harvard University's CS50X: Introduction to Computer Science](https://cs50.harvard.edu/x/2025/psets/1/cash/)
- [CS50 Cash (C)](https://cs50.harvard.edu/x/2025/psets/1/cash/)
- [CS50 Cash (Python)](https://cs50.harvard.edu/x/2025/psets/6/cash/)
