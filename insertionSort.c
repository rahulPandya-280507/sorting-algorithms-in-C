#include <stdio.h>

void insertionSort(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    // input array
    int arr[50], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array of size %d: ", size);
    for(int i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    // print unsorted array
    printf("\nUnsorted array: ");
    printArray(arr, size);
    // sort array
    printf("\nSorting array...");
    insertionSort(arr, size);
    // display sorted array
    printf("\nSorted array: ");
    printArray(arr, size);

    return 0;
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void insertionSort(int arr[], int size) {
    int key, j;
    for(int i = 0; i<size; i++) {
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}