#include <stdio.h>

void printArray(int arr[], int size);
int quickSort(int arr[], int st, int end);
int partition(int arr[], int st, int end);

int main() {
    // input array
    int arr[50], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array of size %d: ", size);
    for(int i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    // printing statements
    printf("\nUnsorted array: ");
    printArray(arr, size);
    printf("\nSorting array...");
    quickSort(arr, 0, size-1);
    printf("\nSorted array: ");
    printArray(arr, size);

    return 0;
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int quickSort(int arr[], int st, int end) {
    if(st < end) {
        int pvtIdx = partition(arr, st, end);
        quickSort(arr, st, pvtIdx-1);
        quickSort(arr, pvtIdx+1, end);
    } else {
        return 0;
    }
}

int partition(int arr[], int st, int end) {
    int temp;
    int idx = st - 1, pivot = arr[end];
    for(int j = st; j<end; j++) {
        if(arr[j] < pivot) {
            idx++;
            // swap arr[j] & arr[idx]
            temp = arr[idx];
            arr[idx] = arr[j];
            arr[j] = temp;
        }
    }
    idx++;
    // swap arr[end] & arr[idx]
    temp = arr[idx];
    arr[idx] = arr[end];
    arr[end] = temp;
    return idx;
}