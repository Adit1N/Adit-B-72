//Write a program that prompts the user to enter their name and age and print the same.
#include <stdio.h>

int main() {
    char name[50];   
    int age;        

    // Taking input from name
    printf("Enter your name: ");
    scanf("%s", name);

    // Taking input for age
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nHello %s! You are %d years old.\n", name, age);

    return 0;
}
