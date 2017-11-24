//
//  linear_search.cpp
//  data_structures
//
//  Created by Shivangi Sareen on 12/03/17.
//  Copyright © 2017 Shivangi Sareen. All rights reserved.
//
/*
#include <stdio.h>
#include<iostream>
using namespace std;

int main() {
    
    int array[50];
    int temp,size,low,high,mid,num, flag=0;
    
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    
    cout<<"Enter elements"<<endl;
    for(int i=0;i<size;i++) {
        cin>>array[i];
    }
    //BUBBLE_SORT O(n^2)
 
    for(int i=0;i<size;i++) {
        for(int j=0;j<size-1;j++) {
            if(array[j]>array[j+1]) {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
    //BINARY SEARCH
    for(int i=0;i<size;i++) {
        cout<<array[i];
    }
    cout<<endl<<"Enter element to be searched"<<endl;
    cin>>num;
    
    low=0; high=size-1;
    while(low<=high && flag==0) {
        mid=(low+high)/2;
        if(num<array[mid]) {
            high=mid-1;
        }
        else if (num>array[mid]) {
            low=mid+1;
        }
        else if (num==array[mid]) {
            cout<<"Element found at postion:"<<mid+1;
            flag=1;
        }
    }
    
    if(flag==0) {
        cout<<"Element not found"<<endl;
        
    }
}

*/


