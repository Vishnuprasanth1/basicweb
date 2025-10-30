#include <stdio.h>

int main() {
    int pin = 1234;         // Set your ATM PIN
    int enteredPin;
    int choice;
    double balance = 1000.0; // Initial balance
    double amount;

    printf("Welcome to the ATM!\n");

    // Ask for PIN
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Exiting...\n");
        return 0;
    }

    do {
        // Display menu
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Check Balance
                printf("Your balance is: %.2f\n", balance);
                break;
            case 2: // Deposit
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                if(amount > 0) {
                    balance += amount;
                    printf("Amount deposited. New balance: %.2f\n", balance);
                } else {
                    printf("Invalid amount!\n");
                }
                break;
            case 3: // Withdraw
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                if(amount > 0) {
                    if(amount > balance) {
                        printf("Insufficient funds!\n");
                    } else {
                        balance -= amount;
                        printf("Amount withdrawn. New balance: %.2f\n", balance);
                    }
                } else {
                    printf("Invalid amount!\n");
                }
                break;
            case 4: // Exit
                printf("Exiting... Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}

