//
//  task1.c
//  assignment3
//
//  Created by Shivangi Sareen on 18/11/17.
//  Copyright © 2017 Shivangi Sareen. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    char data;
    struct node* left;
    struct node* right;
}node;


node* getNewNode(char c) {
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data=c;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;
}



node* insertNode (node* root, char c) {
    if(root==NULL) {
        root=getNewNode(c);
    }
    else if(c<=root->data) {
        root->left=insertNode(root->left, c);
    }
    else {
        root->right=insertNode(root->right,c);
    }
    return root;
}



void search(node* root, int x) {
    if(root==NULL) {
        printf("Not in tree.\n");
    }
    else if(x == root->data) {
        printf("In tree.\n");
    }
    else if(x <root->data) {
        search(root->left, x);
    }
    else {
        search(root->right, x);
    }
    
}


void printTree(node* root) {
    if(root!=NULL) {
        if(root->left!=NULL) {
            printTree(root->left);
        }
        
        printf("%c  ",root->data);
        
        if(root->right!=NULL) {
            printTree(root->right);
        }
    }
    else {
        printf("\nTree is empty.");
    }
}




void deleteTree(node* root)   //deleting nodes in ascending order
{
    if (root == NULL) return;
    
    // first delete both left subtree
    deleteTree(root->left);
    
    // then delete the node
    printf("\n Deleting node: %c", root->data);
    
    //then delete the right subtree
    deleteTree(root->right);
    
    free(root);
}



int main() {
    
    char element;
    int n=0;
    
    
    
    node* root= (node*)malloc(sizeof(node));
    root=NULL;
    
    char array[]={'F','L','O','C','C','I','N','A','U','C','I','N','I','H','I','L','I','P','I','L','I','F','I','C','A','T','I','O','N'};
    printf("ADDING:\n");
    for(int i=0;i<29;i++) {
        printf("%c  ",array[i]);
    }
    
    printf("\n\n");
    
    printf("SORTED:\n");
    for(int i=0;i<29;i++) {
        root=insertNode(root, array[i]);
    }
    printTree(root);
    printf("\n\n");
    
    while(n<2) {      //manually input
        printf("Enter element to be searched:\n");
        scanf(" %c",&element);
        search(root, element);
        printf("\n");
        n++;
    }
    n=0;
    while(n<2) {     //randomly generate
        char randomletter = 'A'+(random () % 26);
        printf("%c ",randomletter);
        printf("\n");
        search(root,randomletter);
        n++;
    }
    
    printf("Deleting tree-\n");
    deleteTree(root);
    printf("\n\n");
    
    
}





