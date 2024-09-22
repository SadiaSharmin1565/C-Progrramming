#include<stdio.h>
int main(){
    int a[100],n,i,j,temp;
    int numberofshift=0;

    printf("Enter The Number Of elements :");
    scanf("%d",&n);

    printf("\nEnter The Elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nThe Array Before Sorted - ");
     for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    for(i=1;i<=n;i++){
       temp=a[i];
       j=i-1;
       while(j>=0&&a[j]>temp){
        a[j+1]=a[j];
        j=j-1;
        numberofshift++;
        printf("\nAfter shift where i=%d",i);
       printf("Array Position Is -");
       }
       a[j+1]=temp ;
    }
printf("\nThe Array After Sorted - ");
 for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
printf("\nNumber Of Shifting :%d",numberofshift);
    return 0;
}
