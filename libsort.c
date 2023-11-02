#include <stdio.h>
#include "libsort.h"

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int array[], int size){
    for(int i=0; i<size; i++)
        printf("%d ", array[i]);
    printf("\n\n");
}

void bubbleSort(int array[], int size)
{
    for( int i=0 ; i < size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(array[j]>array[j+1]){
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

void selectionSort(int array[], int size)
{
    for(int i=0; i<size;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[minIndex] > array[j])
            {
                minIndex = j;
            }
        }

        if(i != minIndex)
            swap(&array[i], &array[minIndex]);
    }
}


// https://www.geeksforgeeks.org/insertion-sort/
void insertionSort(int array[], int size)
{
    for(int i = 1 ; i < size ; i++)
    {
        int key = array[i];
        int j = i-1;

        while(j >= 0 && array[j] > key)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1]=key;
    }
}










