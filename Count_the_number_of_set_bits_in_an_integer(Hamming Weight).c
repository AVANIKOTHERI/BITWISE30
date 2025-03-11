#include <stdio.h>

// Function to count set bits using Brian Kernighan’s Algorithm
int countSetBits(unsigned int num) {
    int count = 0;
    while (num) {
        num &= (num - 1);  // Clear the rightmost set bit
        count++;
    }
    return count;
}

int main() {
    unsigned int num = 29; // Binary: 11101 (4 set bits)
    printf("Number of set bits: %d\n", countSetBits(num));
    return 0;
}
