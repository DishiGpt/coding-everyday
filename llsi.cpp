#include<iostream>
using namespace std;
struct node{
    int data;
    node *next ;
};
node *head;
void insert(int data); // to insert in nodes
void print();  //to print data in nodes
//driver code
int main(){   
    //head=NULL;
    int n,data;
    cout<<"how many numbers : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        insert(data);
        
    }
    print();
    return 0;                           
}
void insert(int value)
{
    //inserting values at the beginning
    node *temp=new node;
    temp->data=value;
    temp->next=head; 
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