//
//  queue_linkedlists.cpp
//  data_structures
//
//  Created by Shivangi Sareen on 05/03/17.
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

node* rear=new node;
node* front= new node;

void enqueue(int x) {
    node* num= new node;
    num->data=x;
    if(front==NULL && rear==NULL) {
        front=num;
        rear=num;
        num->next=NULL;
    }
    else {
        rear->next=num;
        rear=num;
        num->next=NULL;
    }
}

void dequeue() {
    node* temp=new node;
    temp=front;
    front=front->next;
    delete temp;
}

void display () {
    node* temp=new node;
    temp=front;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main() {

    front=NULL;
    rear=NULL;
    
    
    enqueue(1);
    enqueue(9);
    enqueue(3);
    enqueue(8);
    
    display();
    
    cout<<endl;
    
    dequeue();
    display();
}
*/
