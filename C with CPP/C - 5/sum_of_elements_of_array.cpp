#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int acc = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        acc = acc + arr[i];
    }
    cout << acc;
    return 0;
}