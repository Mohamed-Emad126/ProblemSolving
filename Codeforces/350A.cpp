#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int x[n],z[m];
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<m;i++)
        cin>>z[i];
    sort(x,x+n);
    sort(z,z+m);
    int k=max(x[n-1],2*x[0]);
    if(z[0]<=k)
        cout<<-1;
    else
        cout<<k;
    return 0;
}
