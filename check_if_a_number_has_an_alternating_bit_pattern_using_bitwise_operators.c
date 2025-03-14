#include <stdio.h>

// Function to check if a number has alternating bits
int hasAlternatingBits(unsigned int num) {
    unsigned int xorVal = num ^ (num >> 1); // XOR num with its right-shifted version
    return (xorVal & (xorVal + 1)) == 0;    // Check if xorVal is all 1s
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    if (hasAlternatingBits(num))
        printf("%u has alternating bits.\n", num);
    else
        printf("%u does NOT have alternating bits.\n", num);

    return 0;
}
