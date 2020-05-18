#include <bits/stdc++.h>
using namespace std;
long long int n,amin=LLONG_MAX,bmax=-1,ans=-1;
int main()
{
    cin>>n;
    long long int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        amin=min(amin,a[i]);
        bmax=max(bmax,b[i]);
    }
    //cout<<amin<<" "<<bmax<<endl;
    for(int i=0;i<n;i++){
        if(a[i]==amin&&b[i]==bmax){
            ans=i+1;
            break;
        }
    }
    cout<<ans;
    return 0;
}
