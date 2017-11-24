//
//  stack_array.cpp
//  data_structures
//
//  Created by Shivangi Sareen on 08/03/17.
//  Copyright © 2017 Shivangi Sareen. All rights reserved.

// FIRST IN LAST OUT

/*
#include <stdio.h>
#include<iostream>
using namespace std;

int stack[5];
int size;
int top=-1;


void push(int x) {
    if(top==-1) {
        top++;
        stack[top]=x;
    }
    else {
        if(top<size-1) {
            top++;
            stack[top]=x;
        }
        else {
            cout<<"Stack overflow"<<endl;
        }
    }
}

void pop() {
    top--;
}


void display() {
    for(int i=top;i>=0;i--) {
     cout<<stack[i]<<endl;
    }
}


int main() {
    
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    
    push(3);
    push(6);
    push(5);
    push(1);
    push(9);
    push(0);
    display();
    cout<<endl;
    cout<<endl;
    pop();
    pop();
    display();
}
*/
