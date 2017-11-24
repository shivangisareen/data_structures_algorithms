//
//  circular_queue.cpp
//  data_structures
//
//  Created by Shivangi Sareen on 08/03/17.
//  Copyright © 2017 Shivangi Sareen. All rights reserved.
//
/*

#include <stdio.h>
#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* front= new node;
node* rear= new node;

void enqueue(int x) {
    node* num= new node;
    num->data=x;
    if(front==NULL && rear==NULL) {
        rear=num;
        front=num;
        num->next=front;
        
    }
    else {
        rear->next=num;
        num->next=front;
        rear=rear->next;
    }
}

void dequeue() {
    node* temp=new node;
    temp=front;
    front=front->next;
    rear=front;
    delete temp;
}

void display() {
    node* temp=new node;
    temp=front;
    while(temp!=rear) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
}


int main() {
    front=NULL;
    rear=NULL;
    
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(9);
    enqueue(2);
    enqueue(7);
    display();
}
 */
