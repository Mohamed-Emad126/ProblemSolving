#include <bits/stdc++.h>
using namespace std;
long long n,x[(int)2e5],ans;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    ans=x[0]+1;
    for(int i=0;i<n-1;i++){
        ans+=abs(x[i]-x[i+1])+2;
    }
    cout<<ans;
    return 0;
}
