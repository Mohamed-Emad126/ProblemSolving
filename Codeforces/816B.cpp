#include <bits/stdc++.h>
using namespace std;
int n,k,p,x[200005],z[200005],a,b,l,r;
vector<int>v;
int main()
{
    cin>>n>>k>>p;
    for(int i=0;i<n;i++,cin>>l>>r,x[l]++,x[r+1]--);
    for(int i=1;i<200005;i++,x[i]+=x[i-1]);
    for(int i=0;i<200005;i++){if(x[i]>=k) v.push_back(i);}
    //for(auto f:v) cout<<f<<" "; cout<<endl;
    for(int i=0;i<p;i++){
        cin>>a>>b;
        int fl=lower_bound(v.begin(),v.end(),a)-v.begin();
        int sl=upper_bound(v.begin(),v.end(),b)-v.begin();
        cout<<sl-fl<<endl;
    }
    return 0;
}
