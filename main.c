#include <stdio.h>
#include "libsort.h"
#include <stdlib.h>
#include <time.h>


int main()
{       
    
    int choice =7;
    time_t t;
    int size=120;
    int list[size];

    printf("******************************************************\n");
    printf("***************** SORTING ALGORITHM ******************\n");
    printf("******************************************************\n");
    printf("\n");

    printf("Hello Yehuda\n\n");

    srand((unsigned) time(&t));
    // int size = sizeof(list)/sizeof(list[0]);
    int i=0;
    while( i < size){
        list[i] = (int) (rand() % 5550);
        i++;
    }

    printf("Initial array :\n");
    printArray(list, size);

    printf("1. Bubble Sort\n");
    printf("2. Insertion Sort\n");
    printf("3. Selection Sort\n");
    printf("4. Merge Sort\n");
    printf("5. Quick Sort\n");
    
    while(choice > 5)
    {
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                bubbleSort(list, size);
                break;
            case 2:
                selectionSort(list, size);
                break;
            
            case 3:
                insertionSort(list, size);
                break;
            
            case 4:
                printf("Not implemented\n");
                return 0;
                break;
            
            case 5:
                printf("Not implemented\n");
                return 0;
                break;
            
            default:
                printf("Select a correct choice\n");
                break;
        }
    }


    printf("\nSorted array :\n");
    printArray(list, size);

    return 0;
}