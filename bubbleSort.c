#include <stdio.h>

void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);

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
    bubbleSort(arr, size);
    printf("\nSorted array: ");
    printArray(arr, size);

    return 0;
}

void bubbleSort(int arr[], int size) {
    int temp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j]>arr[j+1]) {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}