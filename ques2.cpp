// class calculator
#include <iostream>
using namespace std;
class calculator{
    public:
    int n1;
    int n2;
    
     void cal(int no1,int no2){
        n1=no1;
        n2=no2;
    }

    void add_print(){
        cout<<"sum of numbers :"<<n1+n2;
    }
};
int main() {
    calculator c1;
    int num1,num2;
    cout <<"enter 2 numbers :"<<endl;
    cout<<"number 1 ";
    cin>>num1;
    cout<<"number 2 ";
    cin>>num2;
    c1.cal(num1,num2);
    c1.add_print();
    return 0;
} 