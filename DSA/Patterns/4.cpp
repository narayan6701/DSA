// Print the following dynamic patter for a given n where n is a odd number

/*

for n = 3
 @@@
  @
***
* *
* *

for n = 5
  @@@@@
   @@@
    @
*****
*   *
*   *
*   *
*   *

for n = 7

   @@@@@@@
    @@@@@
     @@@
      @
*******
*     *
*     *
*     *
*     *
*     *
*     *

*/

#include <iostream>
using namespace std;

void printPattern(int n)
{
    int initial_space = n / 2;
    int at_rows = (n + 1) / 2;
    int num_at = n;
    for (int i = 0; i < at_rows; i++)
    {
        for (int space = 0; space < initial_space; space++)
        {
            cout << " ";
        }
        initial_space++;
        for (int at = 0; at < num_at; at++)
        {
            cout << "@";
        }
        num_at -= 2;
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            for (int star = 0; star < n; star++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int space = 0; space < n - 2; space++)
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