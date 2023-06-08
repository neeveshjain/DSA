// Problem: Find Missing Number
// Description: Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
// Example:
// Input: [3, 0, 1]
// Output: Missing number = 2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int total = 0;
    vector<int> arr= {3,0,1};
    int n = arr.size();
    total = (n*(n+1))/2;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    } 
    cout<<total-sum<<endl;
}