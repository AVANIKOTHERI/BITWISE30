#include <stdio.h>

int main() {
    unsigned char a = 0xAB;  // 1010 1011
    unsigned char b = 0xCD;  // 1100 1101
    unsigned char result;

    // Performing bitwise operations
    result = (a & 0xF0) | (b & 0x0F); // Extract upper 4 bits of A and lower 4 bits of B

    // Print the result
    printf("Result: 0x%X\n", result); // Expected output: 0xBC

    return 0;
}
