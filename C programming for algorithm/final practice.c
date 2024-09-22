#include<stdio.h>
int main(){
  int a[100],i,j,n,max,temp,numberofshift=0;
   printf("Enter The Number Of Element:");
   scanf("%d",&n);
   printf("\nEnter The Elements :");
   for(i=0;i<n;i++){
    scanf(" %d",&a[i]);
   }
   printf("\nBefore Sorting The Elements Are :");
   for(i=0;i<n;i++){
    printf(" %d",a[i]);
   }

   for(i=0;i<n;i++){
     max=i;
     for(j=i+1;j<n;j++){
        if(j>=0&&a[j]>a[max]){
            max=j;
        }
     }
     if(max!=i){
        temp=a[i];
        a[i]=a[max];
        a[max]=temp;
        numberofshift++;

     }
      printf("\nIteration =%d=",i+1);
      for( int k=0;k<n;k++){
            printf(" %d",a[k]);
      }
   }
    printf("\nAfter Sorting Elements Are:");
    for(i=0;i<n;i++){
           printf(" %d",a[i]);
    }
    printf("\nNumber Of Shift %d",numberofshift);

return 0;
}
