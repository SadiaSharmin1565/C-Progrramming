#include <stdio.h>
#include <time.h>
int main() {
    clock_t starttime, endtime;
    double run_time;

    starttime = clock();

    int a[5]={5,4,3,2,1};
    int i,j,temp,numberofshift=0;

    printf("The Array Before Sorting -");
    for(i=0;i<5;i++){
       printf(" %d",a[i]);
   }

    for(i=1;i<5;i++){
        temp=a[i];
        j=i-1;

   while(j>=0&&a[j]>temp){
       a[j+1]=a[j];
       numberofshift++;
       j=j-1;
   }
   a[j+1]=temp;
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

