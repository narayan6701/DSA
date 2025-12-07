#include <iostream>
using namespace std;

int run_all(int n, int q, int arr[], int queries[][4])
{
    int sum = 0;
    for (int i = 0; i < q; i++)
    {
        int l = queries[i][0];
        int r = queries[i][1];
        int x = queries[i][2];
        int y = queries[i][3];

        for (int j = 0; j <= (r - l); j++)
        {
            arr[l + j] = x + (j * y);
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int n, q;
    cout << "Enter the size of array\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element of array\n";
        cin >> arr[i];
    }
    cout << "Enter the number of queries\n";
    cin >> q;
    int queries[q][4];
    for (int i = 0; i < q; i++)
    {
        cout << "Enter " << i + 1 << " query\n";
        for (int j = 0; j < 4; j++)
        {
            cin >> queries[i][j];
        }
    }

    cout << "After running all queries we get" << run_all(n, q, arr, queries) << endl;
    return 0;
}