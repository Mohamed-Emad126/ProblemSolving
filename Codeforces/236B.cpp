#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ans,a,b,c;
unordered_map<ll,ll>mp;
ll NOD(ll n){
    int x=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i*i==n)
                x++;
            else
                x+=2;
        }
    }
    return x;
}
int main()
{
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                if(mp.count(i*j*k))
                    ans+=mp[i*j*k];
                else{
                    mp[i*j*k]=NOD(i*j*k);
                    ans+=mp[i*j*k];
                    }
            }
        }
    }
    
    cout<<ans%(1073741824);
    return 0;
}
