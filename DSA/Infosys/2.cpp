// this was a medium level question with DP

#include <iostream>
using namespace std;

int operations(int x, int y, int z, int n, int a[], int b[])
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if ((x >= 0) && (y >= 0) && (z >= 0))
        {
            sum -= b[i];
            x--, y--;
            sum += a[i] * x * y * z;
            y--, z--;
            sum += a[i] * x * y * z;
        }
    }
    if (sum < 0)
    {
        sum = 0;
    }
    return sum;
}

int main()
{
    int x, y, z, n;
    cout << "Enter the size of array\n";
    cin >> n;
    cout << "Enter the value of x\n";
    cin >> x;
    cout << "Enter the value of y\n";
    cin >> y;
    cout << "Enter the value of z\n";
    cin >> z;
    int a[n], b[n];
    cout << "Enter the values of A\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the values of B\n";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << operations(x, y, z, n, a, b) << endl;
    return 0;
}