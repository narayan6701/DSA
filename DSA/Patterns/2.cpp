// Print the following dynamic patter for a given n

/* 

for n = 2
@
@
@**
  **@
    @
    @

for n = 3
@
@
@
@***
   ***
     ***@
        @
        @
        @

for n = 4
@
@
@
@
@****
    ****
       ****
          ****@
              @
              @
              @
              @

*/

#include<iostream>
using namespace std;

void printPattern(int n){
    int count_spaces=n;

    for(int i=0; i<n*3; i++){
        if(i<n+1){
            cout<<"@";
        }
        if(i==n){
            for(int star=0; star<n; star++){
                cout<<"*";
            }
        }
        if(i>n && i<2*n){
            for(int space=0; space<count_spaces; space++){
                cout<<" ";
            }
            count_spaces+=n-1;
            for(int star=0; star<n; star++){
                cout<<"*";
            } 
            if(i==2*n-1){
                cout<<"@";
            }
        }
        if(i>=(n*2)){
            for(int space=0; space<(n*(n-1))+2; space++){
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