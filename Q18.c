
//Write a program to count how many digits a number has using a while loop.Example: Input 5029, Output 4.

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0) {
        count = 1;  // Special case for 0
    } else {
        while (n != 0) {
            n /= 10;  // Remove the last digit
            count++;  // Increment digit count
        }
    }

    printf("The number has %d digits.\n", count);

    return 0;
}