#include<iostream>
using namespace std;
struct food{
    string name;
    float price;
};
int main()
{
    struct food food1;
    food1={"lasagne",500};
    struct food *ptr=&food1;
    cout<<"food item "<<food1.name<<endl;
    cout<<"price "<<food1.price<<endl;
    ptr->name="quesadilla";
    ptr->price=600;
    cout<<"food item now "<<ptr->name<<endl;
    cout<<"price "<<ptr->price<<endl;
    return 0;
}