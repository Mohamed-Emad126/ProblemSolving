#include <bits/stdc++.h>
using namespace std;
int sm,n,x[370],ck;
vector<int>v;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
        sm+=x[i];
    }
    if(n==1)
        return cout<<360, 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            ck+=x[j];
            if(ck!=sm) v.push_back(abs(ck-(sm-ck)));
        }
        ck=0;
    }
    cout<<*min_element(v.begin(),v.end());
    return 0;
}
