#include <iostream> 
using namespace std; 
class Animal { 
public: 
void sound() { cout << "Animal makes a sound." << endl; } 
}; 
class Dog : public Animal { 
public: 
void bark() { cout << "Dog barks." << endl; } 
}; 
class Puppy : public Dog { 
public: 
void cuteAction() { cout << "Puppy wags its tail." << endl; } 
}; 

int main() { 
    Puppy p; 
p.sound(); 
p.bark(); 
p.cuteAction(); 
return 0; 
}
