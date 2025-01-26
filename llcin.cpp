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
void insert_n(int val,int pos); //insert at nth position

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
    cout<<"enter the element you want to add :"<<endl;
    cin>>data;
    cout<<"enter the position :"<<endl;
    cin>>n;
    insert_n(data,n);
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
    temp1=head;
    cout<<"list is : "<<endl;
    do
    {
        cout<<temp1->data<<endl;
        temp1=temp1->next;
    }while(temp1!=head);
}

void insert_n(int val,int pos)
{
    temp1=head;
    node * temp= new node;
    temp->data=val;
    temp->next=NULL;
    int count=1;
    do
    {
        if(count==(pos-1))
        {
            temp->next=temp1->next;
            temp1->next=temp;
            return;
        }
        count+=1;
        temp1=temp1->next;
    }while(temp1!=head);
}
