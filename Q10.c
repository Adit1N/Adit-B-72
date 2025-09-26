//Write a C program that takes an integer input and uses the bitwise AND (&) operator along with a ternary operator to check whether the number is even or odd.
#include <stdio.h>

int main () {

    int num;

    printf("Enter an integer:");
    scanf("%d",&num);
    
    (num & 1) == 0 ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    return 0;
}