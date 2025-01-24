#include<iostream>
using namespace std;

struct node{
    int data;
    node *next ;
};

node *head;
node *temp1;
void insert(int data,int); //function to insert 
void print(); //function to print

int main(){   
    head=NULL;
    temp1=NULL;
    int n,data;
    cout<<"how many numbers : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<<endl;
        cin>>data;
        insert(data,n);
        
    }
    print();
    
    return 0;                           
}
void insert(int data,int n)
{
    //inserting values at the beggining
    node *temp=new node;
    temp->data=data;
    temp->next=head; 
    temp1=temp;
    head=temp;
}


void print()
{
    //printing all values
    node* temp=head;
    cout<<"list is : "<<endl;
    do
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }while(temp!=head);
}

