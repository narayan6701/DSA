#include <stdio.h>
int main()
{
    int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};   // number of array 1's row must be equal to number of columns of array 2
    int arr2[3][2] = {{1, 2}, {3, 4}, {5, 6}}; // and number of array 1's column must be equal to number of rows of array 2
    int result[2][2] = {0};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                result[i][j] = result[i][j] + (arr1[i][k] * arr2[k][j]);
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
    }

    return 0;
}