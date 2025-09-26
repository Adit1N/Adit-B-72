// ⁠WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9.0/5.0) + 32.0.
#include <stdio.h>

int main(){

    float c,f;

    printf("Enter Temperature in celcius:");
    scanf("%f",&c);

    f=(c*9.0/5.0)+32.0;
    printf("Temperature in Fahrenheit is: %.2f",f);

    return 0;
}