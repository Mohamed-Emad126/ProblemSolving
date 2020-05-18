#include <bits/stdc++.h>
using namespace std;
#define ll long long
int y,p;
bool prime(ll x){
    for(int i=2;i*i<=x &&i<=y;i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}
bool sc(ll x){
    for(int i=2;i*i<=x&&i<=y;i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    cin>>y>>p;
    if(y>=10){
        for(ll i=p;i>y;i--){
            if(prime(i))
                return cout<<i , 0;
        }
    }
    else{
        for(ll i=p;i>y;i--){
            if(sc(i))
                return cout<<i , 0;
        }
    }
    cout<<-1;
    return 0;
}
