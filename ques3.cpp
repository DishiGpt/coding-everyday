#include <iostream> 
using namespace std; 
class Artist { 
public: 
void paint() { cout << "Painting a masterpiece." << endl; } 
}; 
class Engineer { 
public: 
void build() { cout << "Building a structure." << endl; } 
}; 
class Innovator : public Artist, public Engineer { 
public: 
void createInnovation() { cout << "Creating an innovation." << endl; } 
}; 
int main() { 
Innovator i; 
i.paint(); 
i.build(); 
i.createInnovation(); 
return 0; 
}