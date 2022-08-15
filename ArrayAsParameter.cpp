#include<bits/stdc++.h>
using namespace std;

void fun(int A[], int n) // void fun(*A, int n) can also be used *A can point to values also and arrays also hence, to be specific for arrays use A[]
{
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<endl;
        A[0]=25;
    }
    
}
int main(){
    int A[5]={0,1,2,3,4};
    fun(A,5);
   return 0;
}