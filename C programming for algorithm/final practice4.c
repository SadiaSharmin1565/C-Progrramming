#include<stdio.h>

int partition(int a[], int lb, int ub) {
    int pivot = a[lb];
    int start = lb;
    int end = ub;

    while(start < end) {
        while(a[start] <= pivot) {
            start++;
        }
        while(a[end] > pivot) {
            end--;
        }
        if(start < end) {
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }

    int temp = a[end];
    a[end] = a[lb];
    a[lb] = temp;

    return end;
}

// Function to implement quicksort
void quicksort(int ar[], int lb, int ub) {
    if(lb < ub) {
        int loc = partition(ar, lb, ub);
        quicksort(ar, lb, loc - 1);
        quicksort(ar, loc + 1, ub);
    }
}

int main() {
    int a[100], n, i;

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);
    printf("Enter The Elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Elements Before Sorting: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    quicksort(a, 0, n - 1);

    printf("\nElements After Sorting: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
