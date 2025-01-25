#include<iostream>
using namespace std;

struct node{
    int data;
    node *next ;
};

node *head;
node *temp1;
node *temp2=NULL;
void insert(int data); //function to insert 
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
        insert(data);
    }
    print();
    
    return 0;                           
}
void insert(int data)
{
    //inserting values at the end
    node *temp=new node;
    temp->data=data;
    temp->next=head; 
    while(temp2!=head)
    {
        temp1->next=temp;
        temp1=temp1->next;
        temp2=temp1;
        return;
    }
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

