#include <bits/stdc++.h>
using namespace std;
int n,x,nxtbegin;
deque<int>dq;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        dq.push_back(x);
    }
    if(is_sorted(dq.begin(),dq.end())){
        cout<<0;
        return 0;
    }
    if(n==2){
        cout<<1;
        return 0;
    }
    reverse(dq.begin(),dq.end());
    if(is_sorted(dq.begin(),dq.end())){
        cout<<-1;
        return 0;
    }
    reverse(dq.begin(),dq.end());
    for(int i=0;i<n-1;i++){
        if(dq[i]>dq[i+1]){
            nxtbegin=i+1;
            break;
        }
    }
    for(int i=nxtbegin;i<n;i++){
        int a=dq.back();
        dq.pop_back();
        dq.push_front(a);
    }
    //cout<<nxtbegin<<endl;
    if(is_sorted(dq.begin(),dq.end()))
        cout<<n-nxtbegin<<endl;
    else
        cout<<-1;
    return 0;
}
