#include <stdio.h>
#include <math.h>

int findRightmostSetBitPosition(int num) {
    if (num == 0) return 0; // No set bit in 0
    return log2(num & -num) + 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int position = findRightmostSetBitPosition(num);
    
    if (position == 0)
        printf("No set bit found (number is zero).\n");
    else
        printf("Position of the rightmost set bit: %d\n", position);

    return 0;
}
