#include<iostream>
using namespace std;
class rectangle{
    public :
    int l;
    int b,area;

    void set(int s1, int s2)
    {
        l=s1;
        b=s2;
        area=l*b;

    }
    void display()
    {
        cout<<"the area of the rectangle is : "<<area;
    }
};

int main()
{
    rectangle rec1;
    int len,br;
    cout<<"enter the length ";
    cin>>len;
    cout<<"enter breadth ";
    cin>>br;
    rec1.set(len,br);    
    rec1.display();
    return 0;
}