#include<iostream>
#include<cmath>
using namespace std;

int decode(int n, int a, int b){
    int res = pow(n, b);
    res = res%5;
    res = pow(res, a);
    return res;
}

int main(){
    int n;
    cin>>n;

    int a, b;
    cin>>a>>b;

    cout<<decode(n, a, b);
}