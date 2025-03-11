#include <stdio.h>

// Function to find the unique number in an array where all others appear thrice
int findUnique(int arr[], int n) {
    int ones = 0, twos = 0; // Track bits appearing once and twice

    for (int i = 0; i < n; i++) {
        ones = (ones ^ arr[i]) & ~twos;  // Update `ones`
        twos = (twos ^ arr[i]) & ~ones;  // Update `twos`
    }

    return ones; // Unique number remains in `ones`
}

int main() {
    int arr[] = {2, 2, 3, 2, 3, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The unique number is: %d\n", findUnique(arr, n));
    return 0;
}
