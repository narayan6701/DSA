#include<iostream>
using namespace std;
int rev=0;
int num_rev(int n){
    if(n==0) 
        return rev;
    else{
        rev = rev*10 + n%10;
        num_rev(n/10);
    }
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    cout<<"reverse of the number is: "<<num_rev(n);
}