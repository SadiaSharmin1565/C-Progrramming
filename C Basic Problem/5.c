/*5: Write a C Program to check triangle is a equilateral, isosceles or scalene.
[ Note: A triangle is equilateral triangle, If it’s sides are equal. A triangle is
isosceles triangle, If any two sides of a triangle are equal.A triangle is scalene
triangle, If none of the sides are equal.]*/

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter First Side:");
    scanf("%d",&a);
    printf("Enter Second Side:");
    scanf("%d",&b);
    printf("Enter Third Side:");
    scanf("%d",&c);

    if(a == b && b == c){
            printf("The triangle is an equilateral.\n");
    }else if (a == b || b == c || a == c){
            printf("The triangle is an isosceles.\n");
    }else{
        printf("The triangle is a scalene.\n");
    }






return 0;
}
