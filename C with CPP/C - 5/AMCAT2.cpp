#include<iostream>
using namespace std;

int main(){
    int d;
    cin>>d;

    int a, b, c;
    cin>>a>>b>>c;

    int maxi = max(a, b);
    maxi = max(maxi, c);
    cout<<maxi;
    return 0;
}