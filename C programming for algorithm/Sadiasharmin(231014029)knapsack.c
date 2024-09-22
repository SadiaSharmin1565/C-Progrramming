#include <stdio.h>

float profit[100];
float weight[100];
float itemFraction[100];

void swap(float x,float y){
    float temp = x;
    x = y;
    y = temp;
}

void knapsack(int maxWeight,int n){
    int MAX,i;

     for(i=1;i<=n-1;i++){
        MAX = i;
        for(int j=i+1;j<=n;j++){
            if (profit[j]/weight[j]>profit[MAX]/weight[MAX]){
                MAX=j;
            }
        }

        if(MAX!=i){
            swap(profit[MAX],profit[i]);
            swap(weight[MAX],weight[i]);
        }
    }
    int capacity=maxWeight;
    for(int i=1;i<=n;i++){
        if (weight[i] > capacity){
            break;
        }
        itemFraction[i]=1;
        capacity=capacity-weight[i];
    }
    if(i<=n){
        itemFraction[i]=capacity/weight[i];
    }
}

void profit_calculation(int n) {
    float totalProfit = 0;
    for(int i=1;i<=n;i++){
        totalProfit = totalProfit+(itemFraction[i] * profit[i]);
    }
    printf("Total Profit: %.2f\n",totalProfit);
}

int main(){
    int n, maxWeight,i;
    printf("Enter the number of items: ");
    scanf("%d",&n);
    printf("Enter the maximum weight: ");
    scanf("%d",&maxWeight);
    printf("Enter the weight and profit for each item:\n");
    for(int i=1;i<=n;i++){
        printf("Item %d: ",i);
        scanf("%f %f",&weight[i],&profit[i]);
    }
    knapsack(maxWeight,n);
    profit_calculation(n);
    return 0;
}





