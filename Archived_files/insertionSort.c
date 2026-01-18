/*
    Author: Rahul J. Pandya
    Time Complexity: BCS [O(n)]     ;      WCS[O(n^2)]
    stability: stable
    adaptive = yes
*/

/*
Algorithm for the insertion sort:
    1. 
*/

#include <stdio.h>

void insertionSort(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    // 4 5 6 7 3 2
    int arr[50], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array of size %d: ", size);
    for(int i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The array you entered is: \n");
    printArray(arr, size);
    printf("Sorting the array...\n");
    insertionSort(arr, size);
    printf("The sorted array is: \n");
    printArray(arr, size);
    return 0;
}

void insertionSort(int arr[], int size) {
    int key, j;
    // loop for passes
    for(int i = 1; i<size; i++) {
        key = arr[i];
        j = i-1;
        // loop for each pass
        while(j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printArray(int arr[],int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}