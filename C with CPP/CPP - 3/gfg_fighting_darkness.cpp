#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    for (int i = 0; i <= 2; i++)
    {
        cin >> arr[i];
    }
    int max=arr[0];
    for (int i = 0; i <= 2; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
    }

    cout << "The room will be illuminated for " << max <<" days"<< endl;
    return 0;
}