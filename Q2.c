
//Write a C program to add two numbers, take number from user and print the sum
#include <stdio.h>

int main() {
    int a   ,b , sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;  // Summation

    printf("The sum is: %d", sum);

    return 0;
}