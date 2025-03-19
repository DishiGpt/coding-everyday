#include<iostream>
using namespace std;

struct node{
    node * left;
    node * right;
    int val;
};

struct node * root=NULL;

void insert(void){
    int data;
    cout<<"insertion value :";
    cin>>data;
    struct node * node1=new node;
    struct node * temp=root;
    struct node * ptr=NULL;

    node1->left=NULL;
    node1->right=NULL;
    node1->val=data;

    if(root==NULL){
        root=node1;
    }
    else{
        while(temp!=NULL && temp->val!=data){
            ptr=temp;
            if(data < temp->val){
                temp=temp->left;
            }
            else{
                temp=temp->right;
            }
        }

        if(temp!=NULL){
            cout<<"value already present";
        }

        if(data< ptr->val){
            ptr->left=node1;
        }
        else{
            ptr->right=node1;
        }
    }
}
void remove(void){}
void inorder(struct node *  root){}
void preorder(struct node *  root){}
void postorder(struct node *  root){}

int main(){
    int n;
    cout<<"enter choice 1.insert 2.delete 3.inorder 4.preorder 5.postorder ";
    cin>>n;
    if(n==1) insert();

    else if(n==2) remove();

    else if(n==3) {
        if(root==NULL){
            cout<<"empty";
        } 
        else{
            inorder(root);
        }
    }

    else if(n==4) {
        if(root==NULL){
            cout<<"empty";
        } 
        else{
            preorder(root);
        }
    }
    
    else if(n==5) {
        if(root==NULL){
            cout<<"empty";
        } 
        else{
            postorder(root);
        }
    }
    return 0;
}