#include <iostream>
using namespace std;
int memo[5] = {-1, -1, -1, -1, -1};

int fib(int n)
{
    if (n <= 1)
        return n;
    if (memo[n] != -1)
        return memo[n];
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}

int main()
{
    int n, i;

    for (i = 0; i < 5; i++)
    {
        cout << fib(i) << " ";
    }
    return 0;
}