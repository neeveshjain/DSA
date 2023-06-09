// Problem: Remove Element
// Description: Given an array nums and a value val, remove all instances of that value in-place and return the new length.
// Example:
// Input: [3, 2, 2, 3], val = 3
// Output: Array length = 2 (Array after removing all instances of 3: [2, 2])
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {3,2,2,3};
    vector<int> ans;
    int val = 3;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]!= val){
            ans.push_back(arr[i]);
        }
    }
    cout<<ans.size();
    
}