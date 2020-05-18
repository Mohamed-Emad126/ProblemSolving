#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll N=(int)2e5,n,d;
pair<ll,ll>x;
deque<pair<ll,ll>>dq;
vector<ll>ans;
int main()
{
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>x.first>>x.second;
        dq.push_back(x);
    }
    sort(dq.rbegin(),dq.rend());
    int fp=0;
    ll sm=0;
    /*for(int i=0;i<n;i++)
        cout<<dq[i].first<<" "<<dq[i].second<<endl;
*/ //kadane algorithm
    for(int i=0;i<dq.size();i++){
        sm+=dq[i].second;
        if(dq[fp].first-dq[i].first>=d){
            sm-=dq[i].second;
            i--;
            ans.push_back(sm);
            sm-=dq[fp].second;
            fp++;
        }
        else if(i==dq.size()-1)
            ans.push_back(sm);
    }
    cout<<*max_element(ans.begin(),ans.end());
    return 0;
}
