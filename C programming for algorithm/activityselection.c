#include <stdio.h>

void printMaxActivities(int s[], int f[], int n) {
    int count = 1;
    int i = 0;

    printf("Selected Activities:\n");
    printf("Activity %d: Start Time = %d, Finish Time = %d\n", 1, s[0], f[0]);

    for (int j = 1; j < n; j++) {
        if (s[j] >= f[i]) {
            count++;
            printf("Activity %d: Start Time = %d, Finish Time = %d\n", j + 1, s[j], f[j]);
            i = j;
        }
    }

    printf("Total number of selected activities: %d\n", count);
}

void selectionSort(int s[], int f[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (f[j] < f[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = f[minIndex];
            f[minIndex] = f[i];
            f[i] = temp;

            temp = s[minIndex];
            s[minIndex] = s[i];
            s[i] = temp;
        }
    }
}

int main() {
    int n;

    printf("Enter the number of activities: ");
    scanf("%d", &n);

    int s[n], f[n];

    printf("Enter the start and finish times for each activity:\n");
    for (int i = 0; i < n; i++) {
        printf("Activity %d: ", i + 1);
        scanf("%d %d", &s[i], &f[i]);
    }

    printf("\nActivities before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("Activity %d: Start Time = %d, Finish Time = %d\n", i + 1, s[i], f[i]);
    }

    selectionSort(s, f, n); // Sorting activities based on finish times using selection sort

    printf("\nActivities after sorting based on finish time:\n");
    for (int i = 0; i < n; i++) {
        printf("Activity %d: Start Time = %d, Finish Time = %d\n", i + 1, s[i], f[i]);
    }

    printMaxActivities(s, f, n);

    return 0;
}
