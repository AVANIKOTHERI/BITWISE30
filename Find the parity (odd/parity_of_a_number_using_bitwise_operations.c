#include <stdio.h>

// Function to find parity using XOR
int findParity(unsigned int num) {
    int parity = 0;  // Stores parity result

    while (num) {
        parity ^= (num & 1);  // XOR with last bit
        num >>= 1;  // Right shift by 1
    }

    return parity;  // 1 -> Odd parity, 0 -> Even parity
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Parity of %u is %s\n", num, findParity(num) ? "Odd" : "Even");
    return 0;
}
