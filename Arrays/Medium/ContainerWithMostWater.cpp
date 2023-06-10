// Problem: Container With Most Water
// Description: Given n non-negative integers representing the height of each vertical line, find two lines that together with the x-axis forms a container that contains the most water. Return the maximum area of water that can be contained.
// Example:
// Input: [1, 8, 6, 2, 5, 4, 8, 3, 7]
// Output: Maximum water area = 49
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxi =0;
    int distance=0;
    int mini=0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {   
            distance=0;mini=0;
            mini = min(arr[i],arr[j]);
            distance = j-i;
            maxi = max(maxi,(distance*mini));
        }
        
    }
    cout<<maxi;
}



// #include <iostream>
// #include <vector>
// using namespace std;

// int maxArea(vector<int>& height) {
//     int left = 0;
//     int right = height.size() - 1;
//     int maxArea = 0;

//     while (left < right) {
//         int area = min(height[left], height[right]) * (right - left);
//         maxArea = max(maxArea, area);

//         if (height[left] < height[right]) {
//             left++;
//         } else {
//             right--;
//         }
//     }

//     return maxArea;
// }

// int main() {
//     vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
//     int maximumArea = maxArea(arr);
//     cout << "Maximum water area: " << maximumArea << endl;

//     return 0;
// }
