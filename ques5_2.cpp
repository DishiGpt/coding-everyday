#include <iostream>
using namespace std;

void greeting(string name="user")
{
    cout<<"hello"<<name<<"welcome to cpp"<<endl;
}

int main()
{
    string name;
    cout<<"enter name : ";
    cin>>name;
    greeting();
    greeting(name);
    return 0;
}