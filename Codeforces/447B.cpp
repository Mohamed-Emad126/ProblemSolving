#include <bits/stdc++.h>
using namespace std;
string s;
long long k,ans;
pair<int,int>x[26];
pair<int,int>z[26];
int main()
{
    cin>>s;
    cin>>k;
    for(int i=0;i<26;i++){
        x[i].second=97+i;
        z[i].second=97+i;
        cin>>x[i].first;
        z[i].first=x[i].first;
    }
    sort(x,x+26);
    reverse(x,x+26);
    for(int i=0;i<k;i++){
        s+=(x[0].second);
    }
    //sort(s.begin(),s.end());
    //cout<<s<<endl;
    for(int i=0;i<s.length();i++){
        ans+=(z[s[i]-97].first*(i+1));
        //cout<<ans<<" "<<x[s[i]].first<<" "<<s[i]<<endl;
    }
    cout<<ans;
    return 0;
}
