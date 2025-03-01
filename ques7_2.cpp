#include <iostream>
using namespace std;

class circle{
    private:
    int rad;

    public :
    circle(int rad2)
    {
        rad=rad2;
    }
    friend void perimeter (circle cir1);

};

void perimeter(circle cir1)
{
    float peri=2*3.14*cir1.rad;
    cout<<"radius is : "<<cir1.rad<<endl;
    cout<<"printing the perimeter : "<<peri<<endl;

}

int main()
{
    int ra;
    cout<<"enter the radius of the circle : ";
    cin>>ra;
    perimeter(ra);
    return 0;
}


