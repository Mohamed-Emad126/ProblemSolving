#include <bits/stdc++.h>
using namespace std;
int n,m,ans,q,a,b,mx,x[5009][5009];
int main()
{
    cin>>n>>m>>q;
    int z[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>x[i][j];
    }
    ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(x[i][j])
                ans++;
            else{
                mx=max(mx,ans);
                ans=0;
                }
        }
        mx=max(mx,ans);
        z[i]=mx;
        mx=0;
        ans=0;
    }
    for(int i=0;i<q;i++){
        cin>>a>>b;
        a--;
        b--;
        mx=0,ans=0;
        if(x[a][b])
            x[a][b]=0;
        else
            x[a][b]=1;
        for(int i=0;i<m;i++){
            if(x[a][i])
                ans++;
            else {
                mx=max(mx,ans);
                ans=0;
            }
        }
        mx=max(mx,ans);
        z[a]=mx;
        mx=0;
        ans=0;
        /*for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cout<<x[i][j]<<" "; cout<<endl;
            }*/
        cout<<*max_element(z,z+n)<<endl;
        /*for(int i=0;i<n;i++) cout<<z[i]<<" ";
        cout<<endl;*/
    }
    return 0;
}
