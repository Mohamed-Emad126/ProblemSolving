#include <bits/stdc++.h>
using namespace std;
long long n,m,a,b,ans=1;
vector<int>adj[2000];
bool vis[2000];
void DFS(int node){
    if(vis[node]) return;
    vis[node]=true;
    for(auto u:adj[node]){
        DFS(u);
    }
}
int main()
{
    memset(vis,false,sizeof vis);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            DFS(i);
        }
        else{
            ans*=2;
        }
    }
    cout<<ans;
    return 0;
}
