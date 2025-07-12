#include<iostream>
using namespace std;

int length(int arr[], int brr[], int n){
    int l = 0;

    for(int i=0; i<n; i++){
        if(arr[i]==1 && arr[i+1]==0){
            l = l + brr[i+1] - brr[i];
            arr[i+1] = 1;
        }
    }
    return l;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    int brr[n];

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    for(int i =0; i<n; i++){
        cin>>brr[i];
    }

    cout<<length(arr, brr, n);
    return 0;

}