#include<iostream>
using namespace std;
int missingno(int arr[],int n){
    int sum=n*(n+1)/2;
    int sum2=0;
    for(int i=0;i<n;i++){
        sum2+=arr[i];
    }
    return sum-sum2;
}

int main(){
    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<missingno(arr,n);


return 0;
}
