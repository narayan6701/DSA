#include <cmath>

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

class Solution {
public:
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
};
