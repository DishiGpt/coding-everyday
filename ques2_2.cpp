#include <iostream>
using namespace std;

void swap(int *n1=new int,int *n2=new int)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;

    delete n1,n2;
}

int main()
{
    int num1,num2;
    cout<<"enter 2 numbers "<<endl;
    cout<<"enter number 1 ";
    cin>>num1;
    cout<<"enter number 2 ";
    cin>>num2;
    cout<<"numbers before swapping are number 1 = "<<num1<<" number 2 = "<<num2<<endl;
    swap(&num1,&num2);
    cout<<"numbers before swapping are number 1 = "<<num1<<" number 2 = "<<num2;
    return 0;
}