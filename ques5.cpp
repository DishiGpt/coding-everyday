#include <iostream>
using namespace std;
class circle{
    public:
    int rad;

    float area(int rad1);

};

float circle::area(int rad)
{
    float ar=3.14*rad*rad;
    return ar;
}

int main()
{
    circle cir1;
    int rad;
    cout<<"enter the radius of the circle : ";
    cin>>rad;
    cout<<"the area of the circle is : "<<cir1.area(rad);
    return 0;

}