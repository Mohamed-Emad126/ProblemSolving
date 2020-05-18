#include <bits/stdc++.h>
using namespace std;
long long s,f;
pair<long long,long long>ans={-1,9999999999};
map<long long,long long>vis,dis;
queue<long long>q;
vector<long long>adj[1000000];
long long BFS(long long s){
    vis[s]++;
    dis[s]=0;
    q.push(s);
    while(!q.empty()){
        int st=q.front();
        q.pop();
        //cout<<st<<endl;
        if(st==f&&dis[st]<=ans.second){
            ans.first=f;
            ans.second=dis[st];
            continue;
        }
        else{
            if(st<=0) continue;
            if(st<f) adj[st].push_back(st*2);
            adj[st].push_back(st-1);
        }
        for(auto u:adj[st]){
            if(vis[u]) continue;
            vis[u]++;
            dis[u]=dis[st]+1;
            q.push(u);
        }
    }
    return ans.second;
}
int main()
{
    cin>>s>>f;
    cout<<BFS(s)<<endl;
    return 0;
}
