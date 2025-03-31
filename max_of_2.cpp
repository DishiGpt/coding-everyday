#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums,me(2,0);
    int n,sum=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter the element: ";
        cin>>x;
        nums.push_back(x);
    }
    for(int i=0;i<n;i++){
        int num=nums[i];
        for(int j=i+1;j<n;j++){
            if((nums[i]*nums[j]) > sum){
                sum=nums[i]*nums[j];
                me[0]=nums[i];
                me[1]=nums[j];
            }
        }
    }
    cout<<"The two numbers are: "<<me[0]<<" and "<<me[1]<<endl;
    cout<<"The maximum product of two numbers is: "<<sum;
    return 0;
}