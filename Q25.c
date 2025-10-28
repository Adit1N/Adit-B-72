//WAP to read a string from the user and print it in reverse order using a character array.
#include <stdio.h>
#include <string.h> // Required for strlen()

int main() {
    char str[100]; // Declare a character array to store the string
    int length, i;

    printf("Enter a string: ");
    scanf("%s", str); // Read the string from the user

    length = strlen(str); // Get the length of the string

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]); // Print characters from end to beginning
    }
    printf("\n");

    return 0;
}