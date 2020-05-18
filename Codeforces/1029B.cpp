#include <bits/stdc++.h>
using namespace std;
long long x[int(3e5)],n,f,s,ans=0,mx=1;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>x[i];
    s=1;
    while(s<n-1){
        if(x[f]*2>=x[s]){
            mx++;
        }
        else{
            ans=max(ans,mx);
            mx=1;
        }
        f++;
        s++;
    }
    if(x[n-2]*2>=x[n-1]&&n>1){
        mx++;
    }
    ans=max(ans,mx);
    cout<<ans;
    return 0;
}
