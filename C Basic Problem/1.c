//1: Write a C program to find Sum and Average of two numbers.(take two number from user using scanf.)

#include<stdio.h>
int main(){
    int x,y,sum=0;
    float average;

    printf("Enter First Number :");
    scanf("%d",&x);
    printf("Enter Second Number :");
    scanf("%d",&y);

    sum=(x+y);
    printf("The Sum Is : %d\n",sum);
    average=(float)sum/2;
    printf("The Average Is :%.2f",average);

return 0;
}
