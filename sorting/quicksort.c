#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return (i + 1);   
}

void quickSort(int arr[], int start, int end) {
    if (start < end) {
        int pi = partition(arr, start, end);

        quickSort(arr, start, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}

// quicksort(arr,0,4)-> start=0,end=4 pi=partition(arr,0,4); pivot=arr[end] end=4 (pivot=1)  int i=-1; j=0;j<4;0<4(true) 
// if(arr[j]<pivot) 4<1 j=1 j=2 j=3 j=4 arr={1,2,5,3,4} swap(4,1) return i+1(0+1) return 1; int pi=1; quicksort(arr,0,0) partition(arr,0,0)
// pi=1 quicksort(arr,2,4); int pi=partition(arr,2,4) 



int main() {
    int arr[] = { 4, 2, 5, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
