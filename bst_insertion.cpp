#include<iostream>
using namespace std;

struct node{
    node * left;
    node * right;
    int val;
};

struct node * insert(struct node * root, int data)
{
    /* data */
    if(root==NULL){
        root= new node;
        root->val=data;
        root->left=NULL;
        root->right=NULL;
    }
    else{
        
    }
}
//find max,min,level,nodes,external nodes,internal,create mirror image,hcf form recursion