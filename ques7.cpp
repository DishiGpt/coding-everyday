#include <iostream> 
using namespace std; 
class Appliance { 
public: 
virtual void powerUsage() = 0; // Pure virtual function 
}; 
class Fan : public Appliance { 
public: 
void powerUsage() { cout << "Fan uses 70W." << endl; } 
}; 
class WashingMachine : public Appliance { 
public: 
void powerUsage() { cout << "Washing Machine uses 500W." << endl; } 
}; 
int main() { 
Appliance *a; 
Fan f; 
WashingMachine wm; 

a = &f;
a->powerUsage(); 
a = &wm; 
a->powerUsage(); 
return 0; 
}