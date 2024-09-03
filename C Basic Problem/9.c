//9: C program find Remainder without using modulus operator.

#include <stdio.h>
int main(void) {
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend - quotient * divisor;

    printf("Remainder: %d\n", remainder);
return 0;
}
