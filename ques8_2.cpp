#include <iostream>
using namespace std;
class per;
class circle{
    private:
    int rad = 3;

    public :
    void cir()
    {
        cout<<"value of radius is : "<<rad;
    }
    friend class per;

};

class per{
    public:
    void show(circle &obj)
    {
        cout<<"perimeter of circle is : "<<(2*3.14*obj.rad)<<endl;
        cout<<"area is : "<<(obj.rad*obj.rad*3.14)<<endl;
    }
    
};

int main()
{
    circle obj;
    per c;
    c.show(obj);
    obj.cir();
    return 0;
}
