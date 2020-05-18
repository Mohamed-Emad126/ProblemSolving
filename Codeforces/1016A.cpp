#include <bits/stdc++.h>
using namespace std;
long long x[int(3e5)],n,m,ans;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){cin>>x[i];}
    for(int i=0;i<n;i++){
        ans+=x[i];
        cout<<ans/m<<" ";
        ans%=m;
    }
    return 0;
}
