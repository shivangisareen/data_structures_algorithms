
#include <stdio.h>
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head= new node;
node* curr= new node;

void addNodeEnd(int num) {
    node* n= new node;
    
    n->data=num;
    if(head!=NULL) {
        curr=head;
        while(curr->next!=head) {
            curr=curr->next;
        }
        curr->next=n;
        n->next=head;
    }
    else {
        head=n;
        curr=head;
        n->next=head;
    }
}

void printList() {
    curr=head;
    while(curr->next!=head) {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<curr->data<<" ";
    
}

void delNodeStart() {
    curr=head;
    while(curr->next!=head) {
        curr=curr->next;
    }
    curr->next=head->next;
    curr=head;
    head=head->next;
    delete curr;
    
    
    }
void delNodeLast() {
    node* temp=new node;
    curr=head;
    while(curr->next->next!=head) {
        curr=curr->next;
    }
    temp=curr->next;
    curr->next=head;
    delete temp;
}

void delNodeInBetween(int num) {
    node* temp=new node;
    curr=head;
    if(curr->data==num) {
        delNodeStart();
    }
    else {
    while(curr->next->data!=num) {
        curr=curr->next;
    }
    temp=curr->next;
    curr->next=temp->next;
    delete temp;
    
}
}


int main() {
    head=NULL;
    
    addNodeEnd(1);
    addNodeEnd(2);
    addNodeEnd(3);
    addNodeEnd(4);
    addNodeEnd(5);
    
    delNodeInBetween(2);
    printList();
    
}
 



