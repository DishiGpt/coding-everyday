#include <iostream>
using namespace std;
class A {
public:
    int a;
    void show()
    {
        cout<<"current class is A-"<<a;

    }
    
};
class B : public virtual A {
public:
    void display(int n)
    {
        a=n;
        cout<<"current class is B-"<<a<<endl;
    }

    
};
class C : virtual public A {
public:
    void print(int n)
    {
        a=n;
        cout<<"current class is C-"<<a<<endl;
    }

};

class D : public B, public C {
public:
    void tell()
    {
        cout<<"current class is D-"<<endl;}

};
 
int main() {
    D obj;
    
    obj.display(3);
    obj.print(5);
    obj.show();
    return 0;
}
