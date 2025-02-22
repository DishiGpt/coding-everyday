#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;

    /*void set(string na,int roll)
    {
        name=na;
        roll_no=roll;
    }*/

    void display(){
        cout<<endl<<"the details of the student are : "<<endl<<"name "<<name<<" roll no "<<roll_no<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter number of students ";
    cin>>n;
    student students[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter name ";
        cin>>students[i].name;
        cout<<"enter roll number ";
        cin>>students[i].roll_no;
    }

    for(int i=0;i<n;i++)
    {
        students[i].display();
    }
}