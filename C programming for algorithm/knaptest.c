#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
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
            continue;
        } else {
            printf("Item Number: %d and Weight: %d\n", i, wt[i - 1]);
            maxProfit = maxProfit - val[i - 1];
            w = w - wt[i - 1];
        }
    }
}

int main() {
    int n, W;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    int wt[n], val[n];
    printf("Enter the weight and value of each item:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &wt[i], &val[i]);
    }

    printf("Enter the capacity of knapsack: ");
    scanf("%d", &W);

    printknapSack(W, wt, val, n);

    return 0;
}

