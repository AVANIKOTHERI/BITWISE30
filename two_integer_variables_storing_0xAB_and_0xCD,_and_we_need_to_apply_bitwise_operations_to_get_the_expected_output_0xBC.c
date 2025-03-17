#include <stdio.h>

int main() {
    unsigned char a = 0xAB;  // 1010 1011
    unsigned char b = 0xCD;  // 1100 1101
    unsigned char result;

    // Alternative bitwise method
    result = ((a & 0x0F) << 4) | ((b & 0xF0) >> 4);

    // Print the result
    printf("Result: 0x%X\n", result); // Expected output: 0xBC

    return 0;
}
