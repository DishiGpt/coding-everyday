#include <iostream>
using namespace std;
struct books{
    string name;
    string author;
    int pages, price;
}b1,b2[3];

int main()
{
    b1.name="the da vinci code";//to access members of structure
    b1.pages=600;
    b2[0].name="cell eight";
    b2[1]={"princess diaries","meg cabot",200,500};
    cout <<"name of book "<<b1.name<<endl;
    cout <<"pages "<<b1.pages<<endl;
    cout<<"name of book 2 "<<b2[0].name<<endl;

    return 0;
 
}