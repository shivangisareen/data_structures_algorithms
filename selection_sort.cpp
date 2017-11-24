//
//  selection_sort.cpp
//  data_structures
//
//  Created by Shivangi Sareen on 17/03/17.
//  Copyright © 2017 Shivangi Sareen. All rights reserved.
//
/*
 
#include <stdio.h>
#include<iostream>
using namespace std;

int main() {
    
    int array[5];
    int i,j,temp,min;
    
    cout<<"Enter 5 values into the array"<<endl;
    for(i=0;i<5;i++) {
        cin>>array[i];
    }
    //selection sort
    for(i=0;i<5-1;i++) {  //i< (size of array) -1 beacuse the last element that will be left will not chnage its place
        min=i;
        for(j=i+1;j<5;j++) {
            if(array[min]>array[j]) {
                min=j;            }
        }
        temp=array[min];
        array[min]=array[i];
        array[i]=temp;
        
    }
    
    for(i=0;i<5;i++) {
        cout<<array[i]<<" ";
    }
}

*/
