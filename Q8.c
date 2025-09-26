//Write a program to print the size of various data types in C.
#include <stdio.h>

int main () {

    printf("Size of char: %lu byte(s)\n", sizeof(char));
    printf("Size of int: %lu byte(s)\n", sizeof(int));
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    printf("Size of double: %lu byte(s)\n", sizeof(double));
    return 0;
}