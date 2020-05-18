#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sm=0,ans=0,ns=0;
    cin>>n;
    int x[n]={0};
    for(int i=0;i<n;i++){
        cin>>x[i];
        sm+=x[i];}
    for(int i=0;i<n;i++){
        ns+=x[i];
        if(2*ns>=sm){
            ans=i+1;
            break;
        }
    }
    cout<<ans;
    return 0;
}
