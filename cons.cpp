#include<iostream>
using namespace std;

class Simple{
    int data1;
    public:
        Simple(int a)
        {
            data1=a;
        }
        void printData()
        {
            cout<<"The value of data1 : "<<data1<<endl;
        };

};

int main(){
    Simple *s=new Simple(12);
    s->printData();
    return 0;
}

