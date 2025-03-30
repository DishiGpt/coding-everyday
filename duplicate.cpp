#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v,dup;
    int n; 
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter the element: ";
        cin>>x;
        v.push_back(x);
    }
    for(auto s:v){
        int c=count(v.begin(),v.end(),s);
        if(c>1){
            if(find(dup.begin(),dup.end(),s)==dup.end())
            dup.push_back(s);
        }
    }
    for(auto s:dup){
        cout<<s<<" ";
    }
    return 0;
}