#include <bits/stdc++.h>
using namespace std;
int n;
string s;
unordered_map<string,int>mp;
vector<pair<int,string>>v;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        mp[s]=i;
    }
    for(auto &it:mp){
        /*v[i].second=it.first;
        v[i].first=it.second;*/
        v.push_back({it.second,it.first});
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++)
        cout<<v[i].second<<endl;
    return 0;
}
