#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter the element: ";
        cin>>x;
        v.push_back(x);
    }
    n=n/2;
    sort(v.begin(),v.begin()+n);
    sort(v.begin()+n,v.end(),greater<int>());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;


}