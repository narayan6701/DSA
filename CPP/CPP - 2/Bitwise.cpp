#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 10;

    int num = 1;
    bool n = 1;
    cout<<(a&b)<<endl; 
    cout<<(a|b)<<endl;

    cout<<(a^a)<<endl;
    cout<<"XOR with negative and positive of same number"<<(a^(-a))<<endl;

    cout<<~num<<endl;
    cout<<(~n)<<endl;

    cout<<(b<<1)<<endl;
    
}