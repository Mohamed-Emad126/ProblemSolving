#include <bits/stdc++.h>
using namespace std;
int n,x[(int)2e5],a,b;
priority_queue<int>pq;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    b=n;
    for(int i=0;i<n;i++){
        if(x[i]==b){
                b--;
            cout<<x[i]<<" ";
            a=x[i];
            if(pq.size()>0){
                while(a==pq.top()+1){
                    cout<<pq.top()<<" ";
                    a=pq.top();
                    pq.pop();
                    b--;
                }
            }
            cout<<endl;
        }
        else{
            cout<<endl;
            pq.push(x[i]);
        }
    }
    return 0;
}
