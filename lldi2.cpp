#include<iostream>
using namespace std;
struct node{
    node *prev;
    int data;
    node *next ;
};
node *head;
node *temp1;
node *tail;

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
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    tail=temp; 
    while(temp1!=NULL)
    {
        if(temp1->next==NULL)
        {
            temp1->next=temp;
            temp->prev=temp1;
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
    temp1=tail;
    cout<<"list is : "<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<"and in reverse :"<<endl;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<endl;
        temp1=temp1->prev;
    }
}

