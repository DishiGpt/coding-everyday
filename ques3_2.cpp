#include <iostream>
using namespace std;

inline int square(int x)
{
    return x*x;
}

int main()
{
    int x;
    cout<<"enter a number : ";
    cin>>x;
    cout<<"the square of the number is : "<<square(x);
    return 0;
}