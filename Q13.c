//Using else-if ladder.Write a C program that asks the user to enter marks (0–100) and assigns a grade based on the following conditions: (90–100 Grade A) (75–89 Grade B) (50–74 Grade C) (Below 50 Grade F).
#include <stdio.h>

int main() {

    int marks;

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Grade A");
    } else if (marks >= 75 && marks <= 89) {
        printf("Grade B");
    } else if (marks >= 50 && marks <= 74) {
        printf("Grade C");
    } else if (marks < 50 && marks >= 0) {
        printf("Grade F");
    } else {
        printf("Invalid marks");
    }

    return 0;
}