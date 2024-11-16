#include <iostream>
using namespace std;

void swap(int temp, int &a, int &b)
{
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 1, b = 2, temp = 0;
    swap(temp, a, b);
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    return 0;
}