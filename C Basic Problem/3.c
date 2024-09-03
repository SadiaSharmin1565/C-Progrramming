//3: Write a C Program to calculate AREA of rectangle. (take value from user using scanf.)

#include<stdio.h>
int main(){
    float length,width,area;

    printf("Enter Length Of The Rectangle :");
    scanf("%f",&length);
    printf("Enter Width Of The Rectangle :");
    scanf("%f",&width);

    area=length*width;
    printf("Area Is :%.2f",area);

return 0;
}
