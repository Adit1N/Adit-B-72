//Write a C program to reverse the elements of an array using a function.

#include <stdio.h>

// Function to reverse an
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers towards the middle
        start++;
        end--;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    printf("Original array: ");
    printArray(arr, n);

    // Call the function to reverse the array
    reverseArray(arr, n);

    printf("Reversed array: ");
    printArray(arr, n);

    return 0;
}