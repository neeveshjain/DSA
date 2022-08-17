#include<bits/stdc++.h>
using namespace std;
void fun(int x){
    if(x>0){
        cout<<x<<endl;
        fun(x-1);
    }
}


int main(){
    int x=5;
    fun(x);
}