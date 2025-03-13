#include <stdio.h>

int haveOppositeSigns(int x, int y) {
    return (x ^ y) < 0;  // True if MSB is 1 (opposite signs)
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (haveOppositeSigns(x, y))
        printf("%d and %d have opposite signs.\n", x, y);
    else
        printf("%d and %d have the same sign.\n", x, y);

    return 0;
}
