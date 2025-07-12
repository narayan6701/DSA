#include <iostream>
using namespace std;

void reverseArray(int arr[], int initial, int n) {
    int final = n - 1;
    while (initial < final) {
        int temp = arr[initial];
        arr[initial] = arr[final];
        arr[final] = temp;
        initial++;
        final--;
    }
}

int main() {
    // your code goes here
    int t;
    
    // t is number of test cases
    cin >> t;
    
    while (t--) {
        int n, k;
        // n is number of balls
        // k will be the number whose index we have to find after reversing n times
        cin >> n >> k;
        
        int arr[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i;
        }
        
        for (int i = 0; i < n; i++) {
            reverseArray(arr, i, n);
        }
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == k) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
