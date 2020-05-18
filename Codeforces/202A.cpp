#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x[150]={0};
    for(int i=0;i<s.length();i++){
        x[s[i]]++;
    }
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    for(int i=0;i<x[s[0]];i++)
        cout<<s[0];
    return 0;
}
