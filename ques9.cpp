#include <iostream> 
using namespace std; 
class Employee { 
public: 
virtual void calculateSalary() 
{ cout << "General Employee Salary." << endl; } 
}; 
class PermanentEmployee : public Employee { 
public: 
void calculateSalary() 
{ cout << "Salary for Permanent Employee." << endl; } 
}; 
class ContractualEmployee : public Employee { 
public: 
void calculateSalary() 
{ cout << "Salary for Contractual Employee." << endl; } 
}; 
int main() { 
Employee *e; 
PermanentEmployee pe; 
ContractualEmployee ce; 
e = &pe; 
e->calculateSalary(); 
e = &ce; 
e->calculateSalary(); 
return 0; 
}