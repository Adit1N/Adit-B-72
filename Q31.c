//Perform pointer arithematic (increment and decrement) on pointers of (integer data type).Observe how the memory addresses change and effects of data access.

#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Initialize pointer to the first element of the array

    printf("Initial pointer address: %p, Value: %d\n", (void*)ptr, *ptr);

    // Incrementing the pointer
    for (int i = 0; i < 4; i++) {
        ptr++; // Move to the next integer
        printf("After increment %d: Pointer address: %p, Value: %d\n", i + 1, (void*)ptr, *ptr);
    }

    // Decrementing the pointer
    for (int i = 0; i < 4; i++) {
        ptr--; // Move to the previous integer
        printf("After decrement %d: Pointer address: %p, Value: %d\n", i + 1, (void*)ptr, *ptr);
    }

    return 0;
}