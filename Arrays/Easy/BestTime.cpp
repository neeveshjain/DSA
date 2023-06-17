// Problem: Best Time to Buy and Sell Stock
// Description: You are given an array prices where prices[i] is the price of a given stock on the i-th day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit that can be achieved. If no profit can be made, return 0.

// Example:
// Input: prices = [7, 1, 5, 3, 6, 4]
// Output: Maximum profit = 5
#include<bits/stdc++.h>
using namespace std;
int find_min_index(vector<int> arr){
    int index = 0;
    int min_value=100000;
    for (int i = 0; i < arr.size(); i++)
    {
        if(min_value>=arr[i]){
            min_value=arr[i];
            index = i;
        }
    }
    return index;
}

int find_max_index(vector<int> arr,int index_of_min){
    int index=0;
    int max_value=0;
    for (int i = index_of_min; i < arr.size(); i++)
    {
        if(max_value<=arr[i]){
            max_value=arr[i];
            index = i;
        }
    }
    return index;
    
}

int main(){
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int index_of_min = find_min_index(arr);
    int index_of_max = find_max_index(arr,index_of_min);
    cout<<index_of_min<<" "<<index_of_max;
    return 0;

}