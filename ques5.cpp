#include <iostream> 
using namespace std; 
class Shape { 
public: 
virtual void area() { cout << "Undefined area." << endl; } 
}; 
class Circle : public Shape { 
public: 
void area() { cout << "Area of Circle: πr²." << endl; } 

}; 
class Rectangle : public Shape { 
public: 
void area() { cout << "Area of Rectangle: l × w." << endl; } 
}; 
int main() { 
Shape *s; 
Circle c; 
Rectangle r; 
s = &c; 
s->area(); 
s = &r; 
s->area(); 
return 0; 
}