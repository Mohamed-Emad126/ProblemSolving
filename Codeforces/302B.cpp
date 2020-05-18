#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,x[(int)2e5],a,b;
int main()
{
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    
    scanf("%lld %lld" , &n,&m);
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&a,&b);
        x[i]=a*b;
    }
    for(int i=1;i<n;i++)
        x[i]+=x[i-1];
    for(int i=0;i<m;i++){
        scanf("%lld",&a);
        b=lower_bound(x,x+n,a)-x;
        printf("%lld\n",b+1);
    }
    return 0;
}
