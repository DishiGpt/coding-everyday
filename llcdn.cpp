#include<iostream>
using namespace std;

struct node{
    int data;
    node *next ;
};

node *head;
node *temp1;
node *temp2=NULL;

void insert(int data,int); //function to insert 
void print(); //function to print
void remove(int val);

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
    cout<<"enter element you want to delete :"<<endl;
    cin>>data;
    remove(data);
    print();
    return 0;                           
}
void insert(int data,int n)
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

void remove(int val)
{
    temp1=head;
    do
    {
        if(temp1->data==val)
        {
            temp2->next=temp1->next;
            return;
        }
        temp2=temp1;
        temp1=temp1->next;
    }while(temp1!=head);
}

