#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    char vir;
    cin>>n;
    int x[n],z[n];
    for(int i=0;i<n;i++){
        cin>>vir;
        x[i]=vir-48;
        //cout<<x[i]<<endl;
    }
    for(int i=0;i<n;i++){
        cin>>vir;
        z[i]=vir-48;
    }
    for(int i=0;i<n;i++){
        if(abs(x[i]-z[i])>5){
            ans+=10-abs(x[i]-z[i]);
        }
        else
            ans+=abs(x[i]-z[i]);
        //cout<<x[i]<<" "<<z[i]<<" "<<ans<<endl;
    }
    cout<<ans;
    return 0;
}
