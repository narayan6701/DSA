#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    for (int i = 0; i < sizeof(arr) / sizeof(arr[i]); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[i]); i++)
    {
        cout << arr[i] << " ";
    }
}