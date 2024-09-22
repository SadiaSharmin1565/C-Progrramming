#include <stdio.h>
#include <time.h>
int main() {
    clock_t starttime, endtime;
    double run_time;

    starttime = clock();

    int a[5]={9,13,15,11,2};
    int i,j,min,temp,numberofshift=0;

    printf("The Array Before Sorting -");
    for(i=0;i<5;i++){
       printf(" %d",a[i]);
   }

     for(i=0;i<5;i++){
         min=i;
           for(j=i+1;j<5;j++){
               if(a[j]<a[min]){
                   min=j;
               }
           }
                if(min!=i){
                    temp=a[i];
                    a[i]=a[min];
                    a[min]=temp;
                    numberofshift++;
                }
     }

printf("\nThe Array After Insertion Sorting -");
   for(i=0;i<5;i++){
       printf(" %d",a[i]);
  }

     printf("\nTotal Number Of Shifting - %d",numberofshift);

    endtime = clock();
    run_time = ((double) (endtime - starttime)) / CLOCKS_PER_SEC;

    printf("\nRun time: %f seconds\n", run_time);

    return 0;
}



