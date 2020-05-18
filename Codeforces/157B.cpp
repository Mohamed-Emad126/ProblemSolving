#include <bits/stdc++.h>
using namespace std;
double n,ans,x;
vector<double>a;
double PI=atan(1)*4;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(i%2==0) ans+=(pow(a[i],2)*PI);
        else ans-=(pow(a[i],2)*PI);
    }
    (ans<0)?(ans=ans*-1):' ';
    cout<<setprecision(12)<<ans;
    return 0;
}
