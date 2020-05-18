#include <iostream>
using namespace std;
#define ll long long
ll n,l,r,x,ans,mn=1000000000000,mx=-1,pr,ck,a[20];
int main()
{
    cin>>n>>l>>r>>x;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int msk=0;msk<=(1<<n);msk++){
        for(int j=0;j<n;j++){
            if(msk&(1<<j)){
                ck++;
                mx=max(mx,a[j]);
                mn=min(mn,a[j]);
                pr+=a[j];
            }
        }
        //cout<<ck<<" "<<pr<<" "<<mn<<" "<<mx<<endl;
        if(pr>=l&&pr<=r&&mx-mn>=x)
            ans++;
        ck=0;
        mx=-1;
        mn=1000000000000;
        pr=0;
    }
    cout<<ans;
    return 0;
}
