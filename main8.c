#include <stdio.h>

int main() {
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The digits are: ");

    // Find the place value multiplier
    int divisor = 1;
    while (num / divisor >= 10) {
        divisor *= 10;
    }

    // Print digits separately
    while (divisor > 0) {
        digit = num / divisor;
        printf("%d ", digit);
        num = num % divisor;
        divisor = divisor / 10;
    }

    printf("\n");
    return 0;
}
