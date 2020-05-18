#include <bits/stdc++.h>
using namespace std;
int n,m,x[3009],ans,b,v[3009];
bool ok;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=0;i<m;i++) cin>>v[i];
    if(n==1){
        v[m-1]>=x[0]?cout<<0:cout<<1;
        return 0;
    }
    if(m==1){
        for(int i=0;i<n;i++){
            if(v[0]<x[i])
                b++;
        }
        return cout<<b , 0;
    }
    b=0;
    for(int i=0;i<n;i++){
        for(int j=b;j<m;j++){
            //cout<<x[i]<<" "<<v[j]<<endl;
            if(x[i]<=v[j]){
                b++;
                ok=true;
                break;
            }
            else{
                b++;
                ok=false;
                if(b==m) break;}
        }
        if(b==m){
            ok==true?ans=n-(i+1):ans=n-(i);
            break;
        }
    }
    cout<<ans;
    return 0;
}
