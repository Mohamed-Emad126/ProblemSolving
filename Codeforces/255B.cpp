#include <bits/stdc++.h>
using namespace std;
string s;
int n,x,y;
int main()
{
    cin>>s;
    n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='x') x++;
        else y++;
    }
    if(x>y){
        for(int i=0;i<x-y;i++) cout<<'x';
        return 0;
    }
    for(int i=0;i<y-x;i++) cout<<'y';
    return 0;
}
