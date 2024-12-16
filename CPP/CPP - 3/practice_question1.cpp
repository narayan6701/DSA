#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th element of array"<<endl;
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i+=2){
        cout<<arr[i]<<" ";
    }
    return 0;
}