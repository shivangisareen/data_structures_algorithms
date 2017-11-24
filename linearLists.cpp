//
//  ds.cpp
//  data_structures
//
//  Created by Shivangi Sareen on 12/03/17.
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

node* head= new node;

void addNodeStart(int num) {
    node* n = new node;
    n->data=num;
    if( head==NULL) {
        n->next=NULL;
        head=n;
    }
    else {
        n->next=head;
        head=n;
    }
    
}


void addNodeLast(int num) {
    node* n =new node;
    node* temp=new node;
    n->data=num;
    if(head==NULL) {
        head=n;
        n->next=NULL;
    }
    else {
        temp=head;
        while(temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=n;
        n->next=NULL;
    }
}

void addNodeinBetween(int num) {
    node* n= new node;
    int count=1;
    n->data=num;
    int position;
    cout<<"Enter postion of new node"<<endl;
    cin>>position;
    
    node* temp= new node;
    temp=head;
    while(count!=position-1) {
        temp=temp->next;
        count++;
    }
    n->next=temp->next;
    temp->next=n;
    
}

void search(int num) {
    node* temp=new node;
    int count=1, flag=0;
    temp=head;
    if(temp->data==num) {
        cout<<"Element found at position:"<<count<<endl;
        flag=1;
    }
    else {
        while(temp->data!=num) {
            temp=temp->next;
            count++;
            flag=1;
            if(temp->next==NULL && temp->data!=num) {
                flag=0;
                break;
            }
        }
        if(flag!=1) {
            cout<<"Element not found"<<endl;
        }
        else {
            cout<<"Element found at position:"<<count<<endl;
        }
        
    }
}

void printList() {
    node* temp=new node;
    temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}




int main() {
    head=NULL;
    addNodeStart(9);
    addNodeStart(3);
    addNodeStart(4);
    addNodeLast(8);
    printList();
    
    search(8);
  
}


*/
