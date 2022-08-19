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

struct Array{
    int *A;
    int size;
    int length;

};

void Display(struct Array arr){
    int i;
    cout<<"ELements are \n";
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<endl;
    }
    
}

int main(){
    struct Array arr;
    int n,i;
    cout<<"ENter size of an array";
    cin>>arr.size;

    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    cout<<"Enter number of numbers"<<endl;
    cin>>n;
    cout<<"Enter all elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr.A[i];   
    }
    arr.length=n;
    Display(arr);

}