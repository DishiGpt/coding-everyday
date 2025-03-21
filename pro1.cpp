#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number : "<<endl;
    cin>>n;
    int mod=(n%10)*10+(n/10);
    cout<<"reverse number : "<<mod<<endl;
    return 0;
}