//
//  quick_sort.cpp
//  data_structures
//
//  Created by Shivangi Sareen on 17/03/17.
//  Copyright © 2017 Shivangi Sareen. All rights reserved.
//
// QUICK SORT
/*

#include <stdio.h>
#include <ranlib.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int left;  //first index of the array
int right;  //last index of the array

int desc=10000;

int count=0;
int swaps=0;



int array1[10000];   //no duplicates
int array2[10000];   //with duplicates
int array3[10000];   //ascending sorted array
int array4[10000];   //descending sorted array
int array5[10000];   //identical valued array

int array6[10];



int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low - 1;
    int j = high + 1;
    int t;
    while(1)
    {
        do {
            i++;
            count++;
        } while (a[i] < pivot);
        
        do {
            j--;
            count++;
        } while (a[j] > pivot);
        
        if(i >= j)
            return j;
        
        t=a[i];
        a[i]=a[j];
        swaps++;
        a[j]=t;
        
    }
}

// Quicksort routine
void quickSort(int a[], int low, int high)
{
    // base condition
    if(low >= high)
        return;
    
    // rearrange the elements across pivot
    int pivot = partition(a, low, high);
    
    // recurse on sub-array containing elements that are less than pivot
    quickSort(a, low, pivot);
    
    // recurse on sub-array containing elements that are more than pivot
    quickSort(a, pivot + 1, high);
}




void get_array(int array[], int l, int r) {
    quickSort(array, l, r);
    printf("Total number of comaparisons: %d\n",count);
    printf("Total number of swaps: %d\n",swaps);
    printf("\n");
    count=0;
    swaps=0;
    
}

int main() {
    
    for(int i=0; i<10000; i++) {
        array1[i]=i;
    }
 
    for (int i = 0; i < 10000; i++) {    // shuffle array
        int temp = array1[i];
        int randomIndex = rand() % 10000;
 
        array1[i]=array1[randomIndex];
        array1[randomIndex] = temp;
    }
    
    for(int i=0; i<10000; i++) {        //creates array with duplicates
        array2[i]=rand()%10000;
    }
    
    for(int i=0; i<10000; i++) {       //creates sorted ascending order array
        array3[i]=i;
    }
    
    for(int i=0; i<10000; i++) {      //creates sorted descending order array
        array4[i]=desc;
        desc--;
    }
    
    for(int i=0; i<10000; i++) {     //creates array with same value
        array5[i] = 3;
    }
    
    
    printf("Enter any ten values for the array:\n");
    for(int i=0; i<10;i++) {
        scanf("%d",&array6[i]);
    }
    
    get_array(array6,0,9);
    for(int i=0;i<10;i++) {
        printf("%d ",array6[i]);
    }
    printf("\n\n\n\n\n");
    

 
    printf("Unique Random Values\n");
    get_array(array1,0,9999);
    
    printf("Random Values\n");
    get_array(array2,0,9999);
    
    printf("Sorted Ascending Order\n");
    get_array(array3,0,9999);
    
    printf("Sorted Descending Order\n");
    get_array(array4,0,9999);
    
    printf("Uniform Array\n");
    get_array(array5,0,9999);
    
   
}
*/

