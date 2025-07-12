#include<iostream>
using namespace std;
int trailingZeroes(int n) {
        int result = 1;
        for(int i = n; i>0; i--){
            result *= i;
        }
        cout<<result<<endl;
        int count = 0;
        while(result>0){
            if(result%10==0){
                count++;
                result/=10;
            }
            else{
                break;
            }
        }
        return count;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<trailingZeroes(n);
    return 0;
}