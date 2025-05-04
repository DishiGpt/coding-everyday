#include<iostream>
using namespace std ;
int main()
{
    int n,min=0,pos=0;
    cout<<"enter size of array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        min=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if (arr[j]<min)
            {
                min=arr[j];
                pos=j;
            }
        }
        if (min<arr[i])
        {
            arr[pos]=arr[i];
            arr[i]=min;
            
        }

    }
    cout<<"sorted array :"<<endl;
    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<endl;
    }

    return 0;
}