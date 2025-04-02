#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums;
    vector<vector<int>> powerset;
    int n,sum=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int ts=1<<n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter the element: ";
        cin>>x;
        nums.push_back(x);
    }
    for(int i=0;i<ts;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                temp.push_back(nums[j]);
                sum+=nums[j];
            }
        }
        powerset.push_back(temp);
    }
    for(int i=0;i<powerset.size();i++){
        for(int j=0;j<powerset[i].size();j++){
            cout<<powerset[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}