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

int main () {
    int array[50];
    int size,flag=0,num,position=0;
    
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    
    cout<<"Enter elements of the array"<<endl;
    for(int i=0;i<size;i++) {
        cin>>array[i];
    }
    
    cout<<"Enter element to be deleted" <<endl;
    cin>>num;
    
    for(int i=0;i<size;i++) {
        if(array[i]==num) {
            flag=1;
            position=i;
            break;
        }
    }
    
    if(flag==0) {
        cout<<"Element not found"<<endl;
    }
    else {
        for(int i=position;i<size;i++) {
            array[i]=array[i+1];
        }
        for(int i=0;i<size-1;i++) {
            cout<<array[i]<<" ";
        }
    }
    
}
*/

