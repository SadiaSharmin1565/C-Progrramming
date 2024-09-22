#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
             int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int a[50];
    int i, n, numberofshift = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("\nEnter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nThe array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    quickSort(a, 0, n - 1);

    printf("\nThe array after sorting using Quick Sort: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
