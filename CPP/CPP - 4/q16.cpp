#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void rotate_array(vector<int> &nums, int k){
    int n = nums.size();
    vector<int> ans;

    for(int i = n-k; i<n; i++){
        ans.push_back(nums[i]);
    }

    for(int i = 0; i<n-k; i++){
        ans.push_back(nums[i]);
    }

    for(int i=0; i<n; i++){
        nums[i] = ans[i];
    }
}


int main(){
    vector<int> arr = {1,2,3,4,5};
    int k = 2;
    int n = arr.size();

    rotate_array(arr, k);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}