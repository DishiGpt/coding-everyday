#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>freq1(26,0);
    vector<int>freq2(26,0);
    string s1;
    string s2;
    cout<<"enter string 1 ";
    cin>>s1;
    cout<<"enter string 2 ";
    cin>>s2;
    if(s1.size()!=s2.size()){
        cout<<"not anagrams";
        return 0;
    }
    else{
        for(int i=0;i<s1.size();i++){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        if(freq1==freq2){
            cout<<"strings are anagrams";
        }
        else{
            cout<<"not anagrams";
        }
        return 0;
    }
}
