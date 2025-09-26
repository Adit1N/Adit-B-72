//Write a program to read a four digit integer and print the sum of its digits.Hint: Use / and % operators
#include <stdio.h>

int main(){

    int dig1,dig2,dig3,dig4,sum,num;

    printf("Enter a four digit integer:");
    scanf("%d",&num);

    dig1=num/1000;
    dig2=(num/100)%10;
    dig3=(num/10)%10;
    dig4=num%10;

    sum=dig1+dig2+dig3+dig4;
    printf("Sum of its digits is: %d",sum);

    return 0;
}