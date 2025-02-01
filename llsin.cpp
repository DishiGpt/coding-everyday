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
void insert_n(int ,int);
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
    cout<<"enter the data you wish to add : ";
    cin>>data;
    cout<<"enter the position ";
    cin>>n;
    insert_n(data,n); 
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

void insert_n(int data, int pos)
{
    node*temp= head;
    node*temp1=new node;
    temp1->data=data;
    temp1->next=NULL;
    int count=1;
    while(temp!=NULL)
    {
        if(count==pos-1)
        {
            temp1->next=temp->next;
            temp->next=temp1;
        }
        count+=1;
        temp=temp->next;
    }
}

