//
//  insert.cpp
//  introduction
//
//  Created by Shivangi on 14/01/17.
//  Copyright © 2017 Shivangi. All rights reserved.
//

/*
 
#include <iostream>
using namespace std;


int main() {
    int num,element,position;
    int array[50];
    
    cout<<"Enter size of the array"<<endl;
    cin>>num;
    
    cout<<"Enter values into the array"<<endl;
    for(int i=0;i<num;i++) {
        cin>>array[i];
        
    }
    
    for(int i=0; i<num;i++) {
        cout<<array[i]<<" ";
    }
    
    cout<<endl<<"Enter element to be inserted"<<endl;
    cin>>element;
    
    cout<<"Where do you want to insert the element?(Enter index number)"<<endl;
    cin>>position;
    
    for (int i=num; i>position; i--) {
        array[i]=array[i-1];
    }
    array[position]=element;
    
    for(int i=0;i<num+1;i++) {
     cout<<array[i]<<" ";
    }
    
}
 OR
 //
 //  linear_search.cpp
 //  data_structures
 //
 //  Created by Shivangi Sareen on 12/03/17.
 //  Copyright © 2017 Shivangi Sareen. All rights reserved.
 //
 
 #include <stdio.h>
 #include<iostream>
 using namespace std;
 
 int main () {
 
 int array[50];
 int size;
 int position;
 int num;
 
 cout<<"Enter size of the array"<<endl;
 cin>>size;
 
 cout<<"Enter elements of the array"<<endl;
 for(int i=0;i<size;i++) {
 cin>>array[i];
 }
 
 cout<<"Enter element to be added and its postion(index number)"<<endl;
 cin>>num;
 cin>>position;
 
 for(int i=size-1; i>=position;i--) {
 array[i+1]=array[i];
 }
 array[position]=num;
 
 for(int i =0;i<size+1;i++) {
 cout<<array[i]<<" ";
 
 }
 
 }


*/
