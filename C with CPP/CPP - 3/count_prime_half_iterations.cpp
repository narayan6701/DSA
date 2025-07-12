#include<iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int countPrimes(int n) {
    int count;
    if(n<=2){
        return 0;
    }
    else{
        count = 1;
    }
    for (int j = 3; j < n; j+=2) {
        if (isPrime(j)) {
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Number of prime numbers less than "<<n<<" are: "<<countPrimes(n)<<endl;
    return 0;
}

