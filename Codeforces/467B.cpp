#include <iostream>
using namespace std;
int n,m,k,x[1500],fr,a,ans;
int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<m;i++) cin>>x[i];
    cin>>fr;
    for(int i=0;i<m;i++){
        int z=fr^x[i];
        for(int i=0;i<n;i++){
            if(z&(1<<i))
                a++;
        }
        if(a<=k)
            ans++;
        a=0;
    }
    cout<<ans;
    return 0;
}
