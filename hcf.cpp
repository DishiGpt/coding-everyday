#include<iostream>
using namespace std;

int hcf(int n1, int n2){
    if(n2%n1!=0){
        hcf(n1,n2%n1);
    }
    else{
        return n1;
    }
}

int main(){
    int n1=10,n2=50;
    int res=hcf(n1,n2);
    cout<<res;
    return 0;
}