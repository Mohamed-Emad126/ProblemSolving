#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,ans;
pair<ll,ll>x[int(90)];
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>x[i].second>>x[i].first;
    sort(x,x+m);
    reverse(x,x+m);
    /*for(int i=0;i<m;i++)
        cout<<x[i].second<<" "<<x[i].first<<endl;*/
    for(int i=0;i<m;i++){
        //cout<<n<<endl;
        if(x[i].second>n){
            ans+=(x[i].first*n);
        }
        else
            ans+=(x[i].first*x[i].second);
        n-=x[i].second;
        if(n<=0)
            break;
    }
    cout<<ans;
    return 0;
}
