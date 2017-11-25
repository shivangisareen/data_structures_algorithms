
#include <stdio.h>
#include <iostream>


using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
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
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void delNodeEnd() {
    curr=head;
    while(curr->next!=NULL) {
        curr=curr->next;
    }
   
    curr->prev->next=NULL;
    curr->prev=NULL;
    delete curr;
    
}

void delNodeStart() {
    curr=head;
    head=curr->next;
    curr->next=NULL;
    
    head->prev=NULL;
    delete curr;
}

void delNodeInBetween(int num) {
    curr=head;
    while(curr->data!=num) {
        curr=curr->next;
    }
    
    
    curr->prev->next=curr->next;
    curr->next->prev=curr->prev;
    delete curr;
    

}
int main() {
    head=NULL;
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    addNode(5);
    printList();
    cout<<endl;
    
    delNodeEnd();
    printList();
    cout<<endl;
    delNodeStart();
    printList();
    cout<<endl;
    delNodeInBetween(3);
    printList();

}
 



