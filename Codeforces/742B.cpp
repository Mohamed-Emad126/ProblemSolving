#include <bits/stdc++.h>
using namespace std;
long long n,x,a,ans,pos,fnd;
bool vis[int(2e5)];
bool z[int(2e5)];
map<long long,long long> fa;
set<long long>st;
int main()
{
    cin>>n>>x;
    for(int i=0;i<n;i++) {
        cin>>a;
        fa[a]++;
        st.insert(a);
    }
    if(x==0){
        for(auto i:st){
            long long fnd=x^i;
            if(st.count(fnd)){
                ans+=((fa[i]-1)*fa[fnd]);
            }
        }
        return cout<<ans/2 ,0;
    }
    for(auto i:st){
        long long fnd=x^i;
        if(st.count(fnd)){
            ans+=(fa[i]*fa[fnd]);
        }
    }
    cout<<ans/2;
    return 0;
}
