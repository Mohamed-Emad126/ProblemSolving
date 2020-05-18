#include <bits/stdc++.h>
using namespace std;
string s,t;
int main()
{
    cin>>s;
    cin>>t;
    int n=s.length()+t.length();
    for(int i=1;i<=min(s.length(),t.length());i++){
        if(s[s.length()-i]==t[t.length()-i])
            n-=2;
        else
            break;
    }
    cout<<n;
    return 0;
}
