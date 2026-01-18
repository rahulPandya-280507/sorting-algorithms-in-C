#include <stdio.h>

void printArray(int arr[], int size);
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

int main()
{
    int arr[50], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array of size %d: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Unsorted array: \n");
    printArray(arr, size);
    printf("Sorting array....\n");
    quickSort(arr, 0, size - 1);
    printf("Sorted array: \n");
    printArray(arr, size);

    return 0;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
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