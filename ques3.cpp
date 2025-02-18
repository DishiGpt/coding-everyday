#include<iostream>
using namespace std;
class person{
    public :
    string name;
    int age;
    void display()
    {
        cout<<"the details of the person are "<<name<<" and age is "<<age;
    }
};

int main()
{
    person person1;
    cout<<"enter the name ";
    cin>>person1.name;
    cout<<"enter age ";
    cin>>person1.age;
    person1.display();
    return 0;
}