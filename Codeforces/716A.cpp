#include <iostream>
using namespace std;
long long x[200000],ans,n,c,mx=0;
int main()
{
    cin>>n>>c;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    ans=1;
    for(int i=1;i<n;i++){
        if(x[i]-x[i-1]<=c)
            ans++;
        else{
            mx=ans;
            ans=1;
        }
    }
    mx=ans;
    cout<<mx;
    return 0;
}
