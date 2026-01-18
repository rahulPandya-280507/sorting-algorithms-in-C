#ifndef SORTING_ALGO_H
#define SORTING_ALGO_H

#include <stdio.h>
#include <stdlib.h>

// function declarations
void printArray(int arr[], int size);
void bubbleSort(int arr[], int size);
void insertionSort(int arr[], int size);
void selectionSort(int arr[], int size);
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

#endif