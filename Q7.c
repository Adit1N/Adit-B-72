//Write a C program to demonstrate the use of pre-increment (++x) and post-increment (x++) on a variable. Print the value of the variable before and after each operation.
#include <stdio.h>

int main() {

    int a;

    printf("Enter an integer:");
    scanf("%d",&a);

    printf("Initial value of a :%d\n",a);
    printf("Value after pre increment :%d\n",++a);
    printf("Value after post increment :%d\n",a++);
    printf("Value after post increment operation :%d\n",a);

    return 0;
}