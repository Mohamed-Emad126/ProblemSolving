#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll x[(int)4e5],a,b,n;
map<int,int>mp;
vector<pair<int,int>>v;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    a=1;
    for(int i=0;i<n;i++){
        mp[x[i]]++;
        if(mp[x[i]]>1){
            v.push_back({a,i+1});
            a=i+2;
            mp.clear();
            b=0;
        }
        else
            b++;
    }
    if(v.size()==0)
        return cout<<-1 , 0;
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        if(i!=v.size()-1)
            cout<<v[i].first<<" "<<v[i].second<<endl;
        else
            cout<<v[i].first<<" "<<v[i].second+b<<endl;
        }
    return 0;
}
