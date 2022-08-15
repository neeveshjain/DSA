#include<bits/stdc++.h>
using namespace std;
int area(struct rectangle &r1){
    r1.length++;
    return r1.length*r1.breadth;
}

struct rectangle
{
    int length;
    int breadth;
};
void changeLeangth(struct rectangle *p,int l){
    p->length=l;   
}
int main(){
    struct rectangle r;
    r.length=10;
    r.breadth=5;
    cout<<area<<endl;
    changeLeangth(&r,20);
    return 0;
}

