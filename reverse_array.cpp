//
//  reverse_array.cpp
//  introduction
//
//  Created by Shivangi on 14/01/17.
//  Copyright © 2017 Shivangi. All rights reserved.
//
/*

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int size,temp;
    int array[50];
    
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    
    cout<<"Enter elements of the array"<<endl;
    for(int i=0;i<size;i++) {
        cin>>array[i];
    }
    
    cout<<"Original array is"<<endl;
    for(int i=0;i<size;i++) {
        cout<<array[i]<<" ";
    }
    
    for(int f=0,l=size-1 ;f<=l; f++,l--) {
        temp=array[f];
        array[f]=array[l];
        array[l]=temp;
    }
    
    cout<<endl<<"The reversed array is"<<endl;
    for (int i=0;i<size;i++) {
        cout<<array[i]<<" ";
        
    }
    cout<<endl;
}
*/
