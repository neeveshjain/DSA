// Problem: Maximum Subarray Sum
// Description: Given an array of integers, find the contiguous subarray with the largest sum and return the sum.
// Example:
// Input: [-2, 1, -3, 4, -1, 2, 1, -5, 4]
// Output: Maximum subarray sum = 6 (Subarray: [4, -1, 2, 1])

//This problem is saolved using kadane's algorithm!
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int sum=0;
    int maxi = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
        maxi = max(maxi,sum);
        if(sum<0)
        sum =0;
    }
    cout<<maxi<<endl;
}