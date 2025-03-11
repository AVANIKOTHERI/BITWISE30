#include <stdio.h>

// Function to find the missing number using XOR
int findMissingNumber(int arr[], int n) {
    int xor1 = 0, xor2 = 0;

    // XOR all numbers from 1 to N+1
    for (int i = 1; i <= n + 1; i++) {
        xor1 ^= i;
    }

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        xor2 ^= arr[i];
    }

    // XOR of both results gives the missing number
    return xor1 ^ xor2;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};  // Missing number is 3
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The missing number is: %d\n", findMissingNumber(arr, n));
    return 0;
}
