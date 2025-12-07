#include <iostream>
using namespace std;

int run_all(int n, int q, int a[], int queries[][3])
{
    int output = 0;
    for (int i = 0; i < q; i++)
    {
        int type = queries[i][0];
        int l = queries[i][1];
        int r = queries[i][2];

        if (type == 1)
        {
            for (int k = l; k <= r; k++)
            {
                a[k] = (k - l + 1) * a[l];
            }
        }
        else
        {
            for (int j = l; j <= r; j++)
            {
                output += a[j];
            }
        }
    }

    return output;
}

int main()
{
    int n, q;
    cout << "Enter the size of array\n";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element of array\n";
        cin >> a[i];
    }

    cout << "Enter the number of queries\n";
    cin >> q;
    int queries[q][3];

    for (int i = 0; i < q; i++)
    {
        cout << "Enter " << i + 1 << " query\n";
        for (int j = 0; j < 3; j++)
        {
            cin >> queries[i][j];
        }
    }

    cout << "the output is " << run_all(n, q, a, queries) << endl;

    return 0;
}