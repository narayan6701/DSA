#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) { // Handle cases where finding the second largest is impossible
        cout << "Second largest element cannot be determined." << endl;
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) { 
            second = max; // Update second largest before updating max
            max = arr[i];
        } else if (arr[i] > second && arr[i] < max) {
            second = arr[i]; // Update second largest if current element is smaller than max
        }
    }

    if (second == INT_MIN) {
        cout << "No second largest element exists." << endl;
    } else {
        cout << second << endl;
    }

    return 0;
}
