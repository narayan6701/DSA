// Print the following dynamic patter for a given n where n is a odd number

/*

for n = 3
    *
   ***
   @ @
***@ @***
 *     *

for n = 5
       *
      ***
     *****
     @   @
     @   @
     @   @
*****@   @*****
 ***       ***
  *         *

for n = 7
          *
         ***
        *****
       *******
       @     @
       @     @
       @     @
       @     @
       @     @
*******@     @*******
 *****         *****
  ***           ***
   *             *

*/

#include <iostream>
using namespace std;

void printPattern(int n)
{
    int initial_space_count = n + n / 2;
    int initial_star_count = 1;
    int pyramid_rows = (n + 1) / 2;
    for (int i = 0; i < pyramid_rows; i++)
    {
        for (int space = 0; space < initial_space_count; space++)
        {
            cout << " ";
        }
        initial_space_count--;
        for (int star = 0; star < initial_star_count; star++)
        {
            cout << "*";
        }
        initial_star_count += 2;
        cout << endl;
    }

    int at_block_rows = n - 2;
    int spaces_btw = n - 2;
    initial_space_count++;
    for (int i = 0; i < at_block_rows; i++)
    {
        for (int space = 0; space < initial_space_count; space++)
        {
            cout << " ";
        }
        cout << "@";
        for (int space = 0; space < spaces_btw; space++)
        {
            cout << " ";
        }
        cout << "@";
        cout << endl;
    }
    initial_star_count = n;
    for (int i = 0; i < pyramid_rows; i++)
    {
        if (i == 0)
        {
            for (int star = 0; star < initial_star_count; star++)
            {
                cout << "*";
            }
            cout << "@";
            for (int space = 0; space < spaces_btw; space++)
            {
                cout << " ";
            }
            cout << "@";
            for (int star = 0; star < initial_star_count; star++)
            {
                cout << "*";
            }
            initial_star_count -= 2;
            spaces_btw = n + 2;
            initial_space_count = 1;
        }
        else
        {
            for (int space = 0; space < initial_space_count; space++)
            {
                cout << " ";
            }
            for (int star = 0; star < initial_star_count; star++)
            {
                cout << "*";
            }
            for (int space = 0; space < spaces_btw; space++)
            {
                cout << " ";
            }
            for (int star = 0; star < initial_star_count; star++)
            {
                cout << "*";
            }
            initial_star_count -= 2;
            initial_space_count++;
            spaces_btw += 2;
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