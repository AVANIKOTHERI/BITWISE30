#include <stdio.h>

int xorFrom1ToN(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;  // Case: n % 4 == 3
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("XOR of numbers from 1 to %d is: %d\n", n, xorFrom1ToN(n));

    return 0;
}
