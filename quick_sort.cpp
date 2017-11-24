//
//  quick_sort.cpp
//  data_structures
//
//  Created by Shivangi Sareen on 17/03/17.
//  Copyright © 2017 Shivangi Sareen. All rights reserved.
//
/*
#include <stdio.h>
#include<iostream>
using namespace std;

int a[5];
int left;  //first index of the array
int right;  //last index of the array


int partition(int a[],int left,int right) {
    int i,j,pivot,temp;
    pivot=a[left];
    i=left;
    j=right;
    while(1) {
        while(a[i]<pivot && a[i]!=pivot) {
            i++;
        }
        while(a[j]>pivot && a[j]!=pivot) {
            j--;
        }
        
        if(i<j) {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else
            return j;
    }
}

void quickSort(int a[],int left,int right) {
    if(left<right) {
        int q;
        q=partition(a,left,right);
        quickSort(a,left,q);
        quickSort(a,q+1,right);
    }
}

int main() {
    cout<<"Enter elements of the array"<<endl;
    for(int z=0; z<5 ;z++) {
        cin>>a[z];
    }
    
    quickSort(a, 0, 4);
    
    for(int z=0;z<5;z++) {
        cout<<a[z]<<" ";
    }
    
}
 */
