#include "sorting_algo.h"

void printArray(int arr[],int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size) {
    int temp, isSorted = 0;
    for(int i = 0; i<size-1; i++) { 
        // printf("Working on pass number: %d\n", i+1); 
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

void selectionSort(int arr[], int size) {
    int indexOfMin, temp;
    for(int i = 0; i<size-1; i++) {
        indexOfMin = i;
        for(int j = i+1; j<size; j++) {
            if(arr[j] < arr[indexOfMin]) {
                indexOfMin = j;
            }
        }
        // swap arr[i] and indexOfMin
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}

void quickSort(int arr[], int low, int high) {
    int partitionIndex; // index of pivot after partition
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);  // sort left array
        quickSort(arr, partitionIndex + 1, high); // sort right array
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    // swap arr[low] and arr[j]
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}