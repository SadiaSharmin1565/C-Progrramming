//4: C program to convert temperature from Fahrenheit to Celsius.

#include<stdio.h>
int main(){
    float farenheit,celcius;

    printf("Enter Temperature In Farenheit :");
    scanf("%f",&farenheit);

    celcius=(farenheit-32)*5/9;
    printf("Temperature In Celcius :%.3f",celcius);

return 0;
}
