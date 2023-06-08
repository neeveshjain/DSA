// Problem: Two Sum
// Description: Given an array of integers nums and a target value, find two numbers such that they add up to the target and return their indices.
// Example:
// Input: [2, 7, 11, 15], target = 9
// Output: Indices = [0, 1] (Numbers at indices 0 and 1 sum up to the target)
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {2, 7, 11, 15};
    int target = 9;
    int n=arr.size();

    for (int i = 0; i < n; i++)
    {
        
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j]==target){
                cout<<i<<" "<<j<<endl;
            }
        }
        
    }
    
}


// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) {
//     unordered_map<int, int> num_indices;
//     int n = nums.size();

//     for (int i = 0; i < n; i++) {
//         int complement = target - nums[i];
//         if (num_indices.count(complement)) {
//             return {num_indices[complement], i};
//         }
//         num_indices[nums[i]] = i;
//     }

//     return {}; // Return an empty vector if no pair is found
// }

// int main() {
//     vector<int> arr = {3, 1, 4, 6, 7};
//     int target = 10;

//     vector<int> indices = twoSum(arr, target);
//     if (indices.size() == 2) {
//         cout << "Indices: " << indices[0] << ", " << indices[1] << endl;
//     } else {
//         cout << "No pair of indices found." << endl;
//     }

//     return 0;
// }
