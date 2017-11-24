//
//  main.h
//  Linked Lists
//
//  Created by Shivangi on 25/01/17.
//  Copyright © 2017 Shivangi. All rights reserved.
//

#ifndef main_h
#define main_h


#endif /* main_h */
struct node{
    int data;
    node* next;
};

node* head= new node;
node* curr= new node;

void addNode(int num) {
    node* n= new node;
    n->data=num;
    
    curr=head;
    if(head!=NULL) {
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=n;
        n->prev=curr;
        n->next=NULL;
        
    }
    
    else {
        head=n;
        n->next=NULL;
        n->prev=NULL;
    }
    
    
}

void printList() {
    curr=head;
    while(curr!=NULL) {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}
