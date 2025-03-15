#include<iostream>
using namespace std;
struct box{
    public:
        static int length;
        box(){
            length++;
        } 
        void display()
        {
            cout<<"length is "<<length<<endl;
        }
};
//int box::length=0;
int main()
{
    box b1,b2;
    b1.display();
    b2.display();
    return 0;
}