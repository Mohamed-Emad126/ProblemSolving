#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,n,c,d,ma,mb,dv;
set<ll>st;
map<ll,ll>mp;
int main()
{
    cin>>a>>b;
    ma=max(a,b);
    mb=min(a,b);
    for(int i=1;i*i<=ma;i++){
        if(ma%i==0){
            if(i*i!=ma) mp[ma/i]++;
            mp[i]++;
        }
    }
    for(int i=1;i*i<=mb;i++){
        if(mb%i==0){
            if(i*i!=mb)mp[mb/i]++;
            mp[i]++;
        }
    }
    for(const auto &x:mp){
        if(x.second==2)
            st.insert(x.first);
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c>>d;
        ll ans=-1;
        for(auto s:st){
            if(s>=c&&s<=d)
                ans=s;
        }
        cout<<ans<<endl;
    }
    return 0;
}
