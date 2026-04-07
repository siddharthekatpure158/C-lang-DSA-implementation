#include <stdio.h>

void countingSort(int arr[], int n) {
    int i, j, max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];

    int count[max + 1];
    for (i = 0; i <= max; i++)
        count[i] = 0;

    for (i = 0; i < n; i++)
        count[arr[i]]++;

    int k = 0;
    for (i = 0; i <= max; i++)
        for (j = 0; j < count[i]; j++)
            arr[k++] = i;
}

int main() {
    int arr[] = {9, 4, 1, 7, 9, 1, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    countingSort(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
