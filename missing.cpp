#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    int n,sum=0;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;
    int ts=n*(n+1)/2;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the element"<<endl;
        cin>>x;
        v.push_back(x);
        sum+=x;
    }
    cout<<"the missing element is "<<ts-sum<<endl;
    return 0;
}