#include<bits/stdc++.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
void initialize(struct rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;   
}
int area(struct rectangle r){
    return r.length*r.breadth;
}
int changeLeangth(struct rectangle *r,int l){
    r->length=l;
}
int main(){
    struct rectangle r;
    initialize(&r,10,5);
    area(r);
    changeLeangth(&r,10);
}