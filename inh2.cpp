// C++ program to show inheritance ambiguity
#include<iostream>
using namespace std;
// Base class A
class A {
    public:
    void func() {
        cout << " I am in class A" << endl; }
};
// Base class B
class B {
    public:
    void func() {
        cout << " I am in class B" << endl; }
};
// Derived class C
class C: public A, public B {
};
// Driver Code
int main() {
    // Created an object of class C
    C obj;
    // Calling function func()
    obj.A::func();
    return 0;
}
