//7: Write a C Program to reverse a number entered by user.

#include<stdio.h>
int main()
{
    int x, reverse=0, reminder;
    printf("Enter a number: ");
    scanf("%d", &x);
    while(x!=0)
    {
        reminder=x%10;
        reverse=reverse*10+reminder;
        x=x/10;
    }
    printf("Reverse Number is: %d",reverse);
return 0;
}
