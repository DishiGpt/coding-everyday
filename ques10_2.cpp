#include <iostream>
using namespace std;

int main()
{
    int *w=new int;
    *w=47;
    cout<<"value at address is : "<<*w;
    delete w;
    return 0;
}