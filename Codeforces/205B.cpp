#include <iostream>
using namespace std;
#define ll unsigned long long
ll n,x[200000],a,ans;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=1;i<n;i++){
        x[i]+=a;
        if(x[i]<x[i-1]){
            //ans+=(x[i-1]-x[i]);
            a+=(x[i-1]-x[i]);
            x[i]+=(x[i-1]-x[i]);
        }
    }
    cout<<a;
    return 0;
}
