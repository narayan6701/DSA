#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; 
    cin>>n;

    int bin = 0;
    int place = 1;
    while(n>0){
        int rem = n%2;
        bin += rem*place;
        n/=2;
        place*=10;
    }

    cout<<bin<<endl;

}