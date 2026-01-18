/*
    Date: 15/01/2026
    Author: Rahul J. Pandya
    Time Complexity = O(n^2)
    Stable
    Non - Recursive
    Not adaptive by default --> but can be made adaptive
    Once adaptive: Time Compelxity = O(n)
*/

#include <stdio.h>

void printArray(int arr[], int size);
void bubbleSort(int arr[], int size);

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[50];
    printf("Enter the elements of the array: ");
    for (int i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Unsorted array: \n");
    printArray(arr, size);
    bubbleSort(arr, size);
    printf("Sorted array: \n");
    printArray(arr, size);
    
    return 0;
}

void printArray(int arr[],int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size) {
    int temp, isSorted = 0;
    for(int i = 0; i<size-1; i++) { 
        printf("Working on pass number: %d\n", i+1); 
        isSorted = 1;    //for no. of passes
        for(int j = 0; j< size - 1 - i; j++) {      //for comparison in each pass
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted) {
            return;
        }
    }
}