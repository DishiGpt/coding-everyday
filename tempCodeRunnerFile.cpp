#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s1; int sum=0;
    cout<<"Enter the string: ";
    cin>>s1;
    for(auto s:s1){
        if(s>=48 && s<=57){
            sum+=s-48;
        }
    }
    cout<<"Sum of all the digits in the string is: "<<sum<<endl;
    return 0;
}