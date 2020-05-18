#include <bits/stdc++.h>
using namespace std;
string s;
long long ans1,ans2,n,x;
int main()
{
    cin>>s;
    n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='^'){
            x=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(i<x){
           s[i]!='='?ans1+=int((s[i]-'0')*(x-i)):' ';
        }
        if(i>x){
            s[i]!='='?ans2+=int((s[i]-'0')*(i-x)):' ';
        }
    }
    if(ans1==ans2)
        return cout<<"balance",0;
    if(ans1>ans2)
        return cout<<"left",0;
    return cout<<"right",0;
    return 0;
}
