#include <bits/stdc++.h>
using namespace std;
long long n,ans,z,c,s,a;
deque<int>dq;
vector<int>v;
stack<int>stk;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        dq.push_back(c);
        c?z++:' ';
    }
    if(z==0)
        return cout<<0 , 0;
    while(dq.front()==0){
        dq.pop_front();
    }
    while(dq.back()==0){
        dq.pop_back();
    }
    stk.push(dq.front());
    dq.pop_front();
    while(dq.size()>0){
        if(!(dq.front()==1&&stk.top()==1)){
            stk.push(dq.front());
        }
        dq.pop_front();
    }
    long long f=-50,cnt=1,ans=1;
    while(stk.size()){
        if(stk.top()==0)
            cnt++;
        if(stk.top()==1){
            ans*=(cnt);
            cnt=1;
            }
        stk.pop();
    }
    cout<<ans;
    return 0;
}
