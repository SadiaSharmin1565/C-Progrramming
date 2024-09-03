//10. Write a C Program to find area and circumference [perimeter] of circle.

#include <stdio.h>
#define PI 3.14
int main() {
    double r, a, c;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);
    a = PI * r * r;
    c = 2 * PI * r;
    printf("Area of the circle: %.2lf\n", a);
    printf("Circumference of the circle: %.2lf\n", c);
return 0;
}
