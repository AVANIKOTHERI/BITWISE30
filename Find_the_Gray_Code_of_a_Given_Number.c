#include <stdio.h>

// Function to calculate Gray Code of a given number
int grayCode(int n) {
    return n ^ (n >> 1);
}

// Driver code
int main() {
    int num = 7; // Example number
    printf("Gray Code of %d is %d\n", num, grayCode(num));
    return 0;
}
