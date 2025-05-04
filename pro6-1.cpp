#include<iostream>
using namespace std;
int main()
{
    int n,num;
    cout<<"enter size of array 1 : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter value at "<<i<<endl;
        cin>>arr[i];
    }
    cout<<"enter size of array 2 : "<<endl;
    cin>>num;
    int arr2[num];
    for(int i=0;i<num;i++)
    {
        cout<<"enter value at "<<i<<endl;
        cin>>arr[i];
    }
    int size=n+num;
    int arr3[size];
    for(int i=0;i<n;i++)
    {
        arr3[i]=arr[i];
    }
    for(n;n<size;n++)
    {
        for(int i=0;i<num;i++)
        arr3[n]=arr2[i];
    }
    cout<<"merged array is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr3[i]<<endl;
    }
    return 0;
    }