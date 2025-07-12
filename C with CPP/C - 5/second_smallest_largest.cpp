#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

   for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = temp;
            }
        }
   }

   cout<<arr[n-2]<<" is the second largest element\n";
   cout<<arr[1]<<" is the second smallest element\n";


    return 0;
}