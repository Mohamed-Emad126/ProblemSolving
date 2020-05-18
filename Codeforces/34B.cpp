#include <bits/stdc++.h>
using namespace std;
int n,m,ans,x[109];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>x[i];
    sort(x,x+n);
    for(int i=0;i<m;i++)
        if(x[i]<=0) ans+=abs(x[i]);
    cout<<ans;
    return 0;
}
