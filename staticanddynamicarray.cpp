#include<iostream>
using namespace std;
int main(){
    int a[5];

    int *p;
    p=new int[5];

    a[1]=2;
    p[2]=3;



    cout<<a[1]<<endl;
    cout<<p[2]<<endl;

}