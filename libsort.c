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


