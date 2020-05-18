#include <iostream>
using namespace std;
long long n,m,key,ans;
long long x[(int)1e6];
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>x[i];
    ans=x[0]-1;
    for(int i=1;i<m;i++){
        key=x[i]-x[i-1];
        if(key<0)
            key+=n;
        ans+=key;
    }
    cout<<ans;
    return 0;
}
