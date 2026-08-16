balance = 5000

while True:

    print("\n===== ATM =====")
    print("1. Check Balance")
    print("2. Deposit")
    print("3. Withdraw")
    print("4. Exit")

    choice = int(input("Enter your choice: "))

    match choice:

        case 1:
            print("Current Balance:", balance)

        case 2:
            amount = int(input("Enter deposit amount: "))

            if amount > 0:
                balance += amount
                print("Deposit successful")
                print("Updated Balance:", balance)
            else:
                print("Invalid amount")

        case 3:
            amount = int(input("Enter withdrawal amount: "))

            if amount <= 0:
                print("Invalid amount")

            elif amount > balance:
                print("Insufficient balance")

            else:
                balance -= amount
                print("Withdrawal successful")
                print("Updated Balance:", balance)

        case 4:
            print("Thank you for using the ATM.")
            break

        case _:
            print("Invalid choice")
