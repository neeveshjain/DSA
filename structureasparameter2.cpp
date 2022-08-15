#include<bits/stdc++.h>
using namespace std;
struct test{
    int A[5];
    int n;

};
void fun(struct test t1){
    t1.A[0]=10;
    t1.A[1]=9;
}
int main(){
    struct test t={{2,4,6,8,10},5};
    fun(t);

}