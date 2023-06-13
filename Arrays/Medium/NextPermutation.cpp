// Problem: Next Permutation
// Description: Implement the "next permutation" algorithm, which rearranges numbers into the lexicographically next greater permutation of numbers. If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).
// Example:
// Input: [1, 2, 3]
// Output: Next permutation = [1, 3, 2]
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {2,1,5,4,3,0,0};
    int index = -1;
    int n = arr.size();
    for(int i = n-2; i >= 0; i--)
    {
        if(arr[i]<arr[i+1]){
            index = i;
            break;
        }
    }
    if(index==-1){
        reverse(arr.begin(),arr.end());
    }

    else{
    for (int i = n-1; i >index; i--)
    {
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1,arr.end());
    }
    
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }   
    
}