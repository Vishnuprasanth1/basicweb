#include <stdio.h>

int main() {
    int pin = 1234;       // Set your ATM PIN
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
        scanf("%d", &choice

