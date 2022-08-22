#include<bits/stdc++.h>
using namespace std;
int TaylorSeries(int x, int n)
{

    static int p=1,f=1;
    int r;
    if(n==0)
        return 1;
    else{
        r=TaylorSeries(x,n-1);
        p=p*x;
        f=f*n;
        return r+(p/f);
    }

}
int main(){
    int n=2;
    int answer=TaylorSeries(n,3);
    cout<<answer<<endl;
    return 0;
}
