//WAP to count the number of vowels, consonants, digits, and special characters in a given character array (string).
#include <stdio.h>
#include <ctype.h> // Required for isalpha, isdigit, isspace functions

int main() {
    char str[100];
    int i, vowels, consonants, digits, specialChars;

    // Initialize all counters to 0
    vowels = consonants = digits = specialChars = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string including spaces

    // Loop through each character of the string
    for (i = 0; str[i] != '\0'; ++i) {
        // Convert character to lowercase for easier vowel/consonant check
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (isalpha(ch)) { // Check if it's an alphabet (and not a vowel)
            consonants++;
        } else if (isdigit(ch)) { // Check if it's a digit
            digits++;
        } else if (isspace(ch)) { // Ignore whitespace characters for special character count
            // Do nothing, as spaces are not counted as special characters in this context
        } else { // If it's none of the above, it's a special character
            specialChars++;
        }
    }

    printf("\n--- Character Counts ---");
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial Characters: %d", specialChars);

    return 0;
}