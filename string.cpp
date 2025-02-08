#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"enter a string : ";
    getline(cin,s);
    cout<<"you have entered :"<<s<<endl;
    s.push_back('s');
    cout<<"the string now : "<<s<<endl;
    s.pop_back();
    cout<<"the string now: "<<s<<endl;
     return 0;
}