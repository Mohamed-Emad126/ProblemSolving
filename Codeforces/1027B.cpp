#include <bits/stdc++.h>
using namespace std;
long long a,b,n,q,ans;
int main()
{
    cin>>n>>q;
    for(int i=0;i<q;i++){
        cin>>a>>b;
        if( ((a&1)&&(b&1)) || (!(a&1)&&!(b&1)) ){
            ans=(((a-1)*n+b+1)/2);
            cout<<ans<<endl;
        }
        else{
            ans=((((a-1)*n)+b+1)/2+(n*n+1)/2);
            cout<<ans<<endl;
        }
        ans=0;
    }
    return 0;
}
