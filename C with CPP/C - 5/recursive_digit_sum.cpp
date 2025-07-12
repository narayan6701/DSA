#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

long super_digit(long n){
    if(n<10){
        return n;
    }
    else{
        long ans = 0;
        while(n>0){
            ans+=n%10;
            n/=10;
        }
        return super_digit(ans);
    }
}

int main(){
    int x;
    int k;
    cin>>x>>k;
    int final = super_digit(x);
    final = final*k;
    cout<<super_digit(final);
    return 0;
}