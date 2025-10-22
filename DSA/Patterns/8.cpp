/*
only works for n = 5
     *
    ***
   *****
   *   *
   *   *
   *   *
   *   *
   *   *
  *     *
 **     **
***     ***
 **     **
  *     *
    ***
    ***
    ***
    ***
    ***

*/

#include <iostream>
using namespace std;
void printPattern(int n)
{
    int initial_space = n, initial_star_count = 1, pyarmid_rows = (n + 1) / 2;
    for (int i = 0; i < pyarmid_rows; i++)
    {
        for (int space = 0; space < initial_space; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < initial_star_count; star++)
        {
            cout << "*";
        }
        initial_space--;
        initial_star_count += 2;
        cout << endl;
    }
    initial_space++;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < initial_space; space++)
        {
            cout << " ";
        }
        cout << "*";
        for (int space = 0; space < initial_space; space++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    initial_space--, initial_star_count = 1, pyarmid_rows = (n + 1) / 2;
    for (int i = 0; i < pyarmid_rows; i++)
    {
        for (int space = 0; space < initial_space; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < initial_star_count; star++)
        {
            cout << "*";
        }
        for (int space = 0; space < n; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < initial_star_count; star++)
        {
            cout << "*";
        }
        cout << endl;
        initial_space--, initial_star_count++;
    }
    initial_space = 1, initial_star_count = (n - 1) / 2, pyarmid_rows = (n - 1) / 2;
    for (int i = 0; i < pyarmid_rows; i++)
    {
        for (int space = 0; space < initial_space; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < initial_star_count; star++)
        {
            cout << "*";
        }
        for (int space = 0; space < n; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < initial_star_count; star++)
        {
            cout << "*";
        }
        cout << endl;
        initial_space++, initial_star_count--;
    }
    initial_space = n - 1, initial_star_count = (n + 1) / 2;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < initial_space; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < initial_star_count; star++)
        {
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