#include <bits/stdc++.h>
using namespace std;
int n,a,x[6005],ans,mn;
deque<int>dq;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>a;
            x[a]++;
            mn=min(a,mn);
    }
    for(int i=mn;i<6000;i++){
        if(x[i]>1){
            while(x[i]!=1){
                dq.push_back(i);
                x[i]--;
            }
        }
        if(x[i]==0&&!dq.empty()){
            ans+=(i-dq.front());
            x[i]++;
            dq.pop_front();
        }
    }
    cout<<ans;
    return 0;
}
