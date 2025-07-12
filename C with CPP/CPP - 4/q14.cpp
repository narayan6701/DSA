#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool isPalindrome(string s){
    int l = 0, r = s.size()-1;

    while(l<=r){
        if(s[l++]!=s[r--]){
            return false;
        }
    }

    return true;
}

int main(){

    vector<string> str = {"racecar", "level", "hello", "madam", "world"};

    int m = 0;

    int n = str.size();
    string ans;

    for(int i=0; i<n; i++){
        if(isPalindrome(str[i])){
            int p = str[i].size();
            m = max(m, p);
        }
    }

    for(int i=0; i<n; i++){
           if(m==str[i].size()){
            ans = str[i];
        } 
    }

    cout<<ans<<" is the largest palindrome with length of "<<m<<endl;

    return 0;

}