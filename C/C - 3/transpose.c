#include <stdio.h>
void transpose(int rows, int columns, int arr[rows][columns], int transposed[columns][rows])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            transposed[j][i] = arr[i][j];
        }
    }
}
int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transposed[3][2];
    transpose(2, 3, arr, transposed);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", transposed[i][j]);
        }
    }
    return 0;
}