#include<iostream>
using namespace std;
struct node{
    int data;
    node *next ;
};
node *head;
node *temp1;

void insert(int data); //function to insert 
void print(); //function to print
void remove(int);
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
    cout<<"enter the element you want to delete "<<endl;
    cin>>data;
    remove(data);
    print();
    return 0;                           
}
void insert(int data)
{
    //inserting values at the end
    node *temp=new node;
    temp->data=data;
    temp->next=NULL; 
    while(temp1!=NULL)
    {
        if(temp1->next==NULL)
        {
            temp1->next=temp;
            return ;
        }
        temp1=temp1->next;

    }
    temp1=temp;
    head=temp;
}


void print()
{
    //printing all values
    node* temp=head;
    cout<<"list is : "<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void remove(int val)
{
    node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            temp1->next=temp->next;
            return;
        }
        temp1=temp;
        temp=temp->next;
    }
}
