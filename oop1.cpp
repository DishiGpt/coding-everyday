#include<iostream>
using namespace std;
class primecheck{
    int num,flag=0;
    public:
    primecheck(int a){
        num=a;
        cout<<"value input:"<<num<<endl;
    }

    int check(){
        if(num<2){return -1;}
        if(num==2){return 1;}
        else{
            for(int i=2;i<num;i++){
                if((num%i==0)){
                    flag=1;
                    return 0;
                }
            }
        }
    }
    void display(){
        int res=check();
        if(res==-1&&flag==0){
            cout<<"invalid number"<<endl;
        }
        if(res==1&&flag==0){
            cout<<"even prime number"<<endl;
        }
        if(flag==1&&res==0){
            cout<<"number is not prime"<<endl;
        }
        else{
            cout<<"number is prime"<<endl;
        }
    }
};
int main(){
    int n;
    cout<<"enter number :"<<endl;
    cin>>n;
    primecheck num1(n);
    num1.display();
    return 0;

}
