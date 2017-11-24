//
//  LL_deletion.cpp
//  Linked Lists
//
//  Created by Shivangi on 24/01/17.
//  Copyright © 2017 Shivangi. All rights reserved.
//
/*

#include <stdio.h>
#include <iostream>
using namespace std;


struct node {
    int data;
    node* next;
    
};
node* head=new node;
node* curr= new node;


void addNode(int num) {
    node* n =new node;
    
    n->data=num;
    n->next=NULL;
    
    if(head!=NULL) {
        curr=head;
        while(curr->next!=NULL) {
            curr=curr->next;
        }
        curr->next=n;
    }
    else
        head=n;
}


void printList() {
    
    curr=head;
    while(curr!=NULL) {
        cout<<curr->data<<endl;
        curr=curr->next;
        
    }
    
    
}

void delNode(int position) {
    node* n =new node;
    curr=head;
    int count=2;
    if(position==1) {
        curr=head->next;
        head=curr;
    }
    else {
    while(curr!=NULL && count<position)  {
        curr=curr->next;
        count++;
    }
        n=curr->next->next;
        curr->next=n;
        
    
}
}
int main() {
    head=NULL;
    addNode(5);
    addNode(10);
    addNode(15);
    addNode(20);
    addNode(25);
    
    delNode(5);
    
    printList();


}
*/

