#include <bits/stdc++.h>
using namespace std;
long long n,pop,a,b,c;
vector<pair<double,long long>>v;
int main()
{
    cin>>n>>pop;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        v.push_back({(a*a)+(b*b),c});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        pop+=v[i].second;
        if(pop>=1000000){
            return cout<<setprecision(10)<<sqrt(v[i].first) , 0;
        }
    }
    cout<<-1;
    return 0;
}
