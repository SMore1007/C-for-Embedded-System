/*
Project Name: Simple Calculator
Author Name:  Sagar More
Description:  
    A simple command-line calculator that performs basic arithmetic operations:
    Addition, Subtraction, Multiplication, Division, Modulus, and Power.
*/

#include <stdio.h>
#include <math.h>

// Function Prototypes
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int divi(int num1, int num2); // Renamed to avoid conflict with standard `div`
int mod(int num1, int num2);
double power(int num1, int num2); // Changed return type to double
void get_input(int *num1, int *num2); // Function to get input values

int main() {
    int choice;
    int num1, num2;

    do {
        // Display menu
        printf("\n\n====== Simple Calculator ======\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Exit\n");
        
        // Get user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        // Execute operation based on choice
        switch (choice) {
            case 1:
                printf("You chose Addition\n");
                get_input(&num1, &num2);
                printf("Result: %d\n", add(num1, num2));
                break;

            case 2:
                printf("You chose Subtraction\n");
                get_input(&num1, &num2);
                printf("Result: %d\n", sub(num1, num2));
                break;

            case 3:
                printf("You chose Multiplication\n");
                get_input(&num1, &num2);
                printf("Result: %d\n", mul(num1, num2));
                break;

            case 4:
                printf("You chose Division\n");
                get_input(&num1, &num2);
                int result_div = divi(num1, num2);
                if (result_div != -1) {
                    printf("Result: %d\n", result_div);
                }
                break;

            case 5:
                printf("You chose Modulus\n");
                get_input(&num1, &num2);
                int result_mod = mod(num1, num2);
                if (result_mod != -1) {
                    printf("Result: %d\n", result_mod);
                }
                break;

            case 6:
                printf("You chose Power\n");
                get_input(&num1, &num2);
                printf("Result: %.2lf\n", power(num1, num2));
                break;

            case 7:
                printf("Exiting the calculator. Thank you!\n");
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 7.\n");
        }

    } while (choice != 7);

    return 0;
}

// Function to get user input for two numbers
void get_input(int *num1, int *num2) {
    printf("Enter Number 1: ");
    scanf("%d", num1);
    printf("Enter Number 2: ");
    scanf("%d", num2);
}

// Function to add two numbers
int add(int num1, int num2) {
    return num1 + num2;
}

// Function to subtract two numbers
int sub(int num1, int num2) {
    return num1 - num2;
}

// Function to multiply two numbers
int mul(int num1, int num2) {
    return num1 * num2;
}

// Function to divide two numbers (handles division by zero)
int divi(int num1, int num2) {
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed!\n");
        return -1;
    }
    return num1 / num2;
}

// Function to find modulus (handles division by zero)
int mod(int num1, int num2) {
    if (num2 == 0) {
        printf("Error: Modulus by zero is not allowed!\n");
        return -1;
    }
    return num1 % num2;
}

// Function to compute power (using pow function)
double power(int num1, int num2) {
    return pow(num1, num2);
}
