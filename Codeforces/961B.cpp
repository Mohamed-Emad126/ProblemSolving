#include <bits/stdc++.h>
using namespace std;
int n,k,ans,ans2,x[(int)2e5],vr,z[(int)2e5];
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++){
        cin>>vr;
        if(vr) ans+=x[i];
        else z[i]=x[i];
    }
    for(int i=1;i<n;i++)
        z[i]+=z[i-1];
    for(int i=0;i<n-k+1;i++){
        if(i>0)
            ans2=max(ans2,z[i+k-1]-z[i-1]);
        else
            ans2=z[i+k-1];
    }
    cout<<ans+ans2;
    return 0;
}
