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
        int count = 0;
        for (int j = 2; j < n; j++) {
            if (isPrime(j)) {
                count++;
            }
        }
        return count;
    }
};
