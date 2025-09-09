// Print the following dynamic patter for a given n
// for n = 2
// @ * *
// @   * * @
// @       @
//         @


#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=0; i<n*2; i++){
        if(i<n+1){
            cout<<"@";
        }
        for(int space = 0; space<(n-1)*i && i<n; space++){
            cout<<" ";
        }
        for(int star=0; star<n && i<n; star++){
            cout<<"*";
        }
        if(i>=n-1){
            for(int space=0; space<n*(n-1)+1 && i>n-1; space++){
                cout<<" ";
            }
            if(i>n){
                cout<<" ";
            }
            cout<<"@";
        }
        
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    printPattern(n);
    return 0;
}