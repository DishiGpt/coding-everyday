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
node *temp2;

void insert(int data); //function to insert 
void print(); //function to print
int main(){   
    head=NULL;
    temp1=NULL;
    temp2=NULL;
    tail=NULL;
    int n,data;
    cout<<"how many numbers : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<<endl;
        cin>>data;
        insert(data);
        
    }
    head->prev=tail;
    print();
    
    return 0;                           
}
void insert(int data)
{
    //inserting values at the end
    node *temp=new node;
    temp->prev=NULL;
    temp->data=data;
    temp->next=head;
    tail=temp; 
    while(temp2!=head)
    {
        temp1->next=temp;
        temp->prev=temp1;
        temp1=temp1->next;
        temp2=temp1;
        return ;

    }
    temp1=temp;
    head=temp;
}


void print()
{
    //printing all values
    temp1=head;
    temp2=tail;
    cout<<"list is : "<<endl;
    do
    {
        cout<<temp1->data<<endl;
        temp1=temp1->next;
    }while(temp1!=head);
    cout<<"and in reverse :"<<endl;
    do
    {
        cout<<temp2->data<<endl;
        temp2=temp2->prev;
    }while(temp2!=tail);
}

