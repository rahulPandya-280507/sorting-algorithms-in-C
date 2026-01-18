// create a menu driven program for the user to choose what type of sorting algorithm he wants to perform

#include <stdio.h>
#include "sorting_algo.h"

int main() {
    int arr[50], size;
    int op, exitChoice, arrayChoice;
    int low, high;

    while (1) {

        // Input array
        printf("\nEnter the size of the array: ");
        scanf("%d", &size);

        printf("Enter the elements of the array:\n");
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }

        while (1) {
            printf("\nCurrent array:\n");
            printArray(arr, size);

            printf("\nChoose sorting algorithm:\n");
            printf("1. Bubble Sort\n");
            printf("2. Insertion Sort\n");
            printf("3. Selection Sort\n");
            printf("4. Quick Sort\n");
            printf("Enter here: ");
            scanf("%d", &op);

            switch (op) {
                case 1:
                    bubbleSort(arr, size);
                    break;
                case 2:
                    insertionSort(arr, size);
                    break;
                case 3:
                    selectionSort(arr, size);
                    break;
                case 4:
                    low = 0;
                    high = size - 1;
                    quickSort(arr, low, high);
                    break;
                default:
                    printf("Invalid choice!\n");
                    continue;
            }

            printf("Sorted array:\n");
            printArray(arr, size);

            // 🔹 Ask exit AFTER sorting
            printf("\nDo you want to exit?\n");
            printf("1. Yes\n2. No\nEnter choice: ");
            scanf("%d", &exitChoice);

            if (exitChoice == 1) {
                printf("Exiting program...\n");
                return 0;
            }

            // 🔹 Ask array choice
            printf("\nDo you want to keep the same array?\n");
            printf("1. Yes\n2. No\nEnter choice: ");
            scanf("%d", &arrayChoice);

            if (arrayChoice == 1) {
                continue;   // same array → sorting menu again
            } else {
                break;      // new array → outer loop
            }
        }
    }

    return 0;
}
