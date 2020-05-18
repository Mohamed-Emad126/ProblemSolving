#include <bits/stdc++.h>
using namespace std;
int n,a,k,x;
deque<int>dq;
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        dq.push_back(x);}
    while((dq.front()<=k || dq.back()<=k)&&dq.size()>0){
        if(dq.front() <= k){
            dq.pop_front();
            a++;}
        else if(dq.back()<=k){
            dq.pop_back();
            a++;}
    }
    cout<<a;
    return 0;
}
