#include <bits/stdc++.h>
using namespace std;
int n,m,x[int(2e5)],z[int(2e5)],a;
map<int , int> mp;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>x[i];
        mp[x[i]]++;
    }
    for(int i=0;i<n;i++){
        i?mp[x[i-1]]--:' ';
        if(mp[x[i-1]]==0){
            mp.erase(mp.find(x[i-1]));
        }
        //cout<<mp.size()<<endl;
        z[i]=mp.size();
    }
    for(int i=0;i<m;i++){
        cin>>a;
        cout<<z[a-1]<<endl;
    }
    return 0;
}
