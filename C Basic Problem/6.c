//6: Write a C program to convert feet to inches. (take value from user)

#include<stdio.h>
int main(){
    float feet,inches;

    printf("Enter Value In Feet :");
    scanf("%f",&feet);

    inches=feet*12;
    printf("The Inches :%.2f",inches);

return 0;
}

