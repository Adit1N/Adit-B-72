// ⁠WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.
#include <stdio.h>

int main() {
    int length , widht;

    printf("Enter the length of rectangle: ");
    scanf("%d",&length);

    printf("Enter the widht of rectangle: ");
    scanf("%d",&widht);

    int area = length * widht;
    int perimeter = 2 * (length + widht);

    printf("Area of rectangle: %d\n", area);
    printf("Perimeter of rectangle: %d\n", perimeter);

    return 0;
}