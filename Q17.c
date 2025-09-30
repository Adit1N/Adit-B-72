//WAP in C using a loop to check if a no is prime or not.
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle special cases: numbers less than or equal to 1 are not prime
    if (num <= 1) {
        isPrime = 0; 
    } else {
        // Loop from 2 up to the square root of num
        // If a number has a divisor greater than its square root,
        // it must also have a divisor smaller than its square root.
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, so it's not prime
                break;       // No need to check further
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}