#include <bits/stdc++.h>
using namespace std;
long long n,f,a,b,ans;
vector<pair<long long,pair<long long,long long>>>v;
pair<long long,pair<long long,long long>>x;
int main()
{
    cin>>n>>f;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        x.first=min(a*2,b)-a;
        x.second.first=a;
        x.second.second=b;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++){
        if(f>0){ ans+=min(v[i].second.first*2,v[i].second.second); --f;}
        else ans+=min(v[i].second.first,v[i].second.second);
    }
    cout<<ans;
    return 0;
}
