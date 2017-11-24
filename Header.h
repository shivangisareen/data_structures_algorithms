//
//  Header.h
//  data_structures
//
//  Created by Shivangi Sareen on 02/05/17.
//  Copyright © 2017 Shivangi Sareen. All rights reserved.
//

#ifndef Header_h
#define Header_h


#endif /* Header_h */
#include<iostream>

using namespace std;

struct node1 {
    int data;
    node1* next;
};

node1* rear= new node1;
node1* front= new node1;

void enqueue (int x) {
    node1* num=new node1;
    num->data=x;
    num->next=NULL;
    
    if(front==NULL && rear==NULL) {
        front=num;
        rear=num;
    }
    else {
        rear->next=num;
        rear=num;
    }
}

void dequeue() {
    node1* temp=new node1;
    temp=front;
    cout<<temp->data<<" ";
    front=front->next;
    delete temp;

}


