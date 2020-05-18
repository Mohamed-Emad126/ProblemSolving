#include <bits/stdc++.h>
using namespace std;
long long n,k,a,c;
vector<long long>v;
int main()
{
    cin>>n>>k;
    for(long long i=1;i*i<=n;i++){
        if(n%i==0){
           v.push_back(i);
           if(i!=1&&i*i!=n)
              v.push_back(n/i);
        }
    }
    v.push_back(n);
    sort(v.begin(),v.end());
    a=v.size();
    //cout<<a<<endl;
    if(k==1)
        return cout<<1,0;
    if(k>a||n==1)
        return cout<<-1,0;
    if(k==a)
        return cout<<n,0;
    cout<<v[k-1];
    return 0;
}
