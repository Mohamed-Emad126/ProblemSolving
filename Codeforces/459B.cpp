#include <bits/stdc++.h>
using namespace std;
long long ans,x[int(3e5)],n;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    sort(x,x+n);
    unsigned long long ans=count(x,x+n,x[n-1]);
    unsigned long long s=count(x,x+n,x[0]);
    if(x[0]==x[n-1]){
        return cout<<0<<" "<<(n*(n-1))/2 , 0;
    }
    cout<<x[n-1]-x[0]<<" "<<ans*s;
    return 0;
}
