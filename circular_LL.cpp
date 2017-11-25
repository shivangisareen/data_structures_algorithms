
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
 
 void addNodeStart(int num) {
 node* n = new node;
 n->data=num;
 curr=head;
 if(head!=NULL) {
 while(curr->next!=head) {
 curr=curr->next;
 }
 n->next=head;
 curr->next=n;
 head=n;
 
 }
 else {
 head=n;
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
 
 void addNodeInBetween(int num) {
 node* n= new node;
 node* temp= new node;
 n->data=num;
 int position, count=1;
 cout<<"Enter position(index) of the element"<<endl;
 cin>>position;
 
 curr=head;
 while(count<position) {
 curr=curr->next;
 count++;
 }
 temp=curr->next;
 curr->next=n;
 n->next=temp;
 
 }

void search(int num) {
    node* temp=new node;
    temp=head;
    int count=1;
    int flag=0;
    if(temp->data==num) {
        cout<<"Element found at position:"<<count<<endl;
        flag=1;
    }
    else {
        while(temp->data!=num) {
            temp=temp->next;
            count++;
            flag=1;
        
        if(temp->data!=num && temp->next==NULL) {
            flag=0;
            break;
        }
        }
        if(flag!=0) {
            cout<<"Element found at position:"<<count<<endl;
        }
        else {
            cout<<"Element not found"<<endl;
        }
    }
}
 int main(){
 head=NULL;
 
 addNodeStart(1);
 addNodeStart(3);
 addNodeStart(5);
 addNodeStart(6);
 addNodeStart(4);
 addNodeEnd(7);
     addNodeEnd(9);
 
 printList();
     search(9);
 }

