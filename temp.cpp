#include <iostream> 
using namespace std; 
  
// One function works for all data types.  
template <typename T> 
  
T myMax(T x, T y) 
{ 
    return (x > y) ? x : y; 
} 
  
int main() 
{ 
  
    // Call myMax for int 
    cout << myMax<int>(3, 7) << endl; 
  
    // call myMax for double 
    cout << myMax<double>(3.0, 7.0) << endl; 
  
    // call myMax for char 
    cout << myMax<char>('g', 'e') << endl; 
  
    return 0; 
}