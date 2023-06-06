// Problem: Remove Duplicates from Sorted Array
// Description: Given a sorted array, remove the duplicates in-place such that each element appears only once and return the new length.
// Example:
// Input: [1, 1, 2, 2, 3, 4, 4, 5]
// Output: Array length = 5 (Array after removing duplicates: [1, 2, 3, 4, 5])
#include <iostream>
#include <vector>
int main() {
    std::vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5};
    std::vector<int> res;

    int n = arr.size();
    if (n == 0) {
        // If the array is empty, no duplicates to remove
        std::cout << "0" << std::endl;
        return 0;
    }

    res.push_back(arr[0]); // Add the first element to the result vector

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            res.push_back(arr[i]); // Add non-duplicate elements to the result vector
        }
    }

    // Output the updated vector
    for (int num : res) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

