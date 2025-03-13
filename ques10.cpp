#include <iostream> 
using namespace std; 
class Entity { 
public: 
void display() { cout << "Entity information." << endl; } 
}; 
class LivingBeing : virtual public Entity {}; 
class NonLivingBeing : virtual public Entity {}; 
class Robot : public LivingBeing, public NonLivingBeing {}; 
int main() { 
Robot r; 
r.display(); // No ambiguity due to virtual inheritance 
return 0; 
}