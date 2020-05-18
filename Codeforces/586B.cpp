#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,go=900,bk=900;
    cin>>n;
    int x[n],b[n],a[n],ans[n];
    x[0]=0;
    b[n-1]=0;
    for(int i=1;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n-1;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
        x[i]+=x[i-1];
    for(int i=n-2;i>=0;--i)
        b[i]+=b[i+1];
    /*for(int i=0;i<n;i++)
        cout<<x[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++) cout<<b[i]<<" "; cout<<endl<<endl;*/
    for(int i=0;i<n;i++)
        ans[i]=x[i]+b[i]+a[i];
    sort(ans,ans+n);
    cout<<ans[0]+ans[1];
    return 0;
}
