//Given three values, write a program to read three values from keyboard and print out the largest of them
#include <stdio.h>

int main() {

    int a,b,c;
    
    printf("Enter 1st number:");
    scanf("%d",&a);

    printf("Enter 2nd number:");
    scanf("%d",&b);

    printf("Enter 3rd number:");
    scanf("%d",&c);

    (a>b && a>c)?printf("Largest number is %d",a):(b>c &&b>a)? printf("Largest number is %d",b):printf("Largest number is %d",c);

    return 0;
}