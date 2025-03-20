#include <stdio.h>

// Function to convert Gray Code to Binary
int grayToBinary(int gray) {
    int binary = gray; // MSB is the same
    while (gray >>= 1) {  // Shift Gray Code right
        binary ^= gray;   // XOR with the previous binary result
    }
    return binary;
}

// Driver code
int main() {
    int gray = 4; // Example Gray Code
    printf("Binary equivalent of Gray Code %d is %d\n", gray, grayToBinary(gray));
    return 0;
}
