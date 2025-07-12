#include<iostream>
using namespace std;

int main(){
    int n, k;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"enter the value of k\n";
    cin>>k;

    for(int i=0; i<n; i++){
        if(arr[i] == k){
            cout<<"found at index "<<i<<endl;
            break;
        }
    }
    
    return 0;
}