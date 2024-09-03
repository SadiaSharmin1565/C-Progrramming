//2: Write a C Program to check whether number is EVEN or ODD. (take number from user using scanf.)

#include<stdio.h>
int main(){
    int a;

    printf("Enter The Number :");
    scanf("%d",&a);

    if(a%2==0){
        printf("The Number Is Even");
    }else{
        printf("The Number Is Odd");
    }

return 0;
}

