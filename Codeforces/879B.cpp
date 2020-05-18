#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll n,k,a,mx=0,z;
deque<int>dq;
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        mx=max(mx,a);
        dq.push_back(a);
    }
    if(k>=n)
        cout<<mx;
    else{
        while(dq.front()!=mx){
            if(dq.front()>dq[1]){
                z++;
                ll x=dq.front();
                dq.pop_front();
                ll y=dq.front();
                dq.pop_front();
                dq.push_back(y);
                dq.push_front(x);
            }
            else{
                z=1;
                dq.push_back(dq.front());
                dq.pop_front();
            }
            if(z==k)
                return cout<<dq.front() , 0;
        }
        cout<<dq.front();
    }
    return 0;
}
