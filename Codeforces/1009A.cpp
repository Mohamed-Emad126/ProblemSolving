#include <bits/stdc++.h>
using namespace std;
int n,m,ans,x[1005],a;
deque<int>sdq;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<m;i++){
        cin>>a;
        sdq.push_back(a);
    }
    for(int i=0;i<n;i++){
        if(sdq.empty())
            return cout<<ans,0;
        if(x[i]<=sdq.front()){
            sdq.pop_front();
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
