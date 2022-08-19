// Data
// Array space
// size
// length(No. of elements)
// operaions:-
// 1.Display()
// 2.Add(x)/Append(x)
// 3.Insert(index x)
// 4.Delete(index)
// 5.Search(x)
// 6.Get(index)
// 7.Set(index)
// 8.Max()/Min()
// 9.Reverse()
// 10.Shift()/Rotate()
#include<bits/stdc++.h>
using namespace std;

void Display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the number of elements you want to add in the array..."<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Display(arr,n);

}