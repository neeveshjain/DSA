#include<iostream>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while (tc--)
    {
        int a,b,x;
        cin>>a>>b>>x;

        for (int i = 0; i < b; i++)
        {
            a=a+x;
            if (a==b)
            {
                cout<<i+1<<endl;
            } 
        }

    }
    return 0;
}