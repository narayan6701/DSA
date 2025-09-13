// Print the following patter for any positive value of n;

/*

for n = 4
*
**
***
****      *
************
****      *
***
**
*

*/

#include <iostream>
using namespace std;
void printPattern(int n)
{
    int initial_star_count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int star = 0; star < initial_star_count; star++)
        {
            cout << "*";
        }
        initial_star_count++;
        if (initial_star_count <= n)
        {
            cout << endl;
        }
    }
    for (int space = 0; space < (n * 2) - 2; space++)
    {
        cout << " ";
    }
    cout << "*" << endl;
    for (int star = 0; star < n * 3; star++)
    {
        cout << "*";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        initial_star_count--;
        for (int star = 0; star < initial_star_count; star++)
        {
            cout << "*";
        }
        if (initial_star_count == n)
        {
            for (int space = 0; space < (n * 2) - 2; space++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printPattern(n);
    return 0;
}