#include <stdio.h>

int max(int a, int b) {
    if(a>b){
        return a;
    }else{
        return b;
    }
}

void printknapSack(int W, int wt[], int val[], int n) {
    int i, w;
    int K[n + 1][W + 1];

    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                K[i][w] = 0;
            } else if (wt[i - 1] <= w) {
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            } else {
                K[i][w] = K[i - 1][w];
            }
        }
    }

    int maxProfit = K[n][W];
    printf("The maximum profit is: %d\n", maxProfit);

    printf("\nThe Items are: \n\n");
    w = W;
    for (i = n; i > 0 && maxProfit > 0; i--) {
        if (maxProfit == K[i - 1][w]) {

        } else {
            printf("Item: %d and Weight: %d\n", i, wt[i - 1]);
            maxProfit = maxProfit - val[i - 1];
            w = w - wt[i - 1];
        }
    }
}

int main() {

    int item, maxWeight,i;
    printf("Enter the number of items: ");
    scanf("%d",&item);
    int weight[item];
    int profit[item];
    printf("Enter the maximum weight: ");
    scanf("%d",&maxWeight);
    printf("Enter the weight and profit for each item:\n");
    for(int i=0;i<item;i++){
        printf("Item %d: ",i+1);
        scanf("%d %d",&weight[i],&profit[i]);
    }

    printknapSack(maxWeight, weight, profit, item);

    return 0;
}
