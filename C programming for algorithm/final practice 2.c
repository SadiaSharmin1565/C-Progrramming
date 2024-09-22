#include<stdio.h>
int n,maxweight;
float weight[100],benefit[100],itemratio[100];
void knapsack(int element,int maxw){
    int i,j,max,temp;
    for(i=0;i<n;i++){
        max=i;
        for(j=i+1;j<n;j++){
            if(j>=0&&benefit[j]/weight[j]>benefit[max]/weight[max]){
                max=j;
            }
        }
        if(max!=i){
            temp=weight[i];
            weight[i]=weight[max];
            weight[max]=temp;

            temp=benefit[i];
            benefit[i]=benefit[max];
            benefit[max]=temp;
        }
    }
    for(i=0;i<n;i++){
        if(maxw<weight[i]){
            break;
        }
        else{
            itemratio[i]=1;
            maxw=maxw-weight[i];
        }
    }
    if(i<n){
        itemratio[i]=maxw/weight[i];
    }

}
void totalprofit(){
    int i;
    float tprofit=0;
 for(i=0;i<n;i++){
    tprofit=tprofit+(itemratio[i]*benefit[i]);
 }
printf("Total Profit :%f",tprofit);
}
int main(){
   int i;
   printf("Enter The Number Of Item:");
   scanf("%d",&n);

   for(i=0;i<n;i++){
    printf("\nFor Item %d\nEnter Weight And Benefit :",i+1);
    scanf(" %f %f",&weight[i],&benefit[i]);
   }
   printf("\nEnter The Max Weight :");
   scanf("%d",&maxweight);
     knapsack(n,maxweight);
     totalprofit();
    return 0;
}
