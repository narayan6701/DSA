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

   // swap all the zeros to the end of the array
   for(int i=0; i<n-1; i++){
       for(int j=0; j<n-i-1; j++){
            if((arr[j]<arr[j+1])&&arr[j]>=0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
       }
   }

    cout<<"array after swapping all the zeros to the end\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}