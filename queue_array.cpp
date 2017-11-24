//
//  queue_array.cpp
//  data_structures
//
//  Created by Shivangi Sareen on 02/03/17.
//  Copyright © 2017 Shivangi Sareen. All rights reserved.
//

//removed from front
//added to the rear
/*
 
#include <stdio.h>
#include<iostream>
using namespace std;

int rear=-1;
int front=-1;
int size;
int queue[50];

void enqueue(int x) {
    if(rear+1<size) {
     if(rear==-1 && front==-1) {
        rear++;
        front++;
    }
    else {
        rear++;
    }
    queue[rear]=x;
    
 }
    else {
        cout<<"Queue overflow"<<endl;
}
}

void dequeue() {
    if(rear==front) {
        rear=front=-1;
    }
    else {
        front++;
    }
}

void display() {
  for(int i=front;i<=rear;i++) {
    cout<<queue[i]<<" ";
 }
 
}

int main() {
    
    cout<<"Enter size of queue"<<endl;
    cin>>size;
    
    
    enqueue(2);
    enqueue(12);
    enqueue(52);
    enqueue(62);
    enqueue(92);
    display();
    cout<<endl;
    dequeue();
    dequeue();
 
    
    display();
    
}
 
 
*/

