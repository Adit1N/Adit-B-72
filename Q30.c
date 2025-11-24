//Define a structure Rectangle with members:int length;int breadth;Write a function struct Rectangle inputRectangle() that takes input for a rectangle and returns it.Write another function int area(struct Rectangle r) that returns the area.

#include <stdio.h>
struct Rectangle {
    int length;
    int breadth;
};
// Function to take input for a rectangle and return it
struct Rectangle inputRectangle() {
    struct Rectangle r;
    printf("Enter length of the rectangle: ");
    scanf("%d", &r.length);
    printf("Enter breadth of the rectangle: ");
    scanf("%d", &r.breadth);
    return r;
}
// Function to calculate the area of the rectangle
int area(struct Rectangle r) {
    return r.length * r.breadth;
}   
int main() {
    struct Rectangle rect = inputRectangle();
    int rectArea = area(rect);
    printf("Area of the rectangle: %d\n", rectArea);
    return 0;
}