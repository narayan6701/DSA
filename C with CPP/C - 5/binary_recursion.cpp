#include<iostream>
using namespace std;

int binary(int n){
    if(n==0){
        return 0;
    }
    return (n%2 + 10*binary(n/2));
}

int main(){
    int n;
    cin>>n;

    cout<<binary(n)<<endl;
    return 0;
}