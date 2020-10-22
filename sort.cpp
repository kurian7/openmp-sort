#include <iostream>						// For IO
#include <omp.h>						// For openmp
#include <stdlib.h>						// For exit(0)
#include "sort.h"
#include "quicksort.h"					// For quicksort
#include "pquick.h"
#include "mergesort.h"					// For mergesort
#include "radixsort.h"					// For radixsort
#include "othersort.h"					// For othersort

using namespace std;
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  

void pSort(dataType *data, int size, SortType sorter){
	switch (sorter){
		case QUICK:
			pquicksort(data,size);
			break;
		case MERGE:		
			mergesort(data,size);
			break;
		case RADIX:
			radixsort(data,size);
			break;
		default:
			quicksort(data,size);
	}
}

