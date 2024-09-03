//8: C Program to find factorial of number 6

#include <stdio.h>
int main(void) {
    int i, num = 6, factorial = 1;

    for (i = 1;i <= num;i++){
        factorial = factorial * i;
       }
    printf("Factorial of %d: %d\n", num, factorial);
return 0;
}
