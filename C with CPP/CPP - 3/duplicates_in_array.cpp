#include <iostream>
using namespace std;
// this program calculates the number of repeated elements in an array.
int main()
{
    int nums[] = {2, 5, 7, 5, 6, 2, 3, 4, 7, 9, 9};
    int duplicates = 0;
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        for (int j = 0; j < sizeof(nums) / sizeof(nums[0]); j++)
        {
            if (i == j)
            {
                break;
            }
            else if (nums[i] == nums[j])
            {
                ++duplicates;
            }
        }
    }
    cout <<"The number of repeated elements is "<< duplicates;
    return 0;
}
