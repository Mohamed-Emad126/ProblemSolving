#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sm=0,sum=0;
    cin>>n;
    int x[n],ps[n],f[n]={0};
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]<0)
            sm+=x[i];
        else
            sum+=x[i];
    }
    cout<<sum-sm;
    return 0;
}
