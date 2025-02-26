#include <iostream>
using namespace std;

void display(int x)
{
    cout<<"integer : "<<x<<endl;
}

void display(double x)
{
    cout<<"double : "<<x<<endl;
}

void display(string x)
{
    cout<<"string : "<<x<<endl;
}

int main()
{
    display(3);
    display(3.0);
    display("maths is cool");
    return 0;
}