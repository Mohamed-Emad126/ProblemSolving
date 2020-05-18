#include <bits/stdc++.h>
using namespace std;
long long n,a,tot;
vector<long long>ans,x;
map<long long,long long>vis;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        x.push_back(a);
        vis[a]++;
        tot+=a;
    }
    for(int i=0;i<n;i++){
        if((tot-x[i])%2==0){
            if(vis[(tot-x[i])/2]){
                if(vis[(tot-x[i])/2]==1&&(tot-x[i])/2==x[i]) continue;
                ans.push_back(i+1);
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
