//Write a C program that takes two numbers and an operator (+, -, *, /) from the user and performs the operation using a switch case.
#include <stdio.h>

int main() {

    int num1, num2;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2f\n", (float)num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}