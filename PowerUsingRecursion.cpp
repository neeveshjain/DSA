#include<bits/stdc++.h>
using namespace std;
int power(int m, int n){

    if(m==0){
        return 1;
    }
    else
    return pow(m,n-1)*m;

}
int main(){
    int n=2,p=5;
    int ans=power(n,p);
    cout<<ans<<endl;
}