#include<iostream>
#include<vector>
using namespace std;

struct IndexEntry{
    int key;
    int pos;
};

int sequentialSearch(vector<int>&arr, int start, int end, int key){
    for(int i= start; i<=end; i++){
        if(arr[i]==key) return i;
    }
    return -1;
}

int indexSequentialSearch(vector<int> &arr, vector<IndexEntry>& index, int key){
    for(int i=0; i<index.size(); i++){
        if(key<=index[i].key){
            int start = index[i].pos;
            int end = (i==index.size()-1)? arr.size()-1:index[i+1].pos-1;
            return sequentialSearch(arr, start, end, key);
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {5, 12, 18, 25, 32, 40, 48, 55, 62, 70};  //sorted datasets
    vector<IndexEntry> index = {{5,0},{12,1},{18,2},{25,3},{32,4},{40,5},{48,6},{55,7},{62,8},{70,9}}; //Index table

    int key = 55;
    int indexPos = indexSequentialSearch(arr, index, key);

    cout<<indexPos;
    return 0;
}