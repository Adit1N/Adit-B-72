//WAP program to count how many even and odd numbers are present in an array using functions.

#include <stdio.h>

// Function to count even numbers in an array
int countEven(int arr[], int size) {
    int evenCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }
    return evenCount;
}

// Function to count odd numbers in an array
int countOdd(int arr[], int size) {
    int oddCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int evenNumbers = countEven(arr, size);
    int oddNumbers = countOdd(arr, size);

    printf("Total even numbers: %d\n", evenNumbers);
    printf("Total odd numbers: %d\n", oddNumbers);

    return 0;
}