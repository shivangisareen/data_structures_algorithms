
 
#include <stdio.h>
#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;

};

node* head=new node;
node* curr=new node;

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

void addNodeBeginning(int num) {
    node * n= new node;
    n->data=num;
    
    curr=head;
    n->next=head;
    n->prev=NULL;
    head=n;
    
    
}

void addNodeMiddle(int num) {
    int position;
    int count=2;
    node* n= new node;
    n->data=num;
   
    cout<<"Enter position of the new node: "<<endl;
    cin>>position;
    
    
    curr=head;
    while(curr!=NULL && count<position) {
        curr=curr->next;
        count++;
    
    }
    n->next=curr->next;
    curr->next=n;
    n->prev=curr;
    n->next->prev=n;
   
}

int main() {
    head=NULL;
    
    addNode(5);
    addNode(9);
    addNode(12);
    addNodeBeginning(2);
    printList();
    
    addNodeMiddle(1);
    printList();
    
    

}

