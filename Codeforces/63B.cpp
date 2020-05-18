#include <bits/stdc++.h>
using namespace std;
int a,n,k,ans,coin;
map<int,int>mp;
set<int>st;
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        mp[a]++;
    }
    while(mp[k]!=n){
        st.clear();
        /*for(auto x:mp)
            cout<<x.first<<" "<<x.second<<endl;
    cout<<endl;*/
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second !=0&&it->first !=k){it->second--;
            int a=it->first;
            if(a!=k) st.insert(a+1);}
        }
        for(auto x:st){
            mp[x]++;
        }
        /*for(auto x:st)
            cout<<x<<endl;*/
        st.clear();
        coin++;
        //cout<<endl;
    }
    cout<<coin;
    return 0;
}
