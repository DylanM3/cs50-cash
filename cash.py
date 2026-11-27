from cs50 import get_float


def calculate_quarters(cents):
    quarters = 0
    while cents >= 25:
        quarters += 1
        cents -= 25
    return quarters


def calculate_dimes(cents):
    dimes = 0
    while (cents >= 10):
        dimes += 1
        cents -= 10
    return dimes


def calculate_nickels(cents):
    nickels = 0
    while (cents >= 5):
        nickels += 1
        cents -= 5
    return nickels


def calculate_cents(pennies):
    cent = 0
    while (pennies >= 1):
        cent += 1
        pennies -= 1
    return cent


def main():
    pennies = -1

    while pennies < 0:
        pennies = get_float("Change: ")
        pennies = pennies * 100

    quarters = calculate_quarters(pennies)
    pennies = pennies - (quarters * 25)

    dimes = calculate_dimes(pennies)
    pennies = pennies - (dimes * 10)

    nickels = calculate_nickels(pennies)
    pennies = pennies - (nickels * 5)

    cent = calculate_cents(pennies)
    pennies = pennies - (cent * 1)

    if pennies > 0:
        print("Error.")
        return 1

    final = quarters + dimes + nickels + cent
    print(f"Minimum Coins: {final}")

    return 0


if __name__ == "__main__":
    main()
