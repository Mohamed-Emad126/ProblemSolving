#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=10000;
    cin>>n>>m;
    int x[1009]={0},z;
    for(int i=0;i<m;i++){
        cin>>z;
        x[z]++;
    }
    for(int i=1;i<=n;i++){
            ans=min(ans,x[i]);
    }
    cout<<ans;
    return 0;
}
