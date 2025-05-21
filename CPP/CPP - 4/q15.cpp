#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int idx(vector<int> &nums, int num){
    int n = nums.size();

    for(int i=0; i<n; i++){
        if(nums[i]==num){
            return i+1;
        }
    }
}

int main(){
    vector<int> arr = {40,10,20,30};
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());
    vector<int> rank;

    int n = arr.size();

    for(int i=0; i<n; i++){
        rank.push_back(idx(sorted_arr, arr[i])); 
    }
    arr=rank;
    for(int i=0; i<n; i++){
        cout<<rank[i]<<" ";    
    }
 return 0;
}