//Write a C program to find the factorial of a number using a while loop.Example: Input 5, Output 120.

#include <stdio.h>

int main() {
    int n, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int i = 1;
        while (i <= n) {
            factorial *= i;  // Multiply current i to factorial
            i++;             // Increment i
        }
        printf("Factorial of %d is %d.\n", n, factorial);
    }

    return 0;
}