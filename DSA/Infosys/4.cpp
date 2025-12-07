#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max_good_sub_array(vector<int> &a, int &n, int &k)
{
    unordered_map<int, int> freq;
    int left = 0;
    int distinct = 0;
    int curr_sum = 0, max_sum = 0;

    for (int right = 0; right < n; right++)
    {
        freq[a[right]]++;
        if (freq[a[right]] == 1)
        {
            distinct++;
        }
        curr_sum += a[right];

        while (distinct > k)
        {
            freq[a[left]]--;
            curr_sum -= a[left];
            if (freq[a[left]] == 0)
            {
                distinct--;
            }
            left++;
        }
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

int main()
{
    int n, k;
    cout << "Enter the value of n \n";
    cin >> n;
    cout << "Enter the value of k \n";
    cin >> k;
    cout << "Now enter the elements of array \n";
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The output is " << max_good_sub_array(a, n, k) << endl;
    return 0;
}