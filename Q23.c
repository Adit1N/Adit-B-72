//WAP program to calculate the average of n numbers stored in an array using a function.

#include <stdio.h>

// Function to calculate the average of an array
float calculateAverage(int arr[], int n) {
    int sum = 0;
    // Calculate the sum of all elements in the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    // Return the average as a float to ensure correct decimal representation
    return (float)sum / n;
}

int main() {
    int n; // Variable to store the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n]; 

    printf("Enter %d elements:\n", n);
    // Get user input for the array elements
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call the function to calculate the average
    float average = calculateAverage(arr, n);

    // Display the calculated average
    printf("The average of the numbers is: %.2f\n", average);

    return 0;
}