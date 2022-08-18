#include<bits/stdc++.h>
using namespace std;
int main(){
int tc;
cin>>tc;
while (tc--)
{
    int x,y,a,b;
    cin>>x>>y>>a>>b;

    if(x!=a && x!=b && y!=a && y!=b ){
        cout<<"2"<<endl;
    }
    else if(x==a && x==b || y==a && y==b){
        cout<<"0"<<endl;
    }
    else if(x==a||x==b||y==a||y==b){
        cout<<"1"<<endl;
    }
           
}
return 0;
}