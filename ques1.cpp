#include <iostream> 
#include <string> 
using namespace std; 
// Base class 
class Person { 
public: 
    string name; 
    int age; 
    // Method to display base class details 
    void display() { 
        cout << "Name: " << name << ", Age: " << age << endl; 
    } 
}; 
class Student : public Person { 
public: 
    int rollNumber; 
    string course; 
 
    // Overriding the display() method 
    void display() { 
        cout << "Name: " << name  
             << ", Age: " << age  
             << ", Roll Number: " << rollNumber  
             << ", Course: " << course << endl; 
    } 
}; 
 
int main() { 
    // Creating an object of the derived class 

Student s; 
// Assigning values to attributes 
s.name = "Alice"; 
s.age = 20; 
s.rollNumber = 101; 
s.course = "Computer Science"; 
// Calling the display method 
s.display(); 
return 0; 
}