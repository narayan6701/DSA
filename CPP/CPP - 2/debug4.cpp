#include<iostream>
using namespace std;

int main() {
    int n, a = 0;
    cin >> n;

    while (n != 0) {
        int k = n % 10; // Extract the last digit
        a = a * 10 + k; // Append the digit to the reversed number
        n = n / 10;     // Remove the last digit
    }

    cout << a << endl; // Print the reversed number
    return 0;
}
