// Problem: Rotate Array
// Description: Given an array, rotate the array to the right by k steps, where k is a non-negative integer.
// Example:
// Input: [1, 2, 3, 4, 5, 6, 7], k = 3
// Output: [5, 6, 7, 1, 2, 3, 4]
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    vector<int> res;
    int k =4;
    int l=7;
    int p = l-k;


    for (int i = 0; i < k; i++)
    {
        cout<<arr[p]<<" ";
        p++;
    }
    for (int i = 0; i < l-k; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}