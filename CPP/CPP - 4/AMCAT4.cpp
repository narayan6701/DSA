#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countNonRepeated(string s){
    unordered_map<char, int> hashMap;
    int n = s.size();
    int count = 0;
    for(int i=0; i<n; i++){
        hashMap[s[i]]++;
    }
    for(auto it : hashMap){
        if(it.second == 1){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    cin>>s;

    cout<<countNonRepeated(s);

    return 0;
}