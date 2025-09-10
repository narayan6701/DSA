// Print the following dynamic patter for a given n where n is a even number

/*

for n = 2
@    
@** @
@ **@
    @

for n = 4
@
@
@****
@   ****      @
@      ****   @
          ****@
              @
              @

for n = 6
@
@                                
@
@******
@     ******
@          ******               @
@               ******          @
                     ******     @
                          ******@
                                @
                                @
                                @

*/

#include<iostream>
using namespace std;

void printPattern(int n){
    int x = 0;
    for(int i=0; i<2*n; i++){
        bool flag=false;
        if(i<n+1) cout<<"@"; else cout<<" ";
        for(int j=0; j<n*(n-1)+1; j++){
            if(i>=n/2 && i<2*n-n/2){
                if(j<(n-1)*x||j>(n-1)*x+n-1)cout<<" ";
                else 
                cout<<"*";
                flag=true;
            }
            else cout<<" ";
        }
        if(flag)x++;
    if(i>=n-1)cout<<"@";else cout<<" ";
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