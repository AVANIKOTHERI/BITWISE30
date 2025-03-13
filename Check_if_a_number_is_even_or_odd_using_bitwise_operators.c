#include <stdio.h>

void checkEvenOdd(int num) {
    if (num & 1)
        printf("%d is Odd\n", num);
    else
        printf("%d is Even\n", num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    checkEvenOdd(num);
    
    return 0;
}
