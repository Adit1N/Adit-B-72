
//Write a C program for a simple calculator that repeatedly asks the user for two numbers and an operation (+, -, *, /) until the user chooses to exit. Must use a do while loop to repeat until exit.

#include <stdio.h>

int main() {
    int choice;
    do {
        float num1, num2, result;
        char operator;

        // Prompt user for two numbers and an operator
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);  // space before %c to consume any leftover newline

        // Perform the operation based on the operator
        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operator. Please use +, -, *, or /.\n");
        }

        // Ask user if they want to perform another calculation
        printf("Do you want to perform another calculation? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("Exiting the calculator. Goodbye!\n");
    
    return 0;
}