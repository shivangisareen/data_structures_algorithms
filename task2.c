
//MERGE SORT


 
#include <stdio.h>
#include <ranlib.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

 

int left,right;
int count=0;
int swaps=0;
int desc=10000;


int array1[10000];   //no duplicates
int array2[10000];   //with duplicates
int array3[10000];   //ascending sorted array
int array4[10000];   //descending sorted array
int array5[10000];   //identical valued array

int array6[10];

 void merge(int a[],int left,int q,int right) {
     int b[10000];
     int i,j,k;
     k=0;
     i=left;
     j=q+1;

 
    while(i<=q && j<=right) {
        count++;
        if(a[i]<a[j]) {
            b[k]=a[i];
            k++;
            i++;
            swaps++;
        }
        else {
            b[k]=a[j];
            k++;
            j++;
            swaps++;
        }
    }
     
     while(i<=q) {
         b[k]=a[i];
         k++; i++;
         swaps++;
        
     }
     while(j<=right) {
         b[k]=a[j];
         k++; j++;
         swaps++;
    
     }
     for(i=right;i>=left;i--) {
         a[i]=b[--k];
     }
 
}
 
 
 void mergeSort(int a[],int left,int right) {
     int q;
     q=(left+right)/2;
     if(left<right) {
         mergeSort(a,left,q);
         mergeSort(a,q+1,right);
         merge(a,left,q,right);
     }
 }

void get_array(int array[]) {
    mergeSort(array, 0, 9999);
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
         
         array1[i]           = array1[randomIndex];
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
     
     
     printf("Unique Random Values\n");
     get_array(array1);
     
     printf("Random Values\n");
     get_array(array2);
     
     printf("Sorted Ascending Order\n");
     get_array(array3);
     
     printf("Sorted Descending Order\n");
     get_array(array4);
     
     printf("Uniform Array\n");
     get_array(array5);
    
     
     printf("Enter any ten values for the array:\n");
     for(int i=0; i<10;i++) {
         scanf("%d",&array6[i]);
     }
     
     mergeSort(array6, 0, 9);
     for(int i=0; i<10;i++) {
         printf("%d ",array6[i]);
     }
     
     
 }


