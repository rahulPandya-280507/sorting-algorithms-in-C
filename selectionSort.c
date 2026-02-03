#include <stdio.h>

void printArray(int arr[], int size);
int selectionSort(int arr[], int size);

int main() {
    int arr[50], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array of size %d: ", size);
    for(int i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nUnsorted array: ");
    printArray(arr, size);
    printf("\nSorting array...");
    selectionSort(arr, size);
    printf("\nSorted array: ");
    printArray(arr, size);

    return 0;
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int selectionSort(int arr[], int size) {
    int temp;
    for(int i = 0; i< size-1; i++) {
        int smallestIndex = i;
        for(int j = i+1; j<size; j++) {
            if(arr[j] < arr[smallestIndex]) {
                smallestIndex = j;
            }
        }
        // swap arr[i] and arr[smallestIndex]
        temp = arr[smallestIndex];
        arr[smallestIndex] = arr[i];
        arr[i] = temp;
    }
}