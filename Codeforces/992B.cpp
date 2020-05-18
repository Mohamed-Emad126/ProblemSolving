#include <bits/stdc++.h>
using namespace std;
long long x,y,l,r,gl,b,ans;
int main()
{
    cin>>l>>r>>x>>y;
    gl=y/x;
    if(y%x!=0){
        return cout<<0 , 0;
    }
    for(long long i=1;i*i<=gl;i++){
        b=gl/i;
        if((__gcd(i,b))==1&&gl%i==0&&l<=i*x&&i*x<=r&&l<=b*x&&b*x<=r){
            if(b==i) ans+=1;
            else ans+=2;
        }
    }
    cout<<ans;
    return 0;
}
