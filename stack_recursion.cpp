//
//  stack_recursion.cpp
//  data_structures
//
//  Created by Shivangi Sareen on 12/03/17.
//  Copyright © 2017 Shivangi Sareen. All rights reserved.
// DOUBT
/*
 
#include <stdio.h>
#include<iostream>
using namespace std;

struct node {
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

void pop() {
    node* temp=new node;
    temp=top;
    top=top->next;
    delete temp;
}

void display() {
    node* temp=new node;
    temp=top;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void reverse() {
    node* temp=new node;
    temp=top;
    while(temp!=NULL) {
        push(temp->data);
        temp=temp->next;
    }
    
}


int main() {
    top=NULL;
    push(3);
    push(5);
    push(8);
    push(0);
    display();
    cout<<endl;
    reverse();
    display();
    
}

*/
