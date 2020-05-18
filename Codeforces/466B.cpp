#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll n,a,b,z,sz,sb;
vector<pair<ll,pair<ll,ll>>>v;
int main()
{
    cin>>n>>a>>b;
    if(a*b>=6*n)
        return cout<<a*b<<"\n"<<a<<" "<<b , 0;
    n*=6;
    sb=b;
    for(int i=a;i<=100000;i++){
        z=ceil(double(n)/i);
        sz=n/i;
        if(z>=b&&i*z>=n){
            //cout<<"z :"<<i*z<<" "<<i<<" "<<z<<endl;
            v.push_back({i*z,{i,z}});
        }
        if(sz>=b&&i*sz>=n){
            //cout<<"sz :"<<i*sz<<" "<<i<<" "<<sz<<endl;
            v.push_back({i*sz,{i,sz}});
        }
    }
    for(int i=b;i<=100000;i++){
        z=ceil(double(n)/i);
        sz=n/i;
        if(z>=a&&i*z>=n){
            //cout<<"z :"<<i*z<<" "<<i<<" "<<z<<endl;
            v.push_back({i*z,{z,i}});
        }
        if(sz>=a&&i*sz>=n){
            //cout<<"sz :"<<i*sz<<" "<<i<<" "<<sz<<endl;
            v.push_back({i*sz,{sz,i}});
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0].first<<"\n"<<v[0].second.first<<" "<<v[0].second.second;
    return 0;
}
