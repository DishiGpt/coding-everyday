#include<iostream>
using namespace std;
void add(int n,int nw);
int sub(int n1, int n2);
void mul();
int main()
{
    int n1=20,n2=30;
    add(n1,n2);
    return 0;
}
void add(int n1, int n2)
{
    int res=n1+n2;
    int res2=sub(n1,n2);
    cout<<"sum of 20 and 30 : "<<res<<endl;
    cout<<"difference of 20 and 30 : "<<res2<<endl;
}
int sub(int n1, int n2)
{
    int res=n1-n2;
    mul();
    return res;
    
}
void mul()
{
    int n1=30,n2=60;
    int res=n1*n2;
    cout<<"multiplication of 30 and 60 : "<<res<<endl;
}
