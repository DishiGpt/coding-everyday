#include <iostream>
using namespace std;

class base{
    public:
    virtual void show()
    {
        cout<<"base"<<endl;
    }
};

class child : public base{
    public:
    void show()
    {
        
        cout<<"child"<<endl;
    }
};

int main()
{
    base  *o1;
    child o2;
    o1=&o2;
    o1->show();
    o2.show();
    return 0;
    
}