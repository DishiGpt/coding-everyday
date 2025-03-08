#include <iostream> 
using namespace std; 
class Device { 
public: 
void specs() { cout << "General device specifications." << endl; } 
}; 

class Smartphone : virtual public Device {}; 
class Tablet : virtual public Device {}; 
class Hybrid : public Smartphone, public Tablet {}; 

int main() 
{ 
    Hybrid h; 
    h.specs(); // No ambiguity due to virtual inheritance 
    return 0; 
}