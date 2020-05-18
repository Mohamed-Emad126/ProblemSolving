#include <bits/stdc++.h>
using namespace std;
int n,sm,a,fsm;
priority_queue<pair<int,int>>pq;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
            sm=0;
        for(int j=0;j<4;j++){
            cin>>a;
            sm+=a;
        }
        if(i==0)
            fsm=sm;
        pq.push({sm,n-i});
    }
    for(int i=0;i<n;i++){
        if(pq.top().first==fsm&&pq.top().second==n){
            return cout<< i+1 , 0;
        }
        else{
            pq.pop();
        }
    }
    return 0;
}
