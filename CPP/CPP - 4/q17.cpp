#include<iostream>
using namespace std;

bool automorphicNumber(int n){
    int square = n*n;
    while(n>0){
        int l = n%10;
        if(square%10!=l){
        return false;
        }
        n/=10;
        square/=10;
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    cout<<automorphicNumber(n);

    return 0;
}