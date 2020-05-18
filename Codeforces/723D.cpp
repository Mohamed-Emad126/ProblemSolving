#include <bits/stdc++.h>
using namespace std;
int n,m,k,ans,lv;
char gr[55][55];
bool vis[55][55];
int cdir[8]={0,1,-1,0};
int rdir[8]={1,0,0,-1};
bool ano_fuk_vis[55][55];
vector<pair<int,pair<int,int>>>v;
int FF(int r,int c,char x){
    if(vis[r][c] || gr[r][c]=='*'){
        //cout<<"return "<<r<<" "<<c<<endl;
        return 0;
    }
    vis[r][c]=true;
    gr[r][c]=x;
    int ans=1;
    for(int i=0;i<4;i++){
        if(r+cdir[i]>0 && r+cdir[i]<n-1 && c+rdir[i]>0 && c+rdir[i]<m-1)
            ans+=FF(r+cdir[i],c+rdir[i],x);
    }
    return ans;
}
int TFF(int r,int c,char x){
    if(ano_fuk_vis[r][c] || gr[r][c]=='*'){
        return 0;
    }
    ano_fuk_vis[r][c]=true;
    gr[r][c]=x;
    int ans=1;
    for(int i=0;i<4;i++){
        if(r+cdir[i]>0 && r+cdir[i]<n-1 && c+rdir[i]>0 && c+rdir[i]<m-1)
            ans+=TFF(r+cdir[i],c+rdir[i],x);
    }
    return ans;
}
int SFF(int r,int c,char x){
    if(vis[r][c] || gr[r][c]=='*'){
        return 0;
    }
    vis[r][c]=true;
    gr[r][c]=x;
    int ans=1;
    for(int i=0;i<4;i++){
        if(r+cdir[i]>=0 && r+cdir[i]<n && c+rdir[i]>=0 && c+rdir[i]<m)
            ans+=SFF(r+cdir[i],c+rdir[i],x);
    }
    return ans;
}
int main()
{
    memset(vis,false,sizeof vis);
    memset(ano_fuk_vis,false,sizeof ano_fuk_vis);
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>gr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        SFF(0,i,'"');
    }
    for(int i=0;i<n;i++){
        SFF(i,m-1,'"');
    }
    for(int i=0;i<n;i++){
        SFF(i,0,'"');
    }
    for(int i=0;i<m;i++){
        SFF(n-1,i,'"');
    }
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            if(!vis[i][j] && gr[i][j]=='.'){
                v.push_back({FF(i,j,'+'),{i,j}});
            }
        }
    }
    sort(v.begin(),v.end());
    if(k==v.size()){
        cout<<0<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(gr[i][j]=='"')
                    cout<<'.';
                else if(gr[i][j]=='+'){
                    cout<<'.';
                }
                else
                    cout<<'*';
            }
            cout<<endl;
        }
        return 0;
    }
    if(k==0){
        cout<<v.size()<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(gr[i][j]=='"')
                    cout<<'.';
                else if(gr[i][j]=='+'){
                    cout<<'*';
                }
                else
                    cout<<'*';
            }
            cout<<endl;
        }
        return 0;
    }
    for(int i=0;i<v.size()-k;i++){
        lv+=v[i].first;
        //cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
        TFF(v[i].second.first,v[i].second.second,'-');
    }
/*
    cout<<endl;
    cout<<v.size()<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<gr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
*/
    cout<<lv<<endl;
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(gr[i][j]=='"')
                    cout<<'.';
                else if(gr[i][j]=='+'){
                    cout<<'.';
                }
                else
                    cout<<'*';
            }
            cout<<endl;
        }
    return 0;
}
