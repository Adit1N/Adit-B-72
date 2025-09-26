//Write a C program that takes a number (1–7) as input and prints the corresponding day of the week using a switch case.
//1  Monday , 2 Tuesday, and so on , If the user enters a number outside 1–7, print "Invalid input"
#include <stdio.h>

int main() {

    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid input");
    }

    return 0;
}