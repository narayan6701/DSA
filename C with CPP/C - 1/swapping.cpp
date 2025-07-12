#include<iostream>
using namespace std;

int main()
{
    int a=10, b=20, c;
    cout<<"The value of a is "<<a<<"\n";
    cout<<"The value of b is "<<b<<"\n";

    cout<<"Now swapping numbers\n";
    // c=a;
    // a=b;
    // b=c;

    a = a+b;
    b = a - b;
    a = a - b;
    cout<<"The value of a is "<<a<<"\n";
    cout<<"The value of b is "<<b<<"\n";
    return 0;



}