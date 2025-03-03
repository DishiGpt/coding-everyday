#include <iostream>
using namespace std;

class numbers{
    int num;
    public : 
    numbers(int x)
    {
        this->num=x;
        cout<<"the number is : "<<this->num;
    }
};

int main()
{
    numbers n(4);
    return 0;
}