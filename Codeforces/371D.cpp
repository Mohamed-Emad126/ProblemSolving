#include <bits/stdc++.h>
using namespace std;
int n,a,b,c,m,val[int(2e5)+9],pos[int(2e5)+9];
vector<int>adj;
int FF(int b){
    if(b==n)
        return b;
    if(val[b]<adj[b]){
        int x=adj[b]-val[b];
        if(c<=x){
            val[b]+=c;
            return b;
        }
        else if(c>x){
            val[b]=adj[b];
            c=(c-x);
        }
    }
    return pos[b]=FF(pos[b]);
}
int main()
{
    memset(val,0,sizeof val);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        adj.push_back(a);
        pos[i]=i+1;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        if(a==2){
            cout<<val[b-1]<<endl;
        }
        else{
            cin>>c;
            FF(b-1);
        }
    }
    return 0;
}
