#include<bits/stdc++.h>
using namespace std;
void reverse(string& str)
{
    int left=0,right=str.length()-1;
    while(left==right || left<right){
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        ++left;
        --right;
    }

}
int main(){
    string str= "Jain";
    reverse(str);
    cout<<str;
}