//
//  stack_linkedlists.cpp
//  data_structures
//
//  Created by Shivangi Sareen on 08/03/17.
//  Copyright © 2017 Shivangi Sareen. All rights reserved.
//
/*
 
#include <stdio.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* top=new node;

void push(int x) {
    node* num= new node;
    num->data=x;
    
    if(top==NULL) {
        top=num;
        num->next=NULL;
    }
    else {
        num->next=top;
        top=num;
        
    }
}

void display() {
    node* temp=new node;
    temp=top;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    
    }
}

void pop() {
    node* temp=new node;
    temp=top;
    top=top->next;
    delete temp;
    
}

int main() {
    top=NULL;
    
    push(6);
    push(8);
    push(3);
    push(4);
    display();
    pop();
    pop();
    cout<<endl;
    
    display();
}
*/

