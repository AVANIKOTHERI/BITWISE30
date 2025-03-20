#include <stdio.h>

// Function to generate all subsets using bitwise operations
void generateSubsets(int arr[], int n) {
    int totalSubsets = 1 << n; // 2^n subsets

    printf("Subsets:\n");
    for (int mask = 0; mask < totalSubsets; mask++) { // Iterate through all masks
        printf("{ ");
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) { // Check if the i-th bit is set
                printf("%d ", arr[i]);
            }
        }
        printf("}\n");
    }
}

// Driver code
int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    generateSubsets(arr, n);

    return 0;
}
