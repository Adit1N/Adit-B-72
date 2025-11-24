//Write a C program to define a structure called Student with the following members:name (string of max 50 characters)SAP ID (integer)marks (float).Create an array of 5 students, take input for each, and display the details of all students
#include <stdio.h>

struct Student {
    char name[50];
    int sap_id;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    // Input for 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);   // Reads full name including spaces

        printf("SAP ID: ");
        scanf("%d", &students[i].sap_id);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    // Display student details
    printf("----- Student Details -----\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("SAP ID: %d\n", students[i].sap_id);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}