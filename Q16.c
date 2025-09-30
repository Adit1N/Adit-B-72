//WAP in C to claculate the sum of first n natural nos using a for loop.
#include <stdio.h>

int main() {
    int n; 
    int sum = 0;
    int i;

    //Taking user input for positvie integer
    printf("Enter a positive integer: ");

    // Read the integer from the user and store it in 'n'
    scanf("%d", &n);

    // Loop from 1 to 'n' (inclusive)
    for (i = 1; i <= n; i++) {
        sum += i; // Add the current value of 'i' to 'sum'
    }

    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}