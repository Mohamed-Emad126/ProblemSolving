#include <bits/stdc++.h>
using namespace std;
long long n,x[(int)2e5];int ans=2;
vector<int>v;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>x[i];
    if(n==1) return cout<<1 ,0;
    if(n==2) return cout<<2 ,0;
    for(int i=2;i<n;i++){
        if(x[i]==x[i-1]+x[i-2]){
            ans++;
            if(i==n-1) v.push_back(ans);}
        else{
            v.push_back(ans);
            ans=2;
        }
    }
    cout<<*max_element(v.begin(),v.end());
    return 0;
}
