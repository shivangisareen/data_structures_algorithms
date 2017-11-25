
 
 
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

void addNodeBeginning(int num) {
    node* n= new node;
    
    n->data=num;
    
    if(head!=NULL) {
        n->next=head;
        head=n;
    
    }
    else {
        head=n;
        n->next=NULL;
    }

}

void addNodeMiddle(int num) {
    
    node* n= new node;
    n->data=num;
    int count=2;
    int position;
    cout<<"Enter position of the node"<<endl;
    cin>>position;
    
    curr=head;
    
    while(curr!=NULL && count<position) {
        curr=curr->next;
        count++;
     }
    n->next=curr->next;
    curr->next=n;
    
}

int main() {
    
    head=NULL;
    
    addNode(5);
    addNode(10);
    addNode(15);
    addNode(20);
    
    addNodeBeginning(0);
    addNode(4);
    
    addNodeMiddle(3);
    
    printList();
    
}


