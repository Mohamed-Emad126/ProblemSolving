#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,ans=0,z;
    cin>>n>>a>>b>>c;
    for(int i=0;i*a<=n;i++){
        for(int j=0;j*b<=n;j++){
            z=(n-i*a-j*b)/c;
            if((i*a+j*b+z*c)==n&&z>=0){
                //cout<<i<<" "<<j<<" "<<z<<endl;
                ans=max(ans,i+j+z);
            }
        }
    }
    /*for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";*/
    cout<<ans;
    return 0;
}
