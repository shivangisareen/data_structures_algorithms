//
//  merge_sort.cpp
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
int left,right;


void merge(int a[],int left,int q,int right) {
    int b[5];
    int i,j,k;
    k=0;
    i=left;
    j=q+1;
    
    while(i<=q && j<=right) {
        if(a[i]<a[j]) {
            b[k]=a[i];
            k++;
            i++;
        }
        else {
            b[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=q) {
        b[k]=a[i];
        k++; i++;
    }
    while(j<=right) {
        b[k]=a[j];
        k++; j++;
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


int main() {

    cout<<"Enter elements of the array"<<endl;
    for(int z=0;z<5;z++) {
        cin>>a[z];
    }
    
    mergeSort(a, 0, 4);
    
    for(int z=0;z<5;z++) {
        cout<<a[z]<<" ";
    }
}
 */   
