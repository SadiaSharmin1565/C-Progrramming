#include<stdio.h>
int start[100],finish[100];
char item[100];
void selectedactivities(int s[],int f[],int n,char e[]){
    int count=1,i=0,j;
    printf("\nActivity: %c Start Time: %d Finish Time: %d",e[0],s[0],f[0]);
    for(j=1;j<n;j++){
     if(s[j]>=f[i]){
        count++;
        printf("\nActivity: %c Start Time: %d Finish Time: %d",e[j],s[j],f[j]);
        i=j;
     }


    }
     printf("\nTotal number of selected activities: %d\n", count);


}
int main(){
    int n,i,j,temp,min;
    printf("Enter The Number Of Item :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Item:");
        scanf("%s",&item[i]);
        printf("Enter Start Time :");
        scanf("%d",&start[i]);
        printf("Enter Finish Time :");
        scanf("%d",&finish[i]);

    }

    printf("\n Before Sorting :");
    for(i=0;i<n;i++){
        printf("\n %c %d %d",item[i],start[i],finish[i]);
    }



    for(i=0;i<n;i++){
        min=i;
       for(j=i+1;j<n;j++){
         if(finish[j]<finish[min]){
            min=j;
         }
       }
       if(min!=i){
        temp=finish[i];
        finish[i]=finish[min];
        finish[min]=temp;

        temp=start[i];
        start[i]=start[min];
        start[min]=temp;

        temp=item[i];
        item[i]=item[min];
        item[min]=temp;
       }

    }
    printf("\nAfter Sorting :");
    for(i=0;i<n;i++){
        printf("\n %c %d %d",item[i],start[i],finish[i]);
    }

    selectedactivities(start,finish,n,item);

return 0;
}

