#include <iostream>
using namespace std;
void change(int &a,int &b){
    int z=a;
    a=50;
    b=z;
}
int main(){
    int a=40,b=50;
    change(a,b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
    }