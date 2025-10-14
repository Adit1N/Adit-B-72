//Write a C program to find the maximum and minimum elements in an array using functions.

#include <stdio.h>

int findMinMax(int arr[], int n, int *max, int *min) {
    // Initialize max and min with the first element of the array
    *max = arr[0];
    *min = arr[0];

    // Iterate through the array starting from the second element
    for (int i = 1; i < n; i++) {
        // Update max if the current element is greater
        if (arr[i] > *max) {
            *max = arr[i];
        }
        // Update min if the current element is smaller
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int arr[] = {12, 5, 8, 20, 3, 15}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    int maximum, minimum; // Variables to store max and min

    // Call the function to find min and max
    findMinMax(arr, n, &maximum, &minimum);

    // Print the results
    printf("Maximum element: %d\n", maximum);
    printf("Minimum element: %d\n", minimum);

    return 0;
}