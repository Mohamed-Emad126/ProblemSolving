#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,ans=0,vy,pe,x;
bool ok(ll k,ll n){
    vy=0;
    ll v=n;
    while(n>0){
        vy+=min(k,n);
        if(vy*2>=v) return true;
        n-=min(k,n);
        n-=(n/10);
    }
    if(vy*2>=v)
        return true;
    else
        return false;
}
ll bs(ll n){
    ll high=(ll)2e18,low=1,md;
    while(high>low){
        md=(high+low)/2;
        if(ok(md,n)){
            high=md;
            }
        else
            low=md+1;
    }
    return high;
}
int main()
{
    cin>>n;
    cout<<bs(n);
    return 0;
}
