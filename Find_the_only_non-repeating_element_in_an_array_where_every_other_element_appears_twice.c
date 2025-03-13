#include <stdio.h>

int findUnique(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];  // XOR all elements
    }
    return result;
}

int main() {
    int arr[] = {4, 2, 6, 3, 2, 3, 6}; // Only 4 appears once
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The unique element is: %d\n", findUnique(arr, size));

    return 0;
}
