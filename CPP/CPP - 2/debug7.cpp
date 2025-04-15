// check a number is even or odd using bitwise

#include <iostream>
using namespace std;    

int main() {
    int n;
    cin >> n;
    if (n & 1) { // Check if the least significant bit is set
        cout << "Odd" << endl;
    } else {
        cout << "Even" << endl;
    }
    return 0;
}